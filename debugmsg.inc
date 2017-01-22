msg: MACRO
	ld d,d
	jr .cont\@
	dw   $6464
	dw   0
	db   \1
.cont\@	nop
ENDM

brkmsg: MACRO
	ld d,d
	jr .cont\@
	dw   $6464
	dw   0
	db   \1
.cont\@	ld b,b
ENDM

brk: MACRO
	ld b,b
ENDM