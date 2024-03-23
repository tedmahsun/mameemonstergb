.module script_input_1

.include "vm.i"
.include "data/game_globals.i"

.globl _text_ff_joypad, _text_draw_speed, _text_out_speed, _text_in_speed

.area _CODE_255


___bank_script_input_1 = 255
.globl ___bank_script_input_1

_script_input_1::
        ; Text Set Animation Speed
        VM_SET_CONST_INT8       _text_ff_joypad, 0
        VM_SET_CONST_INT8       _text_draw_speed, 0
        VM_SET_CONST_INT8       _text_out_speed, 1
        VM_SET_CONST_INT8       _text_in_speed, 1

        ; If Variable True
        VM_IF_CONST             .GT, VAR_ISPAUSED, 0, 1$, 0
        ; Variable Set To True
        VM_SET_CONST            VAR_ISPAUSED, 1

        VM_MUSIC_MUTE 0b0111
        VM_OVERLAY_MOVE_TO 0, 13, .OVERLAY_IN_SPEED
        VM_OVERLAY_WAIT .UI_MODAL .UI_WAIT_WINDOW
        VM_OVERLAY_CLEAR 0, 0, 20, 5, .UI_COLOR_WHITE, 0
        VM_LOAD_TEXT 22
        .dw VAR_00LETTER_M1_A
        .dw VAR_00LETTER_M1_B
        .dw VAR_01LETTER_A_A
        .dw VAR_01LETTER_A_B
        .dw VAR_02LETTER_M2_A
        .dw VAR_02LETTER_M2_B
        .dw VAR_03LETTER_E1_A
        .dw VAR_03LETTER_E1_B
        .dw VAR_04LETTER_E2_A
        .dw VAR_04LETTER_E2_B
        .dw VAR_MONSTERLIVES_0
        .dw VAR_MAMEEPACKETSCOLLECTED
        .dw VAR_00LETTER_M1_C
        .dw VAR_00LETTER_M1_D
        .dw VAR_01LETTER_A_C
        .dw VAR_01LETTER_A_D
        .dw VAR_02LETTER_M2_C
        .dw VAR_02LETTER_M2_D
        .dw VAR_03LETTER_E1_C
        .dw VAR_03LETTER_E1_D
        .dw VAR_04LETTER_E2_C
        .dw VAR_04LETTER_E2_D
        .asciz "\003\001\001\005\376\340\341\357x\005\342\343\357x%c%c%c%c%c%c%c%c%c%c\005\377\003\002\002\005\360\361%D2\005\362\363%D2%c%c%c%c%c%c%c%c%c%c\003\007\004 PAUSED"
        VM_DISPLAY_TEXT
        VM_OVERLAY_WAIT .UI_MODAL .UI_WAIT_BTN_A
        VM_OVERLAY_MOVE_TO 0, 16, .OVERLAY_OUT_SPEED
        VM_MUSIC_MUTE 0b0000
        VM_OVERLAY_WAIT .UI_MODAL .UI_WAIT_WINDOW

        ; Variable Set To False
        VM_SET_CONST            VAR_ISPAUSED, 0

        VM_JUMP                 2$
1$:
2$:

        ; Stop Script
        VM_STOP
