#!/usr/bin/env python3
"""Generate MathLib_*.cpp from baserom using Capstone -> MWCC mnemonics."""
from __future__ import annotations

import re
import struct
from pathlib import Path

from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM

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
COND_RE = "eq|ne|cs|cc|hs|lo|mi|pl|vs|vc|hi|ls|ge|lt|gt|le|al"
REG_ALIAS = {"sb": "r9", "sl": "r10", "fp": "r11", "ip": "r12"}


def parse_imm(s: str | None) -> int:
    if not s:
        return 0
    return int(s, 0)


def safe_c_sym(name: str) -> str:
    """MWCC/C identifiers cannot contain '.' or start with a digit."""
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


DATA_OPS = (
    "and|eor|sub|rsb|add|adc|sbc|rsc|orr|bic|mov|mvn|"
    "mul|mla|smull|umull|smlal|umlal|clz|teq|tst|cmp|cmn"
)


def normalize_mn(mn: str) -> str:
    """Map Capstone UAL to MWCC pre-UAL; hs->cs, lo->cc; andseq->andeqs."""
    conds = (
        "eq", "ne", "cs", "cc", "hs", "lo", "mi", "pl", "vs", "vc",
        "hi", "ls", "ge", "lt", "gt", "le", "al",
    )
    cond = ""
    base = mn
    for c in sorted(conds, key=len, reverse=True):
        if mn.endswith(c) and len(mn) > len(c):
            base, cond = mn[: -len(c)], c
            break
    if cond == "hs":
        cond = "cs"
    elif cond == "lo":
        cond = "cc"
    # ldr/str: UAL ldr{size}{cond} -> pre-UAL ldr{cond}{size}
    m = re.match(r"^(ldr|str)(sb|sh|b|h|d)?$", base)
    if m and cond:
        return f"{m.group(1)}{cond}{m.group(2) or ''}"
    # data-processing: UAL {op}s{cond} (andseq) -> pre-UAL {op}{cond}s (andeqs)
    m = re.match(rf"^({DATA_OPS})s$", base)
    if m and cond:
        return f"{m.group(1)}{cond}s"
    return base + cond


def fix_regs(s: str) -> str:
    return re.sub(r"\b(sb|sl|fp|ip)\b", lambda m: REG_ALIAS[m.group(0)], s)




def gen_arm_func(
    addr: int,
    size: int,
    local_names: dict[int, str],
    unit_mid_labels: set[int] | None = None,
) -> list[str]:
    """Linear Capstone disassembly (high match rate for typical library code)."""
    code = data[addr - BASE : addr - BASE + size]
    md = Cs(CS_ARCH_ARM, CS_MODE_ARM)
    insns = list(md.disasm(code, addr))

    pool_addrs: set[int] = set()
    for insn in insns:
        if insn.mnemonic.startswith("ldr") and "pc" in insn.op_str:
            m = re.search(r"\[pc(?:, #(0x[0-9a-fA-F]+|-?[0-9]+))?\]", insn.op_str)
            if m:
                imm = parse_imm(m.group(1))
                pool = (insn.address + 8 + imm) & ~3
                if addr <= pool < addr + size:
                    pool_addrs.add(pool)
    for off in range(0, size, 4):
        a = addr + off
        if a in relocs and relocs[a][0] == "load":
            pool_addrs.add(a)

    labels: set[int] = set()
    for insn in insns:
        if is_branch(insn.mnemonic) or insn.mnemonic in ("blx",):
            m = re.search(r"#?(0x[0-9a-fA-F]+)", insn.op_str)
            if m:
                tgt = int(m.group(1), 16)
                if addr <= tgt < addr + size and tgt not in pool_addrs:
                    labels.add(tgt)
    if unit_mid_labels:
        for tgt in unit_mid_labels:
            if addr <= tgt < addr + size:
                labels.add(tgt)

    lines: list[str] = []
    for insn in insns:
        a = insn.address
        if a in pool_addrs or any(p < a < p + 4 for p in pool_addrs):
            if a in labels:
                lines.append(f"lbl_{a:08x}:")
            continue

        if a in labels:
            lines.append(f"lbl_{a:08x}:")

        mn = normalize_mn(insn.mnemonic)
        op = fix_regs(insn.op_str)
        op = re.sub(r"\bapsr_nzcvq\b", "cpsr_f", op)
        op = re.sub(r"\bapsr_nzcv\b", "cpsr_f", op)
        op = re.sub(r"\bapsr\b", "cpsr", op)
        if mn.startswith("mcr") or mn.startswith("mrc"):
            op = re.sub(r"#(0x[0-9a-fA-F]+|-?\d+)", r"\1", op)

        m = re.match(rf"^(rrx)({COND_RE})?(s)?$", mn)
        if m:
            cond, sflag = m.group(2) or "", m.group(3) or ""
            parts = [p.strip() for p in op.split(",")]
            mov = f"mov{cond}{'s' if sflag else ''}"
            if len(parts) == 2:
                lines.append(f"\t{mov} {parts[0]}, {parts[1]}, rrx")
            elif len(parts) == 1:
                lines.append(f"\t{mov} {parts[0]}, {parts[0]}, rrx")
            continue

        m = re.match(rf"^(svc|swi)({COND_RE})?$", mn)
        if m:
            cond = m.group(2) or ""
            imm = op.replace("#", "").strip()
            lines.append(f"\tswi{cond} {imm}")
            continue

        m = re.match(rf"^(push|pop)({COND_RE})?$", mn)
        if m:
            kind, cond = m.group(1), m.group(2) or ""
            if kind == "push":
                lines.append(f"\tstm{cond}db sp!, {op}")
            else:
                lines.append(f"\tldm{cond}ia sp!, {op}")
            continue

        m = re.match(rf"^(ldm|stm)({COND_RE})?(ia|ib|da|db|fd|fa|ed|ea)?$", mn)
        if m:
            base, cond, mode = m.group(1), m.group(2) or "", m.group(3) or "ia"
            lines.append(f"\t{base}{cond}{mode} {op}")
            continue

        if is_branch(mn):
            m = re.search(r"#?(0x[0-9a-fA-F]+)", op)
            if m:
                tgt = int(m.group(1), 16)
                if addr <= tgt < addr + size:
                    lines.append(f"\t{mn} lbl_{tgt:08x}")
                elif tgt in local_names:
                    lines.append(f"\t{mn} {local_names[tgt]}")
                elif unit_mid_labels is not None and tgt in unit_mid_labels:
                    w = struct.unpack_from("<I", code, a - addr)[0]
                    lines.append(f"\tdcd 0x{w:08X}")
                else:
                    if a in relocs:
                        kind, to = relocs[a]
                        sym = resolve_sym(to, local_names, kind)
                    else:
                        sym = resolve_sym(tgt, local_names, "call")
                    lines.append(f"\t{mn} {sym}")
                continue
            lines.append(f"\t{mn} {op}")
            continue

        if mn == "blx":
            m = re.search(r"#?(0x[0-9a-fA-F]+)", op)
            if m:
                tgt = int(m.group(1), 16)
                if a in relocs:
                    kind, to = relocs[a]
                    sym = resolve_sym(to, local_names, kind)
                else:
                    sym = resolve_sym(tgt, local_names, "call")
                lines.append(f"\tbl {sym}")
                continue
            lines.append(f"\tblx {op}")
            continue

        if mn.startswith("ldr") and "pc" in op:
            m = re.match(r"(r\d+|sp|lr|pc), \[pc(?:, #(0x[0-9a-fA-F]+|-?[0-9]+))?\]", op)
            if m:
                reg = m.group(1)
                imm = parse_imm(m.group(2))
                pool = (insn.address + 8 + imm) & ~3
                if pool in relocs and relocs[pool][0] == "load":
                    to = relocs[pool][1]
                    sym = resolve_sym(to, local_names, "load")
                    lines.append(f"\t{mn} {reg}, ={sym}")
                else:
                    w = struct.unpack_from("<I", data, pool - BASE)[0]
                    if w in all_syms:
                        lines.append(f"\t{mn} {reg}, ={safe_c_sym(all_syms[w])}")
                    else:
                        lines.append(f"\t{mn} {reg}, =0x{w:08X}")
                continue

        m = re.match(rf"^(lsl|lsr|asr|ror)({COND_RE})?(s)?$", mn)
        if m:
            shift, cond, sflag = m.group(1), m.group(2) or "", m.group(3) or ""
            parts = [p.strip() for p in op.split(",")]
            mov = f"mov{cond}{'s' if sflag else ''}"
            if len(parts) == 3:
                lines.append(f"\t{mov} {parts[0]}, {parts[1]}, {shift} {parts[2]}")
            elif len(parts) == 2:
                lines.append(f"\t{mov} {parts[0]}, {parts[0]}, {shift} {parts[1]}")
            continue

        lines.append(f"\t{mn} {op}".rstrip() if op else f"\t{mn}")

    return lines



def gen_range(start: int, end: int, out_path: Path) -> None:
    items = sorted([(a, *funcs[a]) for a in funcs if start <= a < end])
    for a, n, sz, th in items:
        if th:
            raise SystemExit(f"Thumb function in ARM range: {n} @ {a:#x}")
    if not items:
        raise SystemExit(f"No funcs in {start:#x}-{end:#x}")
    # Allow leading/trailing/inter-function padding (emitted as dcd by a synthetic pad func)
    pos = items[0][0]
    for a, n, sz, th in items:
        if a < pos:
            raise SystemExit(f"Overlap before {n}: pos {pos:#x} got {a:#x}")
        pos = a + sz
    if items[0][0] > start or pos < end:
        # We'll handle padding as raw dcd blocks attached to neighboring functions
        pass
    # Build padding spans as synthetic ARM "functions" of raw data
    pads = []
    if items[0][0] > start:
        pads.append((start, f"pad_{start:08x}", items[0][0] - start, False))
    cursor = items[0][0]
    for a, n, sz, th in items:
        if a > cursor:
            pads.append((cursor, f"pad_{cursor:08x}", a - cursor, False))
        cursor = a + sz
    if cursor < end:
        pads.append((cursor, f"pad_{cursor:08x}", end - cursor, False))
    if pads:
        # merge pads into items list for emission
        items = sorted(items + pads, key=lambda t: t[0])

    local_names = {a: n for a, n, _, _ in items if not n.startswith("pad_")}
    externs: set[str] = set()
    for a, name, size, thumb in items:
        for off in range(size):
            fr = a + off
            if fr in relocs:
                kind, to = relocs[fr]
                if to not in local_names:
                    externs.add(sym_for(to, kind))
        code = data[a - BASE : a - BASE + size]
        md = Cs(CS_ARCH_ARM, CS_MODE_ARM)
        for insn in md.disasm(code, a):
            if insn.mnemonic.startswith("ldr") and "pc" in insn.op_str:
                m = re.search(r"\[pc(?:, #(0x[0-9a-fA-F]+|-?[0-9]+))?\]", insn.op_str)
                if m:
                    imm = parse_imm(m.group(1))
                    pool = (insn.address + 8 + imm) & ~3
                    if pool in relocs:
                        kind, to = relocs[pool]
                        if to not in local_names:
                            externs.add(sym_for(to, kind))
                    else:
                        # constant pool may hold a pointer to a named symbol
                        w = struct.unpack_from("<I", data, pool - BASE)[0]
                        if w in all_syms and w not in local_names:
                            externs.add(safe_c_sym(all_syms[w]))
            # Collect external branch/call targets (even without reloc entries)
            if is_branch(insn.mnemonic) or insn.mnemonic in ("blx",):
                m = re.search(r"#?(0x[0-9a-fA-F]+)", insn.op_str)
                if m:
                    tgt = int(m.group(1), 16)
                    if not (start <= tgt < end) and tgt not in local_names:
                        externs.add(resolve_sym(tgt, local_names, "call"))

    lines: list[str] = []
    lines.append("/* Auto-generated from baserom via tools/gen_mathlib_asm.py */")
    lines.append('#include "globaldefs.h"')
    lines.append("")
    lines.append('extern "C" {')
    for a, name, size, thumb in items:
        lines.append(f"    void {name}(void);")
    for e in sorted(externs):
        lines.append(f"    void {e}(void);")
    lines.append("}")
    lines.append("")
    lines.append("#pragma thumb off")
    lines.append("")

    # Mid-function branch targets within this unit (not at a function entry)
    unit_mid_labels: set[int] = set()
    for a, name, size, thumb in items:
        if name.startswith("pad_"):
            continue
        code = data[a - BASE : a - BASE + size]
        md = Cs(CS_ARCH_ARM, CS_MODE_ARM)
        for insn in md.disasm(code, a):
            if is_branch(insn.mnemonic) or insn.mnemonic in ("blx",):
                m = re.search(r"#?(0x[0-9a-fA-F]+)", insn.op_str)
                if m:
                    tgt = int(m.group(1), 16)
                    if start <= tgt < end and tgt not in local_names:
                        unit_mid_labels.add(tgt)

    for a, name, size, thumb in items:
        if name.startswith("pad_"):
            body = []
            for off in range(0, size, 4):
                w = struct.unpack_from("<I", data, a - BASE + off)[0]
                body.append(f"	dcd 0x{w:08X}")
        else:
            body = gen_arm_func(a, size, local_names, unit_mid_labels)
        lines.append(f'extern "C" asm void {name}(void)')
        lines.append("{")
        lines.extend(body)
        lines.append("}")
        lines.append("")

    lines.append("#pragma thumb on")
    lines.append("")
    out_path.write_text("\n".join(lines))
    print(f"Wrote {out_path}: {len(items)} funcs, {end - start}B, {len(externs)} externs")


RANGES = [
    (0x02080038, 0x02080d48, "src/main/dss/MathLib_F.cpp"),
    (0x02087208, 0x02088280, "src/main/dss/MathLib_A.cpp"),
    (0x020883d8, 0x02088740, "src/main/dss/MathLib_B.cpp"),
    (0x0208877c, 0x020888bc, "src/main/dss/MathLib_C.cpp"),
    (0x020888e8, 0x02089678, "src/main/dss/MathLib_D1.cpp"),
    (0x02089ae4, 0x0208a1a8, "src/main/dss/MathLib_D2.cpp"),
    (0x02080d94, 0x020870fc, "src/main/dss/MathLib_E.cpp"),
    (0x02067b80, 0x0206ba78, "src/main/dss/Lib_000_02067b80.cpp"),
    (0x0206ba78, 0x0206f6c4, "src/main/dss/Lib_001_0206ba78.cpp"),
    (0x0206f6c4, 0x0207364c, "src/main/dss/Lib_002_0206f6c4.cpp"),
    (0x0207364c, 0x02077624, "src/main/dss/Lib_003_0207364c.cpp"),
    (0x02077624, 0x0207b488, "src/main/dss/Lib_004_02077624.cpp"),
    (0x0207b488, 0x0207f44c, "src/main/dss/Lib_005_0207b488.cpp"),
    (0x0207f44c, 0x02080038, "src/main/dss/Lib_006_0207f44c.cpp"),
    (0x0203e5a8, 0x02042428, "src/main/dss/Lib_007_0203e5a8.cpp"),
    (0x02042428, 0x020463e4, "src/main/dss/Lib_008_02042428.cpp"),
    (0x020463e4, 0x02048e10, "src/main/dss/Lib_009_020463e4.cpp"),
    (0x02056f88, 0x0205af20, "src/main/dss/Lib_010_02056f88.cpp"),
    (0x0205af20, 0x0205eefc, "src/main/dss/Lib_011_0205af20.cpp"),
    (0x0205eefc, 0x0205f728, "src/main/dss/Lib_012_0205eefc.cpp"),
    (0x02062040, 0x02065ff0, "src/main/dss/Lib_013_02062040.cpp"),
    (0x02065ff0, 0x02067b70, "src/main/dss/Lib_014_02065ff0.cpp"),
    (0x02005ba0, 0x02009ba8, "src/main/dss/Lib_015_02005bac.cpp"),
    (0x02009ba8, 0x0200a13c, "src/main/dss/Lib_016_02009ba8.cpp"),
    (0x02049048, 0x0204d038, "src/main/dss/Lib_017_02049048.cpp"),
    (0x0204d038, 0x0204d0f4, "src/main/dss/Lib_018_0204d038.cpp"),
    (0x0200484c, 0x02004bb0, "src/main/dss/Lib_020_0200484c.cpp"),
    (0x0201f12c, 0x02022a80, "src/main/dss/Lib_021_0201f12c.cpp"),
    (0x020274c4, 0x0202ac4c, "src/main/dss/Lib_022_020274c4.cpp"),
    (0x0205f728, 0x02061c6c, "src/main/dss/Lib_023_0205f73c.cpp"),
    (0x02030f6c, 0x02032588, "src/main/dss/Lib_024_02030f6c.cpp"),
    (0x02052aac, 0x02053afc, "src/main/dss/Lib_025_02052aac.cpp"),
    (0x0203972c, 0x0203a344, "src/main/dss/Lib_026_0203972c.cpp"),
    (0x02032cec, 0x02033690, "src/main/dss/Lib_027_02032cec.cpp"),
    (0x02004bb0, 0x02005474, "src/main/dss/Lib_028_02004bc8.cpp"),
    (0x02036058, 0x020368a8, "src/main/dss/Lib_029_02036058.cpp"),
    (0x0201d974, 0x0201e194, "src/main/dss/Lib_030_0201d974.cpp"),
    (0x020563d0, 0x02056b00, "src/main/dss/Lib_031_020563d0.cpp"),
    (0x02005474, 0x02005ba0, "src/main/dss/Lib_032_02005480.cpp"),
    (0x020369d0, 0x020370f0, "src/main/dss/Lib_033_020369d0.cpp"),
    (0x02037c9c, 0x0203831c, "src/main/dss/Lib_034_02037c9c.cpp"),
    (0x020336d8, 0x02033d14, "src/main/dss/Lib_035_020336d8.cpp"),
    (0x0203ab40, 0x0203af8c, "src/main/dss/Lib_036_0203ab40.cpp"),
    (0x02027024, 0x0202742c, "src/main/dss/Lib_037_02027024.cpp"),
    (0x02000800, 0x02000ba0, "src/main/dss/Lib_038_02000800.cpp"),
    (0x02000ba0, 0x0200484c, "src/main/dss/Lib_019_02000ba0.cpp"),
    (0x02061cbc, 0x02061fe8, "src/main/dss/Lib_039_02061cbc.cpp"),
]


def main() -> None:
    for start, end, rel in RANGES:
        gen_range(start, end, ROOT / rel)


if __name__ == "__main__":
    main()
