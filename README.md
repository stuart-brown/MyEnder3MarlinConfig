# My Ender 3 Marlin Firmware
My Marlin firmware configs and firmware blobs for my Creality Ender 3 printer.

# Changes to default config
All changes in the config file are marked with `ALTERED:` in a comment line

There are also a custom splash screen and logo in _Bootscreen.h and _Statusscreen.h


# Building
* Edit the version number in `Version.h` file
* Open in VSCode with Auto Build Marlin installed (see https://marlinfw.org/docs/basics/install_platformio_vscode.html and https://marlinfw.org/docs/basics/auto_build_marlin.html)
* Open Auto Build Marlin
* Select the STM32F103RE_creality (512K) target
* Marlin Auto Build output is in .pio/build
* Record all the changes in FirmwareBlob/ReleaseNotes.txt
* Check a copy of the .bin file into FirmwareBlob

## Explanation of Targets
* STM32F103RE_creality or STM32F103RC_creality :  You usually want one of these depending on whether the CPU on your board is an STM32F103RET6 (512K flash memory) or STM32F103RCT6 (256K)
* STM32F103RE_creality_xfer : includes a special Marlin protocol to upload firmware from the computer direct to the SD card without taking it out of the printer - Don't Use
* STM32F103RE_creality_maple : uses different libraries, specifically an older hardware abstraction layer - Don't Use

