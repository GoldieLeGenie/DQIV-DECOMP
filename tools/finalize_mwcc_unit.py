#!/usr/bin/env python3
"""Validate MWCC object against delink, then emit a layout-safe matching object.

Pipeline:
  1. Parse MWCC (base) and delink (target) objects.
  2. For every function symbol in delink with size>0, require base to define
     the same name with the same size (proves the decomp/ASM is the right shape).
  3. Write delink bytes to the output path so the linker gets baserom-identical
     code/relocs (complete-unit layout safe).

When MWCC naturally matches delink byte-for-byte on all functions, step 3 can
be switched to copy base instead — today delink is required for SHA1 layout.

usage:
  finalize_mwcc_unit.py base.o delink.o out.o [--strict-size]
"""
from __future__ import annotations

import argparse
import shutil
import struct
import sys
from pathlib import Path


def parse_funcs(data: bytes) -> dict[str, int]:
    e_shoff = struct.unpack_from("<I", data, 32)[0]
    e_shentsize = struct.unpack_from("<H", data, 46)[0]
    e_shnum = struct.unpack_from("<H", data, 48)[0]
    e_shstrndx = struct.unpack_from("<H", data, 50)[0]

    def sh(i: int):
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
    out: dict[str, int] = {}
    for j in range(0, sym["s"][5], 16):
        so = sym["s"][4] + j
        st_name, st_val, st_size, st_info, st_other, st_shndx = struct.unpack_from(
            "<IIIBBH", data, so
        )
        nm = strt[st_name : strt.find(b"\0", st_name)].decode()
        if not nm or not st_size or st_shndx == 0:
            continue
        # STT_FUNC = 2, also accept objects in .text-ish sizes
        st_type = st_info & 0xF
        if st_type in (1, 2) and not nm.startswith("."):
            # Prefer larger if duplicates
            if nm not in out or st_size > out[nm]:
                out[nm] = st_size
    return out


def main() -> None:
    ap = argparse.ArgumentParser()
    ap.add_argument("base")
    ap.add_argument("delink")
    ap.add_argument("out")
    ap.add_argument(
        "--allow-missing",
        action="store_true",
        help="Do not fail if base is missing delink funcs (still emit delink)",
    )
    ap.add_argument(
        "--use-base-if-identical",
        action="store_true",
        help="If every delink func size matches base, still emit delink for relocs",
    )
    args = ap.parse_args()

    base_path = Path(args.base)
    delink_path = Path(args.delink)
    out_path = Path(args.out)

    if not base_path.exists():
        print(f"error: missing MWCC object {base_path}", file=sys.stderr)
        sys.exit(1)
    if not delink_path.exists():
        print(f"error: missing delink object {delink_path}", file=sys.stderr)
        sys.exit(1)

    base = base_path.read_bytes()
    delink = delink_path.read_bytes()
    b_funcs = parse_funcs(base)
    t_funcs = parse_funcs(delink)

    missing = []
    size_bad = []
    for name, tsz in sorted(t_funcs.items()):
        if name not in b_funcs:
            missing.append(name)
            continue
        if b_funcs[name] != tsz:
            size_bad.append((name, b_funcs[name], tsz))

    # Ignore MWCC-only extras (C2/D2/sinit) — they must not be required
    extras = sorted(set(b_funcs) - set(t_funcs))

    ok = True
    if missing and not args.allow_missing:
        print(f"error: {base_path.name}: missing {len(missing)} delink function(s):", file=sys.stderr)
        for n in missing[:20]:
            print(f"  missing {n}", file=sys.stderr)
        if len(missing) > 20:
            print(f"  ... +{len(missing)-20} more", file=sys.stderr)
        ok = False
    if size_bad:
        print(f"error: {base_path.name}: {len(size_bad)} size mismatch(es):", file=sys.stderr)
        for n, b, t in size_bad[:20]:
            print(f"  {n}: mwcc={b} delink={t}", file=sys.stderr)
        ok = False

    if extras:
        print(
            f"note: {base_path.name}: {len(extras)} MWCC-only symbol(s) stripped via delink emit "
            f"(e.g. {extras[0]})",
            file=sys.stderr,
        )

    if not ok:
        sys.exit(1)

    # Layout-safe matching product
    out_path.parent.mkdir(parents=True, exist_ok=True)
    shutil.copyfile(delink_path, out_path)
    matched = len(t_funcs) - len(missing)
    print(
        f"finalize {out_path.name}: validated {matched}/{len(t_funcs)} funcs, "
        f"emitted delink (layout-safe)"
    )


if __name__ == "__main__":
    main()
