.module script_5

.include "vm.i"
.include "data/game_globals.i"

.area _CODE_255


___bank_script_5 = 255
.globl ___bank_script_5

_script_5::
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
        .asciz "\003\001\001\005\376\340\341\357x\005\342\343\357x%c%c%c%c%c%c%c%c%c%c\005\377\003\002\002\005\360\361%D2\005\362\363%D2%c%c%c%c%c%c%c%c%c%c"
        VM_DISPLAY_TEXT

        VM_RET_FAR
