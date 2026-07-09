#!/usr/bin/env python3

import sys
import pyperclip
import subprocess
import os
from pathlib import Path
import argparse
import re
import tempfile

# --------------------------
# Arguments du script
# --------------------------
parser = argparse.ArgumentParser(description="Generates a context for decomp.me")
parser.add_argument('file', help="Input file to preprocess")
parser.add_argument('-f', type=str, dest='out_file', required=False, help='Output context file')
parser.add_argument('-c', action=argparse.BooleanOptionalAction, dest='clipboard', required=False, help='Copy output to clipboard')
parser.add_argument('-e', type=str, dest='encoding', required=False, default="utf-8", help='Input file encoding')
parser.add_argument('-v', action=argparse.BooleanOptionalAction, dest='verbose', required=False, help='Verbose error output')
args = parser.parse_args()

# --------------------------
# Flags pour GCC / C++
# --------------------------
CXX_FLAGS = [
    '-nostdinc',
    '-Iinclude',
    '-Ilibs/c/include',
    '-Ilibs/cpp/include'
]

script_dir = Path(os.path.dirname(os.path.realpath(__file__)))
root_dir = script_dir / ".."

def eprint(*args, **kwargs):
    print(*args, file=sys.stderr, **kwargs)

# --------------------------
# Regex pour includes et commentaires
# --------------------------
INCLUDE_REGEX = r'^\s*#\s*include\s*([<"][\S ]+[>"])\s*$'
COMMENT_REGEX = r'\/\/.*$|\/\*(?:.|\r|\n)+?\*\/'

# --------------------------
# Lecture du fichier
# --------------------------
with open(args.file, 'r', encoding=args.encoding) as f:
    contents = f.read()

# Supprimer tous les commentaires
contents = re.sub(COMMENT_REGEX, '', contents, 0, re.MULTILINE)
# Récupérer tous les #include
includes = re.findall(INCLUDE_REGEX, contents, re.MULTILINE)

_, suffix = os.path.splitext(args.file)

# --------------------------
# Crée un fichier temporaire fermé (Windows-safe)
# --------------------------
with tempfile.NamedTemporaryFile(delete=False, suffix=suffix) as tmp_file:
    tmp_path = tmp_file.name
    # Écrit toutes les includes
    for include in includes:
        tmp_file.write(f'#include {include}\n'.encode())
# Ici le fichier est fermé, GCC peut y accéder sur Windows

# --------------------------
# Exécute le préprocesseur
# --------------------------
try:
    ctx: str = subprocess.check_output([
        'gcc',
        '-E', '-P', '-fworking-directory', '-undef', '-dD',
        *CXX_FLAGS,
        tmp_path
    ], cwd=root_dir, encoding=args.encoding)
except subprocess.CalledProcessError as e:
    eprint(f"Failed to preprocess '{args.file}'")
    if args.verbose: eprint(e)
    else: eprint("Use -v for more verbose error output")
    os.unlink(tmp_path)
    exit(1)
finally:
    # Supprime le fichier temporaire
    if os.path.exists(tmp_path):
        os.unlink(tmp_path)

# --------------------------
# Nettoyage des defines automatiques
# --------------------------
lines = ctx.splitlines(True)
for i in reversed(range(len(lines))):
    if lines[i].startswith('#define __cplusplus'): lines.pop(i)
    elif lines[i].startswith('#define __STDC_HOSTED__'): lines.pop(i)
    elif lines[i].startswith('#define __STDC__'): lines.pop(i)
    elif lines[i].startswith('#define __STDC_VERSION__'): lines.pop(i)

ctx = ''.join(lines)

# --------------------------
# Écriture ou copie dans le presse-papier
# --------------------------
if args.out_file:
    try:
        with open(args.out_file, "w") as file:
            file.write(ctx)
    except OSError as e:
        eprint(f"Failed to write file '{args.out_file}'")
        if args.verbose: eprint(e)
        else: eprint("Use -v for more verbose error output")
        exit(1)

if args.clipboard:
    pyperclip.copy(ctx)
    eprint("Copied context to clipboard")

# Si pas de fichier de sortie et pas de clipboard, affiche le contexte
if args.out_file is None and not args.clipboard:
    print(ctx)
