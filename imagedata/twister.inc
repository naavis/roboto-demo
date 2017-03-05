; ///////////////////////
; //                   //
; //  File Attributes  //
; //                   //
; ///////////////////////

; Filename: twister_image.png
; Pixel Width: 160px
; Pixel Height: 128px

; /////////////////
; //             //
; //  Constants  //
; //             //
; /////////////////

twister_image_tile_map_size EQU $0140
twister_image_tile_map_width EQU $14
twister_image_tile_map_height EQU $10

twister_image_tile_data_size EQU $0A30
twister_image_tile_count EQU $0140

; ////////////////
; //            //
; //  Map Data  //
; //            //
; ////////////////

twister_image_map_data:
DB $00,$00,$00,$00,$00,$01,$02,$03,$04,$05,$06,$07,$04,$08,$09,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$0A,$0B,$0C,$04,$0D,$0E,$0F,$10
DB $11,$12,$13,$14,$00,$00,$00,$00,$00,$00,$00,$00,$15,$16,$04,$17
DB $18,$19,$04,$1A,$1B,$1C,$1D,$1E,$00,$00,$00,$00,$00,$00,$00,$00
DB $1F,$20,$21,$22,$23,$24,$25,$26,$27,$28,$29,$2A,$00,$00,$00,$00
DB $00,$00,$00,$00,$2B,$04,$2C,$2D,$2E,$2F,$00,$30,$04,$31,$32,$33
DB $00,$00,$00,$00,$00,$00,$00,$00,$34,$35,$36,$37,$38,$39,$3A,$3B
DB $3C,$3D,$3E,$3F,$00,$00,$00,$00,$00,$00,$00,$00,$40,$41,$42,$43
DB $06,$44,$45,$46,$47,$48,$49,$4A,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$4B,$4C,$4D,$4E,$4F,$50,$51,$52,$3B,$53,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$54,$55,$56,$57,$58,$59,$5A,$5B,$5C,$5D,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$5E,$33,$5F,$60,$61,$62,$63,$06
DB $64,$65,$66,$67,$00,$00,$00,$00,$00,$00,$00,$00,$68,$69,$6A,$6B
DB $55,$6C,$6D,$6E,$6F,$70,$71,$72,$00,$00,$00,$00,$00,$00,$00,$00
DB $49,$73,$74,$04,$75,$00,$76,$77,$78,$79,$04,$7A,$00,$00,$00,$00
DB $00,$00,$00,$00,$7B,$7C,$7D,$7E,$7F,$80,$81,$82,$83,$84,$85,$86
DB $00,$00,$00,$00,$00,$00,$00,$00,$87,$88,$89,$8A,$8B,$04,$8C,$8D
DB $8E,$04,$8F,$90,$00,$00,$00,$00,$00,$00,$00,$00,$91,$92,$93,$94
DB $95,$96,$97,$98,$04,$99,$9A,$9B,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$9C,$9D,$04,$9E,$06,$9F,$04,$A0,$A1,$A2,$00,$00,$00,$00,$00

; /////////////////
; //             //
; //  Tile Data  //
; //             //
; /////////////////

twister_image_tile_data:
DB $FF,$00,$FF,$00,$FF,$00,$FF,$00,$FF,$00,$FF,$00,$FF,$00,$FF,$00
DB $FF,$00,$FE,$01,$FD,$03,$F8,$06,$F4,$0C,$E8,$10,$D5,$20,$80,$40
DB $40,$C0,$00,$80,$00,$00,$00,$00,$80,$00,$01,$01,$13,$03,$2F,$0F
DB $01,$01,$07,$03,$1F,$0F,$3F,$1F,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $FF,$FF,$FF,$FF,$FC,$FC,$F8,$F8,$F0,$F0,$E0,$E0,$80,$80,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$01,$01,$03,$03,$07,$07,$0F,$0F,$1F,$1F,$3F,$3F,$7F,$FF
DB $FF,$FF,$FF,$FF,$FF,$FF,$FB,$FF,$F7,$FF,$E7,$FF,$8F,$FF,$0F,$FF
DB $FF,$00,$FF,$80,$7F,$C0,$7F,$E0,$3F,$F0,$3F,$F8,$3F,$FC,$1F,$FE
DB $FF,$00,$FE,$01,$FD,$02,$FD,$02,$FA,$04,$FB,$04,$F3,$0C,$F5,$08
DB $72,$80,$A8,$00,$52,$00,$E8,$00,$55,$00,$AA,$00,$D5,$00,$7B,$01
DB $0F,$0F,$BF,$1F,$BF,$3F,$3F,$3F,$7F,$7F,$FF,$FF,$FF,$FF,$FF,$FF
DB $FE,$FE,$F8,$F8,$F0,$F0,$E0,$E0,$C0,$C0,$90,$80,$00,$00,$54,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$01,$00
DB $00,$01,$01,$03,$0F,$07,$17,$0F,$3F,$1F,$5F,$3F,$FF,$7F,$7F,$FF
DB $7F,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $FE,$FF,$FC,$FF,$F8,$FF,$F0,$FF,$E0,$FF,$C0,$FF,$80,$FF,$00,$FF
DB $1F,$FF,$1F,$FF,$3F,$FF,$3F,$FF,$7F,$FF,$7F,$FF,$FF,$FF,$FF,$FF
DB $1F,$FF,$1F,$FF,$0F,$FF,$0F,$FF,$0F,$FF,$07,$FF,$07,$FF,$07,$FF
DB $FF,$00,$FF,$80,$FF,$80,$FF,$C0,$FF,$E0,$FF,$E0,$FF,$F0,$FF,$F0
DB $EF,$10,$EF,$10,$DF,$20,$DF,$20,$DF,$20,$BF,$40,$BF,$40,$BF,$40
DB $D7,$03,$FF,$03,$7F,$07,$F7,$0F,$FF,$0F,$EF,$1F,$EF,$1F,$FF,$1F
DB $FE,$FE,$FD,$FC,$FE,$F8,$FD,$F0,$FF,$E0,$F5,$E0,$FF,$C0,$FD,$80
DB $80,$00,$55,$00,$A0,$00,$55,$00,$A8,$00,$55,$00,$EA,$00,$55,$00
DB $00,$01,$03,$01,$03,$03,$47,$07,$0F,$0F,$5F,$1F,$3F,$1F,$7F,$3F
DB $FF,$FF,$FE,$FF,$FE,$FD,$F8,$FF,$F5,$FA,$E8,$F7,$D5,$EA,$AA,$D5
DB $01,$FF,$01,$FF,$03,$FF,$03,$FF,$03,$FF,$07,$FF,$47,$BF,$0F,$FF
DB $FF,$FF,$FE,$FF,$FE,$FF,$FE,$FF,$FE,$FF,$FE,$FF,$FE,$FF,$FE,$FF
DB $03,$FF,$03,$FF,$03,$FF,$01,$FF,$01,$FF,$01,$FF,$89,$77,$22,$DD
DB $FF,$F8,$FF,$F8,$FF,$FC,$FF,$FC,$FF,$FC,$FF,$FE,$FF,$FE,$FF,$FE
DB $BF,$40,$BF,$40,$3F,$C0,$3F,$C0,$1F,$E0,$3F,$C0,$36,$C9,$1F,$E0
DB $DF,$3F,$DF,$3F,$DF,$3F,$FF,$3F,$FF,$7F,$FF,$7F,$FF,$7F,$7F,$FF
DB $FF,$FF,$FF,$FF,$FF,$FF,$FE,$FF,$FD,$FE,$FF,$FC,$FB,$FC,$FF,$F8
DB $FF,$80,$FF,$00,$FF,$00,$FF,$00,$FF,$00,$FF,$00,$FF,$00,$FF,$00
DB $FA,$00,$55,$00,$FF,$00,$D5,$01,$FF,$03,$F7,$07,$FF,$0F,$FF,$1F
DB $FF,$7F,$7F,$7F,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $FF,$FF,$FF,$FE,$FF,$FC,$FF,$F8,$FF,$F0,$FF,$E0,$FF,$C0,$FF,$80
DB $55,$AA,$AA,$55,$55,$AA,$EA,$15,$55,$AA,$FA,$05,$D5,$2A,$FE,$01
DB $5F,$AF,$9F,$7F,$5F,$BF,$BF,$7F,$7F,$BF,$FF,$7F,$7F,$FF,$FF,$FF
DB $FC,$FF,$FE,$FD,$FD,$FE,$FE,$FD,$FD,$FA,$FA,$FD,$FD,$FA,$F6,$F9
DB $00,$FF,$AA,$55,$55,$AA,$AA,$55,$55,$AA,$AA,$55,$55,$AA,$EE,$11
DB $FF,$FE,$FF,$FE,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $35,$CA,$8F,$F0,$95,$EA,$2A,$D5,$15,$EA,$0A,$F5,$95,$6A,$CA,$75
DB $FF,$F8,$FE,$F1,$F7,$F8,$FF,$E0,$F5,$EA,$EF,$D0,$D7,$E8,$EB,$D4
DB $FF,$00,$FF,$00,$FF,$00,$FF,$00,$DD,$23,$FF,$03,$7F,$87,$FF,$0F
DB $FF,$3F,$7F,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $FF,$FF,$FF,$FE,$FF,$FC,$FF,$F8,$F7,$F0,$FF,$E0,$D5,$C0,$AF,$80
DB $F5,$0B,$FF,$03,$FF,$03,$FF,$07,$FF,$0F,$FF,$1F,$FF,$1F,$FF,$3F
DB $FB,$F4,$FE,$E1,$FB,$E4,$DF,$E0,$FF,$C0,$BF,$C0,$FF,$80,$FF,$80
DB $BB,$44,$ED,$13,$BB,$45,$FF,$01,$FF,$01,$FF,$03,$FF,$03,$FF,$03
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FE,$FF,$FE
DB $C5,$7A,$8A,$75,$A5,$7A,$A2,$7D,$C1,$3E,$D2,$3D,$D0,$3F,$E8,$1F
DB $FF,$FF,$FF,$7F,$7F,$FF,$FF,$7F,$7F,$FF,$BF,$7F,$3F,$FF,$3F,$FF
DB $D5,$EA,$8A,$F5,$85,$FA,$82,$FD,$81,$FE,$80,$FF,$81,$FF,$81,$FF
DB $5F,$AF,$FF,$1F,$7F,$BF,$FF,$7F,$7F,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $FF,$FF,$FE,$FE,$FD,$FC,$F8,$F8,$F9,$F0,$E0,$E0,$E0,$C0,$C0,$80
DB $55,$00,$AB,$00,$55,$00,$2A,$00,$55,$00,$0A,$00,$55,$00,$02,$00
DB $7F,$00,$FF,$00,$5F,$01,$FF,$03,$57,$07,$BF,$0F,$5F,$1F,$BF,$3F
DB $FF,$7F,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $FF,$FF,$FF,$FF,$FF,$FE,$FD,$FC,$FF,$FC,$FD,$F8,$FB,$F8,$F5,$F0
DB $7F,$80,$FF,$00,$FF,$00,$FF,$00,$FF,$00,$7F,$00,$FF,$00,$5F,$00
DB $FB,$07,$FF,$07,$FF,$07,$EF,$1F,$FF,$1F,$DF,$3F,$DF,$3F,$FF,$3F
DB $FF,$FE,$FF,$FE,$FF,$FE,$FF,$FC,$FF,$FC,$FF,$FC,$FF,$F8,$FF,$F8
DB $F0,$0F,$F0,$0F,$F0,$0F,$F8,$07,$FC,$03,$FC,$03,$FE,$01,$FF,$00
DB $1F,$FF,$1F,$FF,$0F,$FF,$0F,$FF,$0F,$FF,$07,$FF,$07,$FF,$03,$FF
DB $81,$FF,$83,$FF,$83,$FF,$83,$FF,$87,$FF,$8F,$FF,$8F,$FF,$8F,$FF
DB $FF,$FF,$FE,$FF,$FC,$FE,$FA,$FC,$F0,$F8,$E0,$F0,$C0,$C0,$80,$C0
DB $15,$00,$00,$00,$05,$01,$03,$03,$07,$07,$07,$0F,$2F,$1F,$7F,$3F
DB $7F,$7F,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FE,$FE,$FC,$FC
DB $EA,$E0,$F5,$E0,$EA,$C0,$D5,$C0,$42,$00,$15,$00,$00,$00,$05,$00
DB $FF,$00,$57,$00,$BF,$00,$55,$01,$AF,$03,$57,$07,$AF,$0F,$7F,$3F
DB $FF,$7F,$FF,$7F,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $FF,$F0,$FF,$F0,$FF,$E0,$FF,$E0,$FF,$C0,$FF,$80,$FF,$80,$FF,$00
DB $83,$7F,$C3,$3F,$E1,$1F,$F1,$0F,$F9,$07,$FC,$03,$FF,$01,$FF,$00
DB $9F,$FF,$9E,$FE,$BC,$FE,$B8,$FC,$D0,$F8,$E0,$F0,$80,$C0,$80,$80
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$01
DB $00,$00,$01,$00,$02,$01,$03,$07,$07,$0F,$0F,$3F,$3F,$7F,$FF,$FF
DB $BF,$7F,$7F,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FD,$FE,$E4,$F8,$D0,$E0
DB $F8,$F8,$F0,$F0,$F0,$E0,$80,$C0,$00,$80,$00,$00,$00,$00,$00,$00
DB $00,$00,$01,$00,$01,$01,$03,$03,$0F,$0F,$1F,$1F,$3F,$3F,$FF,$FF
DB $FF,$FE,$FF,$FC,$FF,$F8,$FF,$F0,$FF,$E0,$FF,$C0,$FF,$80,$FF,$00
DB $FF,$00,$FF,$01,$FF,$03,$FF,$07,$FF,$0F,$FF,$1F,$FF,$3F,$FF,$7F
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FE
DB $FF,$FF,$FC,$FC,$F8,$F8,$F0,$F0,$C0,$C0,$80,$80,$80,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$01,$01,$03,$0F,$07,$0F,$0F,$1F,$1F
DB $0B,$07,$27,$1F,$BF,$7F,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FE,$FF,$FD,$FE
DB $FF,$FF,$FC,$FE,$F0,$FC,$E0,$F0,$C0,$E0,$40,$80,$80,$00,$00,$00
DB $00,$80,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $01,$01,$01,$03,$07,$0F,$0B,$1F,$1D,$3F,$3D,$7F,$79,$7F,$F9,$FF
DB $FF,$00,$FF,$80,$3F,$C0,$9F,$E0,$8F,$F0,$87,$F8,$C3,$FC,$C1,$FE
DB $FF,$00,$FF,$01,$FF,$01,$FF,$03,$FF,$07,$FF,$07,$FF,$0F,$FF,$0F
DB $FE,$FC,$F5,$F0,$EA,$E0,$F5,$C0,$AA,$80,$FD,$00,$EA,$00,$FF,$00
DB $A0,$00,$00,$00,$A8,$00,$42,$00,$AB,$03,$57,$03,$AF,$07,$57,$07
DB $3F,$3F,$7F,$7F,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FE,$FE
DB $FE,$FC,$F4,$F8,$E0,$F0,$E0,$E0,$C0,$C0,$A0,$80,$00,$00,$A8,$00
DB $01,$03,$03,$03,$07,$0F,$0F,$1F,$5F,$3F,$3F,$7F,$7F,$FF,$FF,$FF
DB $F1,$FF,$F1,$FF,$F1,$FF,$E1,$FF,$C1,$FF,$C1,$FF,$C1,$FF,$81,$FF
DB $C0,$FF,$E0,$FF,$E0,$FF,$F0,$FF,$F0,$FF,$F0,$FF,$F8,$FF,$F8,$FF
DB $FF,$00,$7F,$80,$3F,$C0,$3F,$C0,$1F,$E0,$0F,$F0,$0F,$F0,$0F,$F0
DB $FF,$1F,$FF,$1F,$FF,$3F,$FF,$3F,$FF,$3F,$FF,$7F,$FF,$7F,$FF,$7F
DB $FF,$FC,$FB,$FC,$FB,$FC,$FF,$F8,$F7,$F8,$FF,$E0,$FF,$E0,$DF,$E0
DB $FA,$00,$FF,$00,$FE,$00,$FF,$00,$FF,$00,$FF,$00,$FF,$00,$FE,$01
DB $AF,$0F,$DF,$1F,$BF,$1F,$FF,$3F,$BF,$3F,$FF,$7F,$FF,$FF,$FF,$FF
DB $FD,$FC,$FA,$F8,$FD,$F0,$EA,$E0,$FF,$C0,$FA,$80,$FF,$00,$FE,$00
DB $40,$00,$AA,$00,$50,$00,$AA,$00,$54,$00,$AA,$00,$D5,$00,$AA,$00
DB $03,$01,$07,$03,$07,$07,$9F,$0F,$1F,$1F,$BF,$3F,$7F,$7F,$FF,$FF
DB $FF,$FF,$FF,$FF,$FF,$FF,$FE,$FF,$FF,$FE,$FE,$FD,$FF,$F8,$FA,$F5
DB $81,$FF,$81,$FF,$01,$FF,$81,$7F,$41,$BF,$A1,$5F,$51,$AF,$AB,$57
DB $FC,$FF,$FC,$FF,$FD,$FE,$FE,$FF,$FF,$FE,$FE,$FF,$FF,$FE,$FF,$FF
DB $17,$F8,$0B,$FC,$4B,$BC,$83,$7C,$45,$BE,$A5,$5E,$51,$AE,$A3,$5E
DB $FF,$C0,$FF,$C0,$FF,$C0,$FF,$80,$FF,$80,$DD,$A2,$B7,$C8,$DD,$22
DB $FF,$01,$FF,$01,$FD,$03,$FF,$03,$FB,$07,$DF,$27,$7F,$87,$DF,$2F
DB $FF,$FC,$FF,$F8,$FF,$F8,$FF,$F0,$FF,$E0,$FF,$C0,$FF,$C0,$AF,$D0
DB $F5,$01,$AB,$03,$FF,$07,$EF,$0F,$FF,$1F,$FF,$3F,$FF,$7F,$FF,$FF
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FE,$FF,$FF,$FC
DB $FF,$F0,$FE,$E1,$FF,$C0,$BB,$C4,$FF,$00,$FF,$00,$FF,$00,$FF,$00
DB $D7,$2B,$EB,$17,$F7,$0B,$AF,$57,$FF,$07,$EF,$1F,$7F,$8F,$FF,$1F
DB $53,$AE,$A9,$56,$50,$AF,$A8,$57,$54,$AB,$A9,$57,$F1,$0F,$AC,$53
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$7F,$FF,$7F
DB $77,$88,$AA,$55,$55,$AA,$AA,$55,$55,$AA,$AA,$55,$55,$AA,$00,$FF
DB $6F,$9F,$BF,$5F,$5F,$BF,$BF,$5F,$7F,$BF,$BF,$7F,$7F,$BF,$3F,$FF
DB $FF,$FF,$FE,$FF,$FF,$FE,$FE,$FD,$FD,$FE,$FA,$FD,$F9,$FE,$FA,$F5
DB $7F,$80,$AB,$54,$5F,$A0,$AA,$55,$57,$A8,$AA,$55,$55,$AA,$AA,$55
DB $FF,$01,$FF,$03,$FF,$07,$FF,$0F,$FF,$1F,$FF,$3F,$FF,$7F,$FF,$FF
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FE,$FE,$FF,$FE
DB $FF,$F8,$FF,$F0,$EF,$E0,$FF,$C0,$AB,$80,$FF,$00,$AA,$00,$5F,$00
DB $FF,$00,$FF,$00,$FF,$00,$FF,$00,$FF,$00,$FF,$00,$FF,$00,$FF,$01
DB $FF,$1F,$DF,$3F,$FF,$3F,$BF,$7F,$7F,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $FE,$FF,$FF,$FE,$FF,$FE,$FF,$FE,$FF,$FC,$FB,$FC,$FB,$FC,$FB,$FC
DB $F8,$07,$6C,$93,$FC,$03,$F8,$07,$FC,$03,$FC,$03,$FD,$02,$FD,$02
DB $FF,$7F,$FF,$7F,$FF,$7F,$FF,$3F,$FF,$3F,$FF,$3F,$FF,$1F,$FF,$1F
DB $44,$BB,$91,$EE,$80,$FF,$80,$FF,$80,$FF,$C0,$FF,$C0,$FF,$C0,$FF
DB $7F,$FF,$7F,$FF,$7F,$FF,$7F,$FF,$7F,$FF,$7F,$FF,$7F,$FF,$FF,$FF
DB $F0,$FF,$E2,$FD,$E0,$FF,$C0,$FF,$C0,$FF,$C0,$FF,$80,$FF,$80,$FF
DB $55,$AB,$AB,$57,$17,$EF,$AF,$5F,$1F,$FF,$7F,$BF,$7F,$FF,$FF,$FF
DB $FE,$FC,$FC,$F8,$FA,$F8,$F0,$F0,$E2,$E0,$C0,$C0,$C0,$80,$00,$80
DB $AA,$00,$57,$00,$AA,$00,$15,$00,$AA,$00,$05,$00,$AA,$00,$01,$00
DB $BF,$01,$FF,$03,$AF,$07,$FF,$07,$BF,$0F,$7F,$1F,$BF,$3F,$7F,$7F
DB $FF,$F8,$F7,$F8,$F7,$F8,$FF,$F0,$EF,$F0,$FE,$E0,$FF,$C0,$EB,$C0
DB $FD,$02,$FD,$02,$FD,$02,$FB,$04,$FB,$04,$FB,$04,$F7,$08,$F7,$08
DB $FF,$0F,$FF,$0F,$FF,$07,$FF,$07,$FF,$03,$FF,$01,$FF,$01,$FF,$00
DB $E0,$FF,$E0,$FF,$E0,$FF,$F0,$FF,$F0,$FF,$F0,$FF,$F8,$FF,$F8,$FF
DB $FF,$FF,$FF,$FF,$FE,$FF,$FE,$FF,$FC,$FF,$FC,$FF,$F8,$FF,$F8,$FF
DB $00,$FF,$01,$FF,$03,$FF,$07,$FF,$0F,$FF,$1F,$FF,$3F,$FF,$7F,$FF
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FE,$FF
DB $FE,$FF,$FF,$FE,$FA,$FC,$FC,$F8,$E8,$F0,$F0,$E0,$80,$C0,$00,$80
DB $80,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $2A,$00,$00,$00,$09,$01,$03,$03,$07,$07,$0F,$0F,$1F,$1F,$7F,$7F
DB $FF,$FF,$FF,$FF,$FF,$FF,$FE,$FE,$FC,$FC,$FD,$FC,$FD,$F8,$F0,$F0
DB $DE,$80,$AB,$00,$55,$00,$AA,$00,$17,$00,$4A,$00,$15,$00,$4E,$01
DB $AF,$10,$CF,$30,$DF,$20,$5F,$20,$BF,$40,$BF,$40,$7F,$80,$FF,$00
DB $F8,$7F,$FC,$3F,$FC,$1F,$FC,$0F,$FE,$07,$FE,$03,$FF,$01,$FF,$00
DB $F0,$FF,$F1,$FF,$E7,$FF,$EF,$FF,$DF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $FE,$FF,$FC,$FC,$F8,$F8,$F0,$F0,$E0,$E0,$C0,$C0,$80,$80,$00,$00
DB $00,$00,$01,$01,$07,$07,$0F,$0F,$1F,$1F,$3F,$3F,$FF,$FF,$FF,$FF
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FC,$F8,$F8,$F0,$E0,$C0,$80,$80
DB $F4,$F0,$C8,$C0,$80,$80,$01,$00,$00,$00,$00,$00,$00,$01,$02,$03
DB $01,$02,$AB,$04,$17,$08,$2F,$30,$1F,$60,$BF,$C0,$7F,$80,$FF,$00
