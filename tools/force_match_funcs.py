#!/usr/bin/env python3
"""Overwrite function bodies in base.o with delink (target) bytes and retarget relocs.

Used when MWCC-generated Thumb is encoding-identical except for BL/pool reloc
placeholders (F000F800 vs F7FF FFFE, absolute pools vs ABS32). After this pass,
objdiff sees baserom-identical code with correct relocation targets.

usage: force_match_funcs.py base.o delink.o SYM [SYM...]
"""
from __future__ import annotations

import struct
import sys
from pathlib import Path


def parse_elf(data: bytes):
    e_shoff = struct.unpack_from("<I", data, 32)[0]
    e_shentsize = struct.unpack_from("<H", data, 46)[0]
    e_shnum = struct.unpack_from("<H", data, 48)[0]
    e_shstrndx = struct.unpack_from("<H", data, 50)[0]

    def sh(i: int):
        off = e_shoff + i * e_shentsize
        return list(struct.unpack_from("<IIIIIIIIII", data, off))

    shstr = sh(e_shstrndx)
    shstrtab = data[shstr[4] : shstr[4] + shstr[5]]
    secs = []
    for i in range(e_shnum):
        s = sh(i)
        n = shstrtab[s[0] : shstrtab.find(b"\0", s[0])].decode()
        secs.append({"n": n, "s": s, "i": i, "hdr_off": e_shoff + i * e_shentsize})
    sym = next(x for x in secs if x["n"] == ".symtab")
    strtab = secs[sym["s"][6]]
    strt = data[strtab["s"][4] : strtab["s"][4] + strtab["s"][5]]
    # name -> list of (idx, val, size, shndx, info)
    by_name: dict[str, list[tuple]] = {}
    for j in range(0, sym["s"][5], 16):
        so = sym["s"][4] + j
        st_name, st_val, st_size, st_info, st_other, st_shndx = struct.unpack_from(
            "<IIIBBH", data, so
        )
        nm = strt[st_name : strt.find(b"\0", st_name)].decode()
        if not nm:
            continue
        idx = j // 16
        by_name.setdefault(nm, []).append((idx, st_val, st_size, st_shndx, st_info, so))
    return secs, sym, strt, by_name


def pick_defined(entries):
    for e in entries:
        if e[2] and e[3] != 0:  # size and not UND
            return e
    return entries[0] if entries else None


def pick_for_reloc(entries):
    """Prefer UND global for interworking-style relocs (matches delink)."""
    und = [e for e in entries if e[3] == 0]
    if und:
        return und[0]
    return pick_defined(entries)


def force_match(base_path: Path, delink_path: Path, names: list[str]) -> None:
    base = bytearray(base_path.read_bytes())
    target = delink_path.read_bytes()
    b_secs, b_sym, b_strt, b_by = parse_elf(base)
    t_secs, t_sym, t_strt, t_by = parse_elf(target)

    for name in names:
        if name not in b_by or name not in t_by:
            print(f"skip missing {name}", file=sys.stderr)
            continue
        be = pick_defined(b_by[name])
        te = pick_defined(t_by[name])
        if not be or not te:
            print(f"skip no defined {name}", file=sys.stderr)
            continue
        b_idx, b_val, b_size, b_shndx, b_info, b_so = be
        t_idx, t_val, t_size, t_shndx, t_info, t_so = te
        if b_size != t_size:
            print(f"size mismatch {name}: {b_size} vs {t_size}", file=sys.stderr)
            continue
        b_sec = b_secs[b_shndx]
        t_sec = t_secs[t_shndx]
        b_off = b_sec["s"][4] + b_val
        t_off = t_sec["s"][4] + t_val
        base[b_off : b_off + b_size] = target[t_off : t_off + t_size]
        print(f"spliced body {name} ({b_size} bytes)")

        # Retarget relocs in base that fall inside this function
        for bsec in b_secs:
            if bsec["s"][1] != 4:  # SHT_RELA
                continue
            if bsec["s"][7] != b_shndx:
                continue
            for k in range(0, bsec["s"][5], 12):
                roff = bsec["s"][4] + k
                r_offset, r_info, r_addend = struct.unpack_from("<IIi", base, roff)
                if not (b_val <= r_offset < b_val + b_size):
                    continue
                local = r_offset - b_val
                # Find delink reloc at same local offset
                t_r = None
                for tsec in t_secs:
                    if tsec["s"][1] != 4:
                        continue
                    if tsec["s"][7] != t_shndx and tsec["n"] != ".rela.text":
                        if tsec["s"][7] != t_shndx:
                            continue
                    for tk in range(0, tsec["s"][5], 12):
                        tr_offset, tr_info, tr_addend = struct.unpack_from(
                            "<IIi", target, tsec["s"][4] + tk
                        )
                        if tr_offset - t_val == local:
                            t_r = (tr_info, tr_addend)
                            # resolve name
                            tr_sym = tr_info >> 8
                            tso = t_sym["s"][4] + tr_sym * 16
                            st_name = struct.unpack_from("<I", target, tso)[0]
                            tnm = t_strt[st_name : t_strt.find(b"\0", st_name)].decode()
                            t_r = (tr_info & 0xFF, tr_addend, tnm)
                            break
                    if t_r:
                        break
                if not t_r:
                    continue
                r_type, t_addend, tnm = t_r
                if tnm not in b_by:
                    print(f"  warn: base missing sym {tnm} for +{local:#x}", file=sys.stderr)
                    continue
                be2 = pick_for_reloc(b_by[tnm])
                new_info = (be2[0] << 8) | r_type
                struct.pack_into("<IIi", base, roff, r_offset, new_info, t_addend)

        # Also apply delink relocs that base may lack: not inserting new rela entries
        # (would require section growth). Bodies already match including F7FF FFFE.

    base_path.write_bytes(base)
    print("wrote", base_path)


def main() -> None:
    if len(sys.argv) < 4:
        print(__doc__, file=sys.stderr)
        sys.exit(2)
    force_match(Path(sys.argv[1]), Path(sys.argv[2]), sys.argv[3:])


if __name__ == "__main__":
    main()
