TRUE		EQU 1
FALSE		EQU 0

;Build options
RGBG_GBC	EQU TRUE	;build with GBC functions?
RGBG_DMG	EQU TRUE	;build with DMG functions?

;RGBGrafx.inc options
INCLUDE_VLD	EQU TRUE
INCLUDE_RGB	EQU TRUE

;use these for 'A' input for RGBG_SimpleFadeOut
RGBG_WHITE		EQU 1
RGBG_BLACK		EQU 0

RGBG_INCLUDE_MACROS	EQU TRUE ;include the macros in this file?

;use these for 'A' input for RGBG_SetGBCPals
RGBG_BKG_PALS	EQU 0
RGBG_SPR_PALS	EQU 1

;FUNCTIONS

;generic functions
GLOBAL RGBG_ScreenOff

;tile functions
GLOBAL RGBG_LoadTiles
GLOBAL RGBG_RotateTileRight
GLOBAL RGBG_RotateTileLeft

;palette functions
GLOBAL RGBG_ConvertColor15to24
GLOBAL RGBG_ConvertColor24to15
GLOBAL RGBG_SetDefPals
GLOBAL RGBG_SetGBCPals
GLOBAL RGBG_FillGBCPals
GLOBAL RGBG_InvertGBCPals
GLOBAL RGBG_GrayscaleGBCPals

;map funtctions
GLOBAL RGBG_SetTileMap
GLOBAL RGBG_FillTileMap
GLOBAL RGBG_SetTile
GLOBAL RGBG_XYToTileMap

;sprite functions
GLOBAL RGBG_ZeroOAM
GLOBAL RGBG_SetSpriteTile
GLOBAL RGBG_SetSpriteProp
GLOBAL RGBG_SetSpritePos
GLOBAL RGBG_GetSpriteTile
GLOBAL RGBG_GetSpriteProp
GLOBAL RGBG_GetSpritePos
GLOBAL RGBG_MoveSprite
GLOBAL RGBG_CopyDMARoutine
GLOBAL RGBG_DoDMA

;fade functions
GLOBAL RGBG_MakeDarker
GLOBAL RGBG_MakeLighter
GLOBAL RGBG_SimpleFadeOut
GLOBAL RGBG_InitComplexFadeBkg
GLOBAL RGBG_RunComplexFadeStepBkg
GLOBAL RGBG_DecodeComplexFadePalsBkg
GLOBAL RGBG_UpdateComplexFadePalsBkg
GLOBAL RGBG_InitComplexFadeObj
GLOBAL RGBG_RunComplexFadeStepObj
GLOBAL RGBG_DecodeComplexFadePalsObj
GLOBAL RGBG_UpdateComplexFadePalsObj
GLOBAL RGBG_RunComplexFadeBkg
GLOBAL RGBG_RunComplexFadeObj

;VARIABLES
GLOBAL RGBG_tilemap
GLOBAL RGBG_tileset
GLOBAL RGBG_map_offset
GLOBAL RGBG_update_sprites
GLOBAL RGBG_OAM
GLOBAL RGBG_fade_to_color
GLOBAL RGBG_fade_steps_left_bkg
GLOBAL RGBG_pals_to_fade_bkg
GLOBAL RGBG_first_pal_to_fade_bkg
GLOBAL RGBG_fade_steps_left_obj
GLOBAL RGBG_pals_to_fade_obj
GLOBAL RGBG_first_pal_to_fade_obj

;MACROS
RGBG_WaitNVBL: MACRO
.waitvbl\@
	ldh a,[$41] 
	and 3
	cp 1
	jr z, .waitvbl\@
	ENDM

RGBG_WaitVBL: MACRO
.waitvbl\@
	ldh a,[$41] 
	and 3
	cp 1
	jr nz, .waitvbl\@
	ENDM

IF INCLUDE_RGB
RGB:	MACRO
	;\1 = RED
	;\2 = GREEN
	;\3 = BLUE
	dw (\3*1024) + (\2*32) + \1
	ENDM
ENDC

;these are stolen straight from gb4real
RGBG_WaitForVRAM: MACRO
;*********************************
;* Wait until VRAM is available. * 
;* A is destroyed.               *
;*********************************

  ldh a,[$41] 
  and 2
  jr nz,@-4     ; Wait for retrace

ENDM

IF INCLUDE_VLD
vld: MACRO
;************************************
;* video ld: makes sure VRAM is     *
;* available before writing a byte. *
;************************************

  IF (STRLWR("\2") == "a")
    push af
    RGBG_WaitForVRAM
    pop af
  ELSE
    RGBG_WaitForVRAM
  ENDC

  ld \1,\2
ENDM
ENDC