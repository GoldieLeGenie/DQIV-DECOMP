#!/usr/bin/env python3
"""Generate Thumb (and mixed) Lib_*.cpp from baserom: Capstone -> MWCC mnemonics."""
from __future__ import annotations

import re
import struct
import sys
from pathlib import Path

from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM, CS_MODE_THUMB

ROOT = Path(__file__).resolve().parents[1]
BASE = 0x02000000
data = (ROOT / "extract/eur/arm9/arm9.bin").read_bytes()

all_syms: dict[int, str] = {}
funcs: dict[int, tuple[str, int, bool]] = {}
for line in open(ROOT / "config/eur/arm9/symbols.txt"):
    m = re.match(
        r"(\S+)\s+kind:function\((arm|thumb),size=(0x[0-9a-f]+)\)\s+addr:(0x[0-9a-f]+)",
        line,
    )
    if m:
        name, mode, size, addr = m.group(1), m.group(2), int(m.group(3), 16), int(m.group(4), 16)
        funcs[addr] = (name, size, mode == "thumb")
        all_syms[addr] = name
        continue
    m = re.match(r"(\S+)\s+kind:\S+\s+addr:(0x[0-9a-f]+)", line)
    if m:
        n, a = m.group(1), int(m.group(2), 16)
        if a not in all_syms:
            all_syms[a] = n

relocs: dict[int, tuple[str, int]] = {}
for line in open(ROOT / "config/eur/arm9/relocs.txt"):
    m = re.match(r"from:(0x[0-9a-f]+) kind:(\S+) to:(0x[0-9a-f]+)", line)
    if m:
        relocs[int(m.group(1), 16)] = (m.group(2), int(m.group(3), 16))

BRANCH_MN = {
    "b", "bl", "beq", "bne", "bcs", "bcc", "bmi", "bpl", "bvs", "bvc",
    "bhi", "bls", "bge", "blt", "bgt", "ble", "blo", "bhs", "bal",
}
COND_BRANCH = BRANCH_MN - {"b", "bl", "bal"}
STRIP_S = re.compile(
    r"^(and|eor|sub|rsb|add|adc|sbc|orr|bic|mov|mvn|mul|lsl|lsr|asr|ror|neg)s$"
)
DATAISH = {"stcl", "ldcl", "cdp", "mcr", "mrc", "mcrr", "mrrc", "ldc", "stc"}


def parse_imm(s: str | None) -> int:
    if not s:
        return 0
    return int(s, 0)


def safe_c_sym(name: str) -> str:
    if re.match(r"^[A-Za-z_][A-Za-z0-9_]*$", name):
        return name
    return "sym_" + re.sub(r"[^A-Za-z0-9_]", "_", name.lstrip("."))


def sym_for(addr: int, kind: str = "") -> str:
    if addr in all_syms:
        return safe_c_sym(all_syms[addr])
    n = f"func_{addr:08x}" if "call" in kind else f"data_{addr:08x}"
    all_syms[addr] = n
    return n


def resolve_sym(addr: int, local_names: dict[int, str], kind: str = "") -> str:
    if addr in local_names:
        return local_names[addr]
    return sym_for(addr, kind)


def is_branch(mn: str) -> bool:
    return mn in BRANCH_MN


def normalize_thumb_mn(mn: str) -> str:
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
    m = STRIP_S.match(mn)
    if m:
        return m.group(1)
    return mn


def emit_dcd_bytes(chunk: bytes) -> list[str]:
    lines = []
    pad = (4 - (len(chunk) % 4)) % 4
    if pad:
        chunk = chunk + b"\x00" * pad
    for i in range(0, len(chunk), 4):
        w = struct.unpack_from("<I", chunk, i)[0]
        lines.append(f"\tdcd 0x{w:08X}")
    return lines


def emit_raw_insn(code: bytes, off: int, ilen: int) -> tuple[list[str], int]:
    """Emit raw instruction bytes as dcd. Prefer exact ilen; for 2-byte, pair with next halfword
    only when that is the only MWCC-legal option (always pair to keep alignment, caller must
    only use for 4-byte insns when possible)."""
    if ilen >= 4 and off + 4 <= len(code):
        w = struct.unpack_from("<I", code, off)[0]
        return [f"\tdcd 0x{w:08X}"], 4
    # 2-byte: pair with following halfword to form one dcd (caller should ensure following
    # halfword is also meant to be raw, OR is a pool/nop). We mark consumed=2 and emit
    # low half only via a trick: use `dcd` of the halfword zero-extended is wrong size.
    # Instead emit the 2-byte value twice-packed with next always, consume 4 — only safe
    # for trailing padding. For mid-stream 2-byte, prefer not calling this.
    if off + 2 <= len(code):
        if off + 4 <= len(code):
            w = struct.unpack_from("<I", code, off)[0]
            return [f"\tdcd 0x{w:08X}"], 4
        w = struct.unpack_from("<H", code, off)[0]
        return [f"\tdcd 0x0000{w:04X}"], 2
    return [], 0


def fix_ops(mn: str, op: str) -> tuple[str, str] | None:
    """Normalize Capstone ops for MWCC; None => treat as data."""
    # high-reg / SP add: 'add r1, sp, r1' -> 'add r1, sp'
    m = re.match(r"^(r\d+|ip|sp|lr), (r\d+|ip|sp|lr), (r\d+|ip|sp|lr)$", op)
    if mn == "add" and m:
        rd, a, b = m.group(1), m.group(2), m.group(3)
        if rd == b:
            return mn, f"{rd}, {a}"
        if rd == a:
            return mn, f"{rd}, {b}"
    # invalid shift
    m = re.search(r"#(0x[0-9a-fA-F]+|[0-9]+)$", op)
    if mn in ("lsl", "lsr", "asr", "ror") and m:
        imm = int(m.group(1), 0)
        if imm >= 32 or imm < 0:
            return None
    return mn, op


def gen_thumb_func(
    addr: int,
    size: int,
    local_names: dict[int, str],
    unit_mid_labels: set[int] | None = None,
    unit_start: int = 0,
    unit_end: int = 0,
) -> list[str]:
    code = data[addr - BASE : addr - BASE + size]
    md = Cs(CS_ARCH_ARM, CS_MODE_THUMB)
    insns = list(md.disasm(code, addr))
    insn_at = {ins.address: ins for ins in insns}

    pool_addrs: set[int] = set()
    for insn in insns:
        if insn.mnemonic.startswith("ldr") and "pc" in insn.op_str:
            m = re.search(r"\[pc(?:, #(0x[0-9a-fA-F]+|-?[0-9]+))?\]", insn.op_str)
            if m:
                imm = parse_imm(m.group(1))
                pool = ((insn.address + 4) & ~3) + imm
                if addr <= pool < addr + size:
                    pool_addrs.add(pool)
    for off in range(0, size, 2):
        a = addr + off
        if a in relocs and relocs[a][0] == "load":
            pool_addrs.add(a)

    labels: set[int] = set()
    for insn in insns:
        if is_branch(insn.mnemonic) or insn.mnemonic in ("blx",):
            m = re.search(r"#?(0x[0-9a-fA-F]+)", insn.op_str)
            if m:
                tgt = int(m.group(1), 16)
                if insn.mnemonic == "blx":
                    tgt &= ~1
                if addr <= tgt < addr + size and tgt not in pool_addrs:
                    labels.add(tgt)
    if unit_mid_labels:
        for tgt in unit_mid_labels:
            if addr <= tgt < addr + size:
                labels.add(tgt)

    def emit_pool(pool: int) -> list[str]:
        off = pool - addr
        if off < 0 or off + 4 > size:
            return []
        w = struct.unpack_from("<I", code, off)[0]
        return [f"\tdcd 0x{w:08X}"]

    lines: list[str] = []
    i = 0
    emitted_pools: set[int] = set()

    while i < size:
        a = addr + i

        if a in pool_addrs and a not in emitted_pools:
            if a in labels:
                lines.append(f"lbl_{a:08x}:")
            lines.extend(emit_pool(a))
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
                    and insn_at[aa].mnemonic not in DATAISH
                ):
                    break
                if j > i and aa in labels:
                    break
                j += 1
            if j <= i:
                j = min(i + 2, size)
            lines.extend(emit_dcd_bytes(code[i:j]))
            i = j
            continue

        insn = insn_at[a]
        ilen = len(insn.bytes)

        if insn.mnemonic in DATAISH:
            raw, cons = emit_raw_insn(code, i, max(ilen, 2))
            lines.extend(raw)
            i += cons
            continue

        mn = normalize_thumb_mn(insn.mnemonic)
        op = insn.op_str
        fixed = fix_ops(mn, op)
        if fixed is None:
            raw, cons = emit_raw_insn(code, i, ilen)
            lines.extend(raw)
            i += cons
            continue
        mn, op = fixed

        if insn.mnemonic == "rsbs":
            m = re.match(r"(r\d+|ip|sp|lr), (r\d+|ip|sp|lr), #0$", op)
            if m:
                lines.append(f"\tneg {m.group(1)}, {m.group(2)}")
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
            # Thumb LDM/STM always write back; Capstone often omits '!' but MWCC requires it.
            if "!" not in op:
                op = op.replace(",", "!,", 1) if "," in op else op + "!"
            lines.append(f"\t{mn} {op}")
            i += ilen
            continue

        if mn.startswith("ldr") and "pc" in op:
            lines.append(f"\t{mn} {op}")
            i += ilen
            continue

        if is_branch(mn) or mn in ("bl", "blx"):
            if mn == "blx" and re.match(r"^(r\d+|ip|sp|lr)$", op.strip()):
                lines.append(f"\tblx {op.strip()}")
                i += ilen
                continue

            m = re.search(r"#?(0x[0-9a-fA-F]+)", op)
            if not m:
                lines.append(f"\t{mn} {op}")
                i += ilen
                continue

            tgt = int(m.group(1), 16)
            if mn == "blx":
                tgt &= ~1

            # Local branch inside this function -> label
            if addr <= tgt < addr + size:
                lines.append(f"\t{mn} lbl_{tgt:08x}")
                i += ilen
                continue

            # Outside: resolve symbol for bl/blx; raw for short b/cond (range/label limits)
            if a in relocs:
                kind, to = relocs[a]
                to &= ~1
                sym = resolve_sym(to, local_names, kind)
                tgt = to
            elif tgt in local_names:
                sym = local_names[tgt]
            else:
                sym = resolve_sym(tgt, local_names, "call")

            if mn == "bl":
                lines.append(f"\tbl {sym}")
            elif mn == "blx":
                th = funcs.get(tgt)
                lines.append(f"\tbl {sym}" if th and th[2] else f"\tblx {sym}")
            else:
                # short branch outside function: raw 2 bytes + following halfword
                raw, cons = emit_raw_insn(code, i, ilen)
                lines.extend(raw)
                i += cons
                continue
            i += ilen
            continue

        lines.append(f"\t{mn} {op}".rstrip() if op else f"\t{mn}")
        i += ilen

    for p in sorted(pool_addrs - emitted_pools):
        if p in labels:
            lines.append(f"lbl_{p:08x}:")
        lines.extend(emit_pool(p))
    return lines


def gen_arm_func_simple(addr: int, size: int, local_names: dict[int, str]) -> list[str]:
    code = data[addr - BASE : addr - BASE + size]
    lines = []
    for off in range(0, size, 4):
        w = struct.unpack_from("<I", code, off)[0]
        lines.append(f"\tdcd 0x{w:08X}")
    return lines


def gen_range(start: int, end: int, out_path: Path) -> None:
    items = sorted([(a, *funcs[a]) for a in funcs if start <= a < end])
    pads: list[tuple[int, str, int, bool]] = []
    if not items:
        pads.append((start, f"pad_{start:08x}", end - start, False))
    else:
        if items[0][0] > start:
            pads.append((start, f"pad_{start:08x}", items[0][0] - start, False))
        cursor = items[0][0]
        for a, n, sz, th in items:
            if a > cursor:
                pads.append((cursor, f"pad_{cursor:08x}", a - cursor, False))
            cursor = a + sz
        if cursor < end:
            pads.append((cursor, f"pad_{cursor:08x}", end - cursor, False))
    items = sorted(items + pads, key=lambda t: t[0])

    local_names = {a: n for a, n, _, _ in items if not n.startswith("pad_")}
    externs: set[str] = set()

    for a, name, size, thumb in items:
        if name.startswith("pad_"):
            continue
        for off in range(size):
            fr = a + off
            if fr in relocs:
                kind, to = relocs[fr]
                to &= ~1
                if to not in local_names:
                    externs.add(sym_for(to, kind))
        mode = CS_MODE_THUMB if thumb else CS_MODE_ARM
        md = Cs(CS_ARCH_ARM, mode)
        code = data[a - BASE : a - BASE + size]
        for insn in md.disasm(code, a):
            if insn.mnemonic.startswith("ldr") and "pc" in insn.op_str:
                m = re.search(r"\[pc(?:, #(0x[0-9a-fA-F]+|-?[0-9]+))?\]", insn.op_str)
                if m:
                    imm = parse_imm(m.group(1))
                    pool = ((insn.address + 4) & ~3) + imm if thumb else (insn.address + 8 + imm) & ~3
                    if pool in relocs:
                        kind, to = relocs[pool]
                        to &= ~1
                        if to not in local_names:
                            externs.add(sym_for(to, kind))
                    else:
                        if 0 <= pool - BASE < len(data) - 3:
                            w = struct.unpack_from("<I", data, pool - BASE)[0]
                            ww = w & ~1
                            if w in all_syms and w not in local_names:
                                externs.add(safe_c_sym(all_syms[w]))
                            elif ww in all_syms and ww not in local_names:
                                externs.add(safe_c_sym(all_syms[ww]))
            if is_branch(insn.mnemonic) or insn.mnemonic in ("blx", "bl"):
                m = re.search(r"#?(0x[0-9a-fA-F]+)", insn.op_str)
                if m:
                    tgt = int(m.group(1), 16) & ~1
                    if not (start <= tgt < end) and tgt not in local_names:
                        externs.add(resolve_sym(tgt, local_names, "call"))

    unit_mid_labels: set[int] = set()
    for a, name, size, thumb in items:
        if name.startswith("pad_"):
            continue
        mode = CS_MODE_THUMB if thumb else CS_MODE_ARM
        md = Cs(CS_ARCH_ARM, mode)
        code = data[a - BASE : a - BASE + size]
        for insn in md.disasm(code, a):
            if is_branch(insn.mnemonic) or insn.mnemonic in ("blx",):
                m = re.search(r"#?(0x[0-9a-fA-F]+)", insn.op_str)
                if m:
                    tgt = int(m.group(1), 16)
                    if insn.mnemonic == "blx":
                        tgt &= ~1
                    if start <= tgt < end and tgt not in local_names:
                        unit_mid_labels.add(tgt)

    lines: list[str] = []
    lines.append("/* Auto-generated from baserom via tools/gen_thumb_lib.py */")
    lines.append('#include "globaldefs.h"')
    lines.append("")
    lines.append('extern "C" {')
    for a, name, size, thumb in items:
        lines.append(f"    void {name}(void);")
    for e in sorted(externs):
        lines.append(f"    void {e}(void);")
    lines.append("}")
    lines.append("")

    current_thumb: bool | None = None
    for a, name, size, thumb in items:
        if name.startswith("pad_"):
            if current_thumb is not True:
                lines.append("#pragma thumb on")
                current_thumb = True
            body = emit_dcd_bytes(data[a - BASE : a - BASE + size])
        elif thumb:
            if current_thumb is not True:
                lines.append("#pragma thumb on")
                current_thumb = True
            body = gen_thumb_func(a, size, local_names, unit_mid_labels, start, end)
        else:
            if current_thumb is not False:
                lines.append("#pragma thumb off")
                current_thumb = False
            body = gen_arm_func_simple(a, size, local_names)

        lines.append(f'extern "C" asm void {name}(void)')
        lines.append("{")
        lines.extend(body)
        lines.append("}")
        lines.append("")

    if current_thumb is False:
        lines.append("#pragma thumb on")
        lines.append("")

    out_path.parent.mkdir(parents=True, exist_ok=True)
    out_path.write_text("\n".join(lines))
    nthumb = sum(1 for *_, th in items if th)
    print(f"Wrote {out_path}: {len(items)} funcs ({nthumb} thumb), {end - start}B, {len(externs)} externs")


RANGES = [
    (0x0204d0f4, 0x02052aac, "src/main/dss/Lib_040_0204d0f4.cpp"),
    (0x020164a8, 0x0201a464, "src/main/dss/Lib_041_020164a8.cpp"),
    (0x020231c8, 0x02026d38, "src/main/dss/Lib_042_020231c8.cpp"),
    (0x0203af8c, 0x0203e5a8, "src/main/dss/Lib_043_0203af8c.cpp"),
    (0x02053afc, 0x020563d0, "src/main/dss/Lib_044_02053afc.cpp"),
    (0x02033d14, 0x02036058, "src/main/dss/Lib_045_02033d14.cpp"),
    (0x0200a13c, 0x0200b954, "src/main/dss/Lib_046_0200a13c.cpp"),
    (0x0202ac4c, 0x0202c3cc, "src/main/dss/Lib_047_0202ac4c.cpp"),
    (0x0200c0a4, 0x0200d220, "src/main/dss/Lib_048_0200c0a4.cpp"),
    (0x0202ff7c, 0x02030da8, "src/main/dss/Lib_049_0202ff7c.cpp"),
    (0x0200d3c8, 0x0200e004, "src/main/dss/Lib_050_0200d3c8.cpp"),
    (0x0202c678, 0x0202d018, "src/main/dss/Lib_051_0202c678.cpp"),
    (0x0203a344, 0x0203ab40, "src/main/dss/Lib_052_0203a344.cpp"),
    (0x02037728, 0x02037c9c, "src/main/dss/Lib_053_02037728.cpp"),
    (0x0201e194, 0x0201e6e0, "src/main/dss/Lib_054_0201e194.cpp"),
    (0x02056b00, 0x02056f88, "src/main/dss/Lib_055_02056b00.cpp"),
    (0x0200ba58, 0x0200c044, "src/main/dss/Lib_056_0200ba58.cpp"),
    (0x0201a990, 0x0201ad3c, "src/main/dss/Lib_057_0201a990.cpp"),
]


def main() -> None:
    only = set(sys.argv[1:]) if len(sys.argv) > 1 else None
    for start, end, rel in RANGES:
        if only and rel not in only and Path(rel).name not in only:
            continue
        gen_range(start, end, ROOT / rel)


if __name__ == "__main__":
    main()
