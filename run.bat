@PATH=D:\Software\GB Emulator Stuff\rgbds-0.2.4-win32\rgbds-0.2.4;%PATH%

@echo Compiling...
rgbasm -o header.o header.z80
@if errorlevel 1 goto error

rgbasm -o skrollidemo.o skrollidemo.z80
@if errorlevel 1 goto error

REM rgbasm -o fades.o FADES.z80
REM @if errorlevel 1 goto error

rgbasm -o maps.o maps.z80
@if errorlevel 1 goto error

rgbasm -o pals.o pals.z80
@if errorlevel 1 goto error

rgbasm -o rgbgrafx.o rgbgrafx.z80
@if errorlevel 1 goto error

REM rgbasm -o sprites.o sprites.z80
REM @if errorlevel 1 goto error

rgbasm -o tiles.o tiles.z80
@if errorlevel 1 goto error


@echo Linking...
rgblink -n skrollidemo.sym -m skrollidemo.map -o skrollidemo.gb *.o
@if errorlevel 1 goto error

@echo Fixing...
rgbfix -p0 -v skrollidemo.gb
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
