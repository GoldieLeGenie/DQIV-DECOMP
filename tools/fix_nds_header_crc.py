#!/usr/bin/env python3
"""Fix NDS header CRC fields after dsd rom build when arm7 BIOS is unavailable.

Without arm7_bios.bin, dsd leaves a few header CRC bytes as zero even when the
ROM body (including the secure area) already matches baserom. This tool
recomputes the standard Header CRC at 0x15E and restores Secure Area CRC fields
from the baserom when the rest of the image is identical.
"""
from __future__ import annotations

import argparse
import struct
import sys
from pathlib import Path


def crc16_nds(data: bytes) -> int:
    """CRC-16 used for NDS header (poly 0xA001, init 0xFFFF)."""
    crc = 0xFFFF
    for b in data:
        crc ^= b
        for _ in range(8):
            if crc & 1:
                crc = (crc >> 1) ^ 0xA001
            else:
                crc >>= 1
    return crc & 0xFFFF


def main() -> None:
    ap = argparse.ArgumentParser()
    ap.add_argument("rom", type=Path)
    ap.add_argument(
        "--baserom",
        type=Path,
        default=None,
        help="Optional baserom to copy secure-area CRC fields from when body matches",
    )
    args = ap.parse_args()

    rom = bytearray(args.rom.read_bytes())
    if len(rom) < 0x200:
        print("error: ROM too small", file=sys.stderr)
        sys.exit(1)

    baserom_path = args.baserom
    if baserom_path is None:
        # Project default
        cand = Path("extract/baserom_dqiv_eur.nds")
        if cand.is_file():
            baserom_path = cand

    changed = False
    if baserom_path and baserom_path.is_file():
        base = baserom_path.read_bytes()
        if len(base) == len(rom):
            # If only header CRC holes differ, copy those known fields from baserom
            body_match = rom[0x200:] == base[0x200:]
            # Compare header ignoring common CRC slots
            h1 = bytearray(rom[:0x200])
            h2 = bytearray(base[:0x200])
            for off in (0x6C, 0x6D, 0x15C, 0x15D, 0x15E, 0x15F):
                h1[off] = h2[off] = 0
            if body_match and bytes(h1) == bytes(h2):
                for off, size in ((0x6C, 2), (0x15C, 2)):
                    if rom[off : off + size] != base[off : off + size]:
                        rom[off : off + size] = base[off : off + size]
                        changed = True

    # Always recompute header CRC over 0x0000..0x015D
    hdr_crc = crc16_nds(rom[0:0x15E])
    old = struct.unpack_from("<H", rom, 0x15E)[0]
    if old != hdr_crc:
        struct.pack_into("<H", rom, 0x15E, hdr_crc)
        changed = True

    if changed:
        args.rom.write_bytes(rom)
        print(
            f"fixed NDS header CRCs in {args.rom.name} "
            f"(0x6c={rom[0x6C]:02x}{rom[0x6D]:02x} "
            f"0x15c={rom[0x15C]:02x}{rom[0x15D]:02x} "
            f"0x15e={rom[0x15E]:02x}{rom[0x15F]:02x})"
        )
    else:
        print(f"NDS header CRCs OK in {args.rom.name}")


if __name__ == "__main__":
    main()
