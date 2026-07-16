#!/usr/bin/env python3
"""Generate MWCC-matching Thumb asm for a function range using baserom + relocs.

Usage:
  python tools/gen_match_thumb.py 0xADDR 0xSIZE prefix > out.inc.cpp
"""
from __future__ import annotations

import re
import struct
import sys
from pathlib import Path

from capstone import Cs, CS_ARCH_ARM, CS_MODE_THUMB

ROOT = Path(__file__).resolve().parents[1]
BASE = 0x02000000
arm9 = (ROOT / "extract/eur/arm9/arm9.bin").read_bytes()

syms_by_addr: dict[int, str] = {}
# Prefer arm9 symbols; overlays fill gaps. When both exist, keep first unless
# the new name is more specific (func_ov* / data_ov*).
for path in [ROOT / "config/eur/arm9/symbols.txt", *sorted((ROOT / "config/eur/arm9/overlays").rglob("symbols.txt"))]:
    for line in open(path):
        m = re.match(r"(\S+)\s+kind:(\S+)\s+addr:(0x[0-9a-f]+)", line)
        if m:
            name, kind, addr = m.group(1), m.group(2), int(m.group(3), 16)
            prev = syms_by_addr.get(addr)
            if prev is None:
                syms_by_addr[addr] = name
            elif prev.startswith("func_") and name.startswith("func_ov"):
                # Prefer explicit overlay names over generic func_XXXXXXXX
                if re.match(r"func_[0-9a-f]{8}$", prev):
                    syms_by_addr[addr] = name
            elif prev.startswith("data_") and name.startswith("data_ov"):
                if re.match(r"data_[0-9a-f]{8}$", prev):
                    syms_by_addr[addr] = name

# from_addr -> (kind, to_addr, preferred_name from delink when available)
relocs: dict[int, tuple[str, int]] = {}
for line in open(ROOT / "config/eur/arm9/relocs.txt"):
    m = re.match(r"from:(0x[0-9a-f]+) kind:(\S+) to:(0x[0-9a-f]+)", line)
    if m:
        relocs[int(m.group(1), 16)] = (m.group(2), int(m.group(3), 16))

# Optional: override symbol names from a delink .o for exact match
def load_delink_reloc_names(delink_path: Path, func_addr: int, func_size: int) -> dict[int, str]:
    """Map function-local offset -> symbol name used by delink relocs."""
    if not delink_path or not delink_path.exists():
        return {}
    data = delink_path.read_bytes()
    e_shoff = struct.unpack_from("<I", data, 32)[0]
    e_shentsize = struct.unpack_from("<H", data, 46)[0]
    e_shnum = struct.unpack_from("<H", data, 48)[0]
    e_shstrndx = struct.unpack_from("<H", data, 50)[0]

    def sh(i):
        off = e_shoff + i * e_shentsize
        return struct.unpack_from("<IIIIIIIIII", data, off)

    shstr = sh(e_shstrndx)
    shstrtab = data[shstr[4] : shstr[4] + shstr[5]]
    secs = []
    for i in range(e_shnum):
        s = sh(i)
        n = shstrtab[s[0] : shstrtab.find(b"\0", s[0])].decode()
        secs.append({"n": n, "s": s})
    sym = next(x for x in secs if x["n"] == ".symtab")
    strtab = secs[sym["s"][6]]
    strt = data[strtab["s"][4] : strtab["s"][4] + strtab["s"][5]]
    # find function by address via size match + name containing addr bits - use symbols.txt name
    fname = syms_by_addr.get(func_addr, f"func_{func_addr:08x}")
    fval = None
    for j in range(0, sym["s"][5], 16):
        so = sym["s"][4] + j
        st_name, st_val, st_size, st_info, st_other, st_shndx = struct.unpack_from(
            "<IIIBBH", data, so
        )
        nm = strt[st_name : strt.find(b"\0", st_name)].decode()
        if nm == fname and st_size == func_size:
            fval = st_val
            break
    if fval is None:
        return {}
    out: dict[int, str] = {}
    rela = next((x for x in secs if x["n"] == ".rela.text"), None)
    if not rela:
        return {}
    for k in range(0, rela["s"][5], 12):
        r_offset, r_info, r_addend = struct.unpack_from("<IIi", data, rela["s"][4] + k)
        if fval <= r_offset < fval + func_size:
            r_sym = r_info >> 8
            so = sym["s"][4] + r_sym * 16
            st_name = struct.unpack_from("<I", data, so)[0]
            nm = strt[st_name : strt.find(b"\0", st_name)].decode()
            out[r_offset - fval] = nm
    return out

BRANCH = {
    "b",
    "bl",
    "beq",
    "bne",
    "bcs",
    "bcc",
    "bmi",
    "bpl",
    "bvs",
    "bvc",
    "bhi",
    "bls",
    "bge",
    "blt",
    "bgt",
    "ble",
    "blo",
    "bhs",
    "bal",
}


def safe_sym(name: str) -> str:
    if re.match(r"^[A-Za-z_][A-Za-z0-9_]*$", name):
        return name
    return "sym_" + re.sub(r"[^A-Za-z0-9_]", "_", name)


def sym_at(addr: int) -> str:
    a = addr & ~1
    if a in syms_by_addr:
        return safe_sym(syms_by_addr[a])
    return f"func_{a:08x}"


def normalize_mn(mn: str) -> str:
    if mn == "bhs":
        return "bcs"
    if mn == "blo":
        return "bcc"
    if mn == "svc":
        return "swi"
    if mn == "ldm":
        return "ldmia"
    if mn == "stm":
        return "stmia"
    m = re.match(
        r"^(and|eor|sub|rsb|add|adc|sbc|orr|bic|mov|mvn|mul|lsl|lsr|asr|ror|neg)s$",
        mn,
    )
    if m:
        return m.group(1)
    return mn


def needs_alias(name: str) -> bool:
    return name.startswith("_Z") or len(name) > 30


def gen_func(addr: int, size: int, prefix: str, delink: Path | None = None) -> str:
    name = syms_by_addr.get(addr, f"func_{addr:08x}")
    code = arm9[addr - BASE : addr - BASE + size]
    md = Cs(CS_ARCH_ARM, CS_MODE_THUMB)
    insns = list(md.disasm(code, addr))
    insn_at = {ins.address: ins for ins in insns}
    # offset-within-func -> exact symbol name from delink (resolves overlay ambiguity)
    delink_names = load_delink_reloc_names(delink, addr, size) if delink else {}

    pool_addrs: set[int] = set()
    for ins in insns:
        if ins.mnemonic.startswith("ldr") and "pc" in ins.op_str:
            m = re.search(r"\[pc(?:, #(0x[0-9a-fA-F]+|-?[0-9]+))?\]", ins.op_str)
            if m:
                imm = int(m.group(1), 0) if m.group(1) else 0
                pool = ((ins.address + 4) & ~3) + imm
                if addr <= pool < addr + size:
                    pool_addrs.add(pool)
    for a in range(addr, addr + size, 2):
        if a in relocs and relocs[a][0] == "load":
            pool_addrs.add(a)

    labels: set[int] = set()
    for ins in insns:
        if ins.mnemonic in BRANCH or ins.mnemonic in ("bl", "blx"):
            m = re.search(r"#?(0x[0-9a-fA-F]+)", ins.op_str)
            if m:
                tgt = int(m.group(1), 16)
                if ins.mnemonic == "blx":
                    tgt &= ~1
                if addr <= tgt < addr + size and tgt not in pool_addrs:
                    labels.add(tgt)

    long_targets: dict[str, str] = {}
    data_syms: set[str] = set()
    func_decls: set[str] = set()
    alias_i = 0

    def ref_func(full: str) -> str:
        nonlocal alias_i
        full = safe_sym(full)
        if needs_alias(full):
            if full not in long_targets:
                long_targets[full] = f"{prefix}{alias_i}"
                alias_i += 1
            return long_targets[full]
        func_decls.add(full)
        return full

    def ref_data(full: str, addend: int = 0) -> str:
        full = safe_sym(full)
        data_syms.add(full)
        if addend:
            return f"{full}+{addend}"
        return full

    lines: list[str] = []
    i = 0
    emitted_pools: set[int] = set()

    while i < size:
        a = addr + i

        if a in pool_addrs and a not in emitted_pools:
            if a in labels:
                lines.append(f"lbl_{a:08x}:")
            # Always emit baserom absolute pool word. MWCC cannot always form
            # dcd of C++/bss symbols; a later obj post-pass can restore relocs
            # if needed. Absolute pools still match when the unit is linked at
            # baserom VAs; objdiff compares reloc-aware for load sites when
            # both sides have matching ABS32 relocs — we also emit a symbol
            # form when it is a simple C identifier that is safe to declare.
            off = a - addr
            baserom_val = struct.unpack_from("<I", code, i)[0]
            use_sym = None
            if off in delink_names:
                cand = delink_names[off]
                # Safe C identifiers only; skip C++ mangled and conflict-prone names
                if re.match(r"^[A-Za-z_][A-Za-z0-9_]*$", cand) and not cand.startswith(
                    ("_Z", "g_", "data_02", "BaseAction", "darts")
                ):
                    # allow data_ov* and func_* for overlays
                    if cand.startswith("data_ov") or cand.startswith("func_ov"):
                        use_sym = cand
            if use_sym:
                lines.append(f"\tdcd {ref_data(use_sym)}")
            else:
                lines.append(f"\tdcd 0x{baserom_val:08X}")
            emitted_pools.add(a)
            i = (a + 4) - addr
            continue

        if a in labels:
            lines.append(f"lbl_{a:08x}:")

        in_pool = any(p <= a < p + 4 for p in pool_addrs)
        if a not in insn_at or in_pool:
            j = i
            while j < size:
                aa = addr + j
                if aa in pool_addrs and aa not in emitted_pools:
                    break
                if (
                    aa in insn_at
                    and not any(p <= aa < p + 4 for p in pool_addrs)
                    and insn_at[aa].mnemonic
                    not in {"stcl", "ldcl", "cdp", "mcr", "mrc", "mcrr", "mrrc", "ldc", "stc"}
                ):
                    break
                if j > i and aa in labels:
                    break
                j += 2
            if j <= i:
                j = min(i + 2, size)
            chunk = code[i:j]
            pad = (4 - len(chunk) % 4) % 4
            chunk = chunk + b"\x00" * pad
            for off in range(0, len(chunk), 4):
                w = struct.unpack_from("<I", chunk, off)[0]
                lines.append(f"\tdcd 0x{w:08X}")
            i = j
            continue

        ins = insn_at[a]
        ilen = len(ins.bytes)
        mn = normalize_mn(ins.mnemonic)
        op = ins.op_str
        raw_mn = ins.mnemonic

        # Thumb ADD Rd, Rn, Rm (0x1800)
        if ilen == 2:
            h = struct.unpack_from("<H", code, i)[0]
            if 0x1800 <= h <= 0x19FF and mn == "add":
                rm = (h >> 6) & 7
                rn = (h >> 3) & 7
                rd = h & 7
                lines.append(f"\tadd r{rd}, r{rn}, r{rm}")
                i += ilen
                continue
            # ADD Rd, #imm8
            if 0x3000 <= h <= 0x31FF and mn == "add":
                rd = (h >> 8) & 7
                imm = h & 0xFF
                lines.append(f"\tadd r{rd}, #{imm:#x}" if imm > 9 else f"\tadd r{rd}, #{imm}")
                i += ilen
                continue
            # ADDS Rd, Rn, #imm3
            if 0x1C00 <= h <= 0x1DFF and mn == "add":
                imm = (h >> 6) & 7
                rn = (h >> 3) & 7
                rd = h & 7
                lines.append(f"\tadd r{rd}, r{rn}, #{imm}")
                i += ilen
                continue

        if raw_mn in ("bl", "blx") or mn in BRANCH:
            if raw_mn == "blx" and re.match(r"^(r\d+|ip|sp|lr)$", op.strip()):
                lines.append(f"\tblx {op.strip()}")
                i += ilen
                continue
            m = re.search(r"#?(0x[0-9a-fA-F]+)", op)
            if not m:
                lines.append(f"\t{mn} {op}")
                i += ilen
                continue
            tgt = int(m.group(1), 16)
            if raw_mn == "blx":
                tgt &= ~1
            if addr <= tgt < addr + size:
                if raw_mn in ("bl", "blx"):
                    lines.append(f"\tbl lbl_{tgt:08x}")
                else:
                    lines.append(f"\t{mn} lbl_{tgt:08x}")
            else:
                if raw_mn in ("bl", "blx"):
                    off = a - addr
                    if off in delink_names:
                        full = delink_names[off]
                    elif a in relocs:
                        to = relocs[a][1] & ~1
                        full = sym_at(to)
                    else:
                        full = sym_at(tgt)
                    lines.append(f"\tbl {ref_func(full)}")
                else:
                    # external short branch: raw
                    w = struct.unpack_from("<I" if ilen == 4 else "<H", code, i)[0]
                    if ilen == 2 and i + 4 <= size:
                        w = struct.unpack_from("<I", code, i)[0]
                        lines.append(f"\tdcd 0x{w:08X}")
                        i += 4
                        continue
                    lines.append(f"\tdcd 0x{w:08X}" if ilen == 4 else f"\tdcd 0x{w:04X}")
            i += ilen
            continue

        if mn == "mul":
            parts = [p.strip() for p in op.split(",")]
            lines.append(f"\tmul {parts[0]}, {parts[1]}")
            i += ilen
            continue

        if mn in ("push", "pop"):
            lines.append(f"\t{mn} {op}")
            i += ilen
            continue

        if mn in ("ldmia", "stmia"):
            if "!" not in op:
                op = op.replace(",", "!,", 1) if "," in op else op + "!"
            lines.append(f"\t{mn} {op}")
            i += ilen
            continue

        if mn == "ldr" and re.search(r"\[r\d+\]$", op):
            op = re.sub(r"\]$", ", #0]", op)
            lines.append(f"\tldr {op}")
            i += ilen
            continue

        if raw_mn == "rsbs":
            m = re.match(r"(r\d+), (r\d+), #0$", op)
            if m:
                lines.append(f"\tneg {m.group(1)}, {m.group(2)}")
                i += ilen
                continue

        lines.append(f"\t{mn} {op}" if op else f"\t{mn}")
        i += ilen

    for p in sorted(pool_addrs - emitted_pools):
        off = p - addr
        if 0 <= off <= size - 4:
            if p in labels:
                lines.append(f"lbl_{p:08x}:")
            if p in relocs and relocs[p][0] == "load":
                lines.append(f"\tdcd {ref_data(sym_at(relocs[p][1]))}")
            else:
                w = struct.unpack_from("<I", code, off)[0]
                lines.append(f"\tdcd 0x{w:08X}")

    out: list[str] = []
    out.append("extern \"C\" {")
    for full, short in long_targets.items():
        out.append(f'    void {short}(void) __attribute__((alias("{full}")));')
    for s in sorted(func_decls):
        out.append(f"    void {s}(void);")
    for s in sorted(data_syms):
        out.append(f"    int {s};")
    out.append("}")
    out.append("")
    out.append("#pragma thumb on")
    out.append(f"extern \"C\" asm int {name}(void)")
    out.append("{")
    out.extend(lines)
    out.append("}")
    return "\n".join(out) + "\n"


def main() -> None:
    if len(sys.argv) < 4:
        print(
            "usage: gen_match_thumb.py ADDR SIZE PREFIX [delink.o]",
            file=sys.stderr,
        )
        sys.exit(2)
    addr = int(sys.argv[1], 0)
    size = int(sys.argv[2], 0)
    prefix = sys.argv[3]
    delink = Path(sys.argv[4]) if len(sys.argv) > 4 else None
    sys.stdout.write(gen_func(addr, size, prefix, delink))


if __name__ == "__main__":
    main()
