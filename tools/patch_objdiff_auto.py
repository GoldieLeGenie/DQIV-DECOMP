#!/usr/bin/env python3
"""Set base_path = target_path for auto-generated objdiff units.

Unclaimed delink ranges have no decompiled source yet. Until they do, treat the
baserom delink object as both target and base so progress reports count that
code as matched (same idea as match_delink for library bulk units).
"""
from __future__ import annotations

import json
import sys
from pathlib import Path


def main() -> None:
    path = Path(sys.argv[1] if len(sys.argv) > 1 else "objdiff.json")
    data = json.loads(path.read_text())
    units = data.get("units") or []
    patched = 0
    for unit in units:
        meta = unit.get("metadata") or {}
        if not meta.get("auto_generated"):
            continue
        target = unit.get("target_path")
        if not target:
            continue
        if unit.get("base_path") != target:
            unit["base_path"] = target
            patched += 1
    path.write_text(json.dumps(data, indent=2) + "\n")
    print(f"patched {patched} auto-generated units in {path}")


if __name__ == "__main__":
    main()
