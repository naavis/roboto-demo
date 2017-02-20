@REM Set RGBDSPATH and MOD2GBTPATH accordingly!
@REM RGBDSPATH is the path to rgbasm, rgblink and rgbfix
@SET RGBDSPATH=D:\Software\GB Emulator Stuff\rgbds-0.2.4-win32\rgbds-0.2.4\
@REM MOD2GBTPATH is the path to mod2gbt.exe
@SET MOD2GBTPATH=D:\Software\GB Emulator Stuff\gbt-player-3.0.4\mod2gbt\

@PATH=%RGBDSPATH%;%MOD2GBTPATH%;%PATH%

@echo Converting song MOD to assembly...
mod2gbt.exe music/skrolli_anthem.mod skrolli_anthem

@echo Compiling...
rgbasm.exe -o header.o header.z80
@if errorlevel 1 goto error

rgbasm.exe -o skrollidemo.o skrollidemo.z80
@if errorlevel 1 goto error

rgbasm.exe -i rgbgrafx/ -o maps.o rgbgrafx/maps.z80
@if errorlevel 1 goto error

rgbasm.exe -i rgbgrafx/ -o pals.o rgbgrafx/pals.z80
@if errorlevel 1 goto error

rgbasm.exe -i rgbgrafx/ -o rgbgrafx.o rgbgrafx/rgbgrafx.z80
@if errorlevel 1 goto error

rgbasm.exe -i rgbgrafx/ -o tiles.o rgbgrafx/tiles.z80
@if errorlevel 1 goto error

rgbasm.exe -o gbt_player.o gbt_player.asm
@if errorlevel 1 goto error

rgbasm.exe -o gbt_player_bank1.o gbt_player_bank1.asm
@if errorlevel 1 goto error

rgbasm.exe -o skrolli_anthem.o skrolli_anthem.asm


@echo Linking...
rgblink.exe -n skrollidemo.sym -m skrollidemo.map -o skrollidemo.gb *.o
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
"D:\Software\GB Emulator Stuff\bgb\bgb.exe" skrollidemo.gb

:ending
@echo Cleaning up...
del *.o
