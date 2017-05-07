Roboto
===============
Demo compo entry for Skrolli Party 2017,
programmed in Sharp LR35902 assembly for the original Game Boy (DMG).


How to assemble
---------------
The assembly code is written for [RGBDS assembler](https://github.com/rednex/rgbds). The whole demo can be compiled and tested using the [BGB emulator](http://bgb.bircd.org/) on Windows just by running `run.bat`

Project structure
-----------------
The starting point of the program is in the file [skrollidemo.z80](skrollidemo.z80). Interrupt boilerplate code can be found in [interrupts.z80](interrupts.z80) file.

The demo is divided into separate scenes, which reside in their respective `scene_*.z80` files.

RGBDS, mod2gbt and BGB executables are contained in the *requirements* directory.

Libraries
---------
This demo uses the great [gbt-player](https://github.com/AntonioND/gbt-player) tools by Antonio Niño Díaz (AntonioND), and [RGBGrafx](http://www.aaronstj.com/files/rgbgrafx.zip) by Aaron St. John.

Disclaimer
----------
This source code is for educational purposes only. The author does not take any legal responsibility for the safety of the code in case you e.g. decide to repurpose parts of it to run a space craft or a nuclear plant. In case you do so, please contact me. I'd like to see a space craft controlled by a Game Boy.
