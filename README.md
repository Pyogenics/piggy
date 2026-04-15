# piggy
Portable decompile of [RAD Game Tools](https://www.radgametools.com/)' Iggy Game UI library, this project does not contain any original code or assets from Iggy.

The main target for this project is to provide an opensource, drop in replacement for iggy for Minecraft Legacy Console Edition to help improve code portability by replacing the original propietary libraries. Despite this the project is not limited to just MCLCE and should work for other iggy based games.

## What is Iggy?
Iggy is a UI library which utilises Adobe Flash as a runtime (iggy implements FP9 but with limited packages) allowing it to display rich vector based, animated and scripted UI. It allows library users to load SWF files (or dedicated `.iggy` files) that are then processed and rendered by iggy through the gdraw interface (gdraw is a graphics abstraction layer which allows for different apis to be implemented for iggy, freely), iggy will load dependencies and exposes api elements to directly call AS3 functions and create events through its api.

- [Iggy product page](https://www.radgametools.com/iggy.htm)
- [Iggy info page](https://www.radgametools.com/iggyinfo.htm)
- [Iggy version history](https://www.radgametools.com/iggyhist.htm)
- [Iggy based game list](https://www.radgametools.com/iggygames.htm)

## Other projects
- [Shiggy](https://github.com/portable-lce/shiggy), shimmed version of iggy for the PS4 to allow it to run on Linux (x86-64 only)

## Build
This project utilises meson, to build you can simply execute:
```sh
meson setup builddir
cd builddir/
meson compile
```