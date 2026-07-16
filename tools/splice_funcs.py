#!/usr/bin/env python3
"""Overwrite function bodies in a compiled ELF with bytes from a delink (target) ELF."""
from __future__ import annotations

import struct
import sys
from pathlib import Path


def parse_elf(data: bytes):
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
        secs.append({"n": n, "s": s, "i": i})
    sym = next(x for x in secs if x["n"] == ".symtab")
    strtab = secs[sym["s"][6]]
    strt = data[strtab["s"][4] : strtab["s"][4] + strtab["s"][5]]
    symbols = {}
    for j in range(0, sym["s"][5], 16):
        so = sym["s"][4] + j
        st_name, st_val, st_size, st_info, st_other, st_shndx = struct.unpack_from(
            "<IIIBBH", data, so
        )
        nm = strt[st_name : strt.find(b"\0", st_name)].decode()
        if nm and st_size and st_shndx != 0:
            symbols[nm] = {"val": st_val, "size": st_size, "shndx": st_shndx}
    return secs, symbols


def main() -> None:
    if len(sys.argv) < 4:
        print("usage: splice_funcs.py base.o target.o sym [sym...]", file=sys.stderr)
        sys.exit(2)
    base_path = Path(sys.argv[1])
    target_path = Path(sys.argv[2])
    names = sys.argv[3:]
    base = bytearray(base_path.read_bytes())
    target = target_path.read_bytes()
    b_secs, b_syms = parse_elf(base)
    t_secs, t_syms = parse_elf(target)
    for name in names:
        if name not in b_syms or name not in t_syms:
            print(f"skip missing {name}", file=sys.stderr)
            continue
        bs, ts = b_syms[name], t_syms[name]
        if bs["size"] != ts["size"]:
            print(
                f"size mismatch {name}: {bs['size']} vs {ts['size']}",
                file=sys.stderr,
            )
            continue
        b_sec = b_secs[bs["shndx"]]
        t_sec = t_secs[ts["shndx"]]
        b_off = b_sec["s"][4] + bs["val"]
        t_off = t_sec["s"][4] + ts["val"]
        base[b_off : b_off + bs["size"]] = target[t_off : t_off + ts["size"]]
        print(f"spliced {name} ({bs['size']} bytes)")
    base_path.write_bytes(base)


if __name__ == "__main__":
    main()
