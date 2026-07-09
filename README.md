# Dragon Quest IV: Chapters of the Chosen

This is a decompilation of *Dragon Quest IV* (NDS), powered by [`ds-decomp`](https://github.com/AetiasHax/ds-decomp).

It builds the following ROM: `sha1: a9842d8d21df070e620779f461ed7cee4ca88b52`

## Setup

### Prerequisites

1. Use one of these platforms:
    - Windows (recommended)
    - Linux
2. Install the following:
    - Python 3.11+ and pip
    - GCC 9+
    - Ninja
3. Install the Python dependencies:
    ```shell
    python -m pip install -r tools/requirements.txt
    ```
4. Run the Ninja configure script:
    ```shell
    python tools/configure.py eur
    ```
5. Place a clean ROM of the original game in the 'extract' folder and name it <baserom_dqiv_(region).nds>, with (region) being the appropriate region identifier. ex: baserom_dqiv_eur.nds.

Now you can run `ninja` to build a ROM for the chosen version. Currently, only the EUR version is supported.

Running `ninja` again after making any changes to the project (e.g. source files, delinks.txt, etc) should automatically re-run `configure.py` to ensure that all code gets compiled.

> [!NOTE]
> Wibo is used by default. If you want to use Wine instead, run `configure.py` with `-w <path/to/wine>`.

#### Matching the base ROM

**This is optional!** You only need to follow these steps if you want a matching ROM.

First, [extract the ARM7 BIOS from your DS device](https://wiki.ds-homebrew.com/ds-index/ds-bios-firmware-dump). Put the
ARM7 BIOS in the root directory of this repository.

Now, rerun `configure.py` so it can update `build.ninja` to build a matching ROM.

## Contributing

This project uses the object diffing tool [`objdiff`](https://github.com/encounter/objdiff) to track differences between our decompiled C++ code and the base ROM's code.

1. [Download the latest release.](https://github.com/encounter/objdiff/releases/latest)
1. Run `configure.py eur` and `ninja` to generate `objdiff.json` in the repository root.
1. In `objdiff`, set the project directory to the repository root.
1. Select your source file in the left sidebar.
1. See the list of functions and data to decompile.

