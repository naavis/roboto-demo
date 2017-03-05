@REM RGBDS_PATH is the path to rgbasm, rgblink and rgbfix
@SET RGBDS_PATH=%~dp0\requirements\rgbds-0.2.4\
@REM MOD2GBT_PATH is the path to mod2gbt.exe
@SET MOD2GBT_PATH=%~dp0\requirements\mod2gbt\
@REM BGB_PATH is the path to bgb.exe
@SET BGB_PATH=%~dp0\requirements\bgb\

@PATH=%RGBDS_PATH%;%MOD2GBT_PATH%;%BGB_PATH%;%PATH%

@echo Converting song MOD to assembly...
mod2gbt.exe music/skrolli_anthem.mod skrolli_anthem


@echo Creating build folder...
@if not exist "build/" mkdir build


@echo Compiling...
rgbasm.exe -o build/header.o header.z80
@if errorlevel 1 goto error

rgbasm.exe -o build/skrollidemo.o skrollidemo.z80
@if errorlevel 1 goto error

rgbasm.exe -o build/scene_plasma.o scene_plasma.z80
@if errorlevel 1 goto error

rgbasm.exe -o build/scene_lissajous.o scene_lissajous.z80
@if errorlevel 1 goto error

rgbasm.exe -o build/scene_twister.o scene_twister.z80
@if errorlevel 1 goto error

rgbasm.exe -o build/interrupts.o interrupts.z80
@if errorlevel 1 goto error

rgbasm.exe -o build/scene_skrolli_logo.o scene_skrolli_logo.z80
@if errorlevel 1 goto error

rgbasm.exe -o build/scene_nintendo_logo_slide.o scene_nintendo_logo_slide.z80
@if errorlevel 1 goto error

rgbasm.exe -i rgbgrafx/ -o build/maps.o rgbgrafx/maps.z80
@if errorlevel 1 goto error

rgbasm.exe -i rgbgrafx/ -o build/rgbgrafx.o rgbgrafx/rgbgrafx.z80
@if errorlevel 1 goto error

rgbasm.exe -i rgbgrafx/ -o build/tiles.o rgbgrafx/tiles.z80
@if errorlevel 1 goto error

rgbasm.exe -i rgbgrafx/ -o build/sprites.o rgbgrafx/SPRITES.Z80
@if errorlevel 1 goto error

rgbasm.exe -i gbt_player/ -o build/gbt_player.o gbt_player/gbt_player.asm
@if errorlevel 1 goto error

rgbasm.exe -i gbt_player/ -o build/gbt_player_bank1.o gbt_player/gbt_player_bank1.asm
@if errorlevel 1 goto error

rgbasm.exe -o build/skrolli_anthem.o skrolli_anthem.asm
@if errorlevel 1 goto error


@echo Linking...
rgblink.exe -n build/skrollidemo.sym -m build/skrollidemo.map -o skrollidemo.gb build/*.o
@if errorlevel 1 goto error


@echo Fixing...
rgbfix.exe -p0 -v skrollidemo.gb
@if errorlevel 1 goto error


@goto ready

:error
@echo An error occurred!
@pause
@goto ending

:ready
echo Starting emulator...
bgb.exe skrollidemo.gb

:ending
@echo Cleaning up...
del build\*.o
