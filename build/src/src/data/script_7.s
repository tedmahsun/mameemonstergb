.module script_7

.include "vm.i"
.include "data/game_globals.i"

.area _CODE_255

.SCRIPT_ARG_INDIRECT_0_VARIABLE = -3

___bank_script_7 = 255
.globl ___bank_script_7

_script_7::
        ; If Variable .B_AND Value
        VM_RPN
            .R_REF_IND  .SCRIPT_ARG_INDIRECT_0_VARIABLE
            .R_INT16    1
            .R_OPERATOR .B_AND
            .R_STOP
        VM_IF_CONST             .NE, .ARG0, 0, 1$, 1
        ; Variable Set To Value
        VM_SET_CONST            VAR_00LETTER_M1_A, 234

        ; Variable Set To Value
        VM_SET_CONST            VAR_00LETTER_M1_B, 235

        ; Variable Set To Value
        VM_SET_CONST            VAR_00LETTER_M1_C, 250

        ; Variable Set To Value
        VM_SET_CONST            VAR_00LETTER_M1_D, 251

        VM_JUMP                 2$
1$:
        ; Variable Set To Value
        VM_SET_CONST            VAR_00LETTER_M1_A, 228

        ; Variable Set To Value
        VM_SET_CONST            VAR_00LETTER_M1_B, 229

        ; Variable Set To Value
        VM_SET_CONST            VAR_00LETTER_M1_C, 244

        ; Variable Set To Value
        VM_SET_CONST            VAR_00LETTER_M1_D, 245

2$:

        ; If Variable .B_AND Value
        VM_RPN
            .R_REF_IND  .SCRIPT_ARG_INDIRECT_0_VARIABLE
            .R_INT16    2
            .R_OPERATOR .B_AND
            .R_STOP
        VM_IF_CONST             .NE, .ARG0, 0, 3$, 1
        ; Variable Set To Value
        VM_SET_CONST            VAR_01LETTER_A_A, 234

        ; Variable Set To Value
        VM_SET_CONST            VAR_01LETTER_A_B, 235

        ; Variable Set To Value
        VM_SET_CONST            VAR_01LETTER_A_C, 250

        ; Variable Set To Value
        VM_SET_CONST            VAR_01LETTER_A_D, 251

        VM_JUMP                 4$
3$:
        ; Variable Set To Value
        VM_SET_CONST            VAR_01LETTER_A_A, 230

        ; Variable Set To Value
        VM_SET_CONST            VAR_01LETTER_A_B, 231

        ; Variable Set To Value
        VM_SET_CONST            VAR_01LETTER_A_C, 246

        ; Variable Set To Value
        VM_SET_CONST            VAR_01LETTER_A_D, 247

4$:

        ; If Variable .B_AND Value
        VM_RPN
            .R_REF_IND  .SCRIPT_ARG_INDIRECT_0_VARIABLE
            .R_INT16    4
            .R_OPERATOR .B_AND
            .R_STOP
        VM_IF_CONST             .NE, .ARG0, 0, 5$, 1
        ; Variable Set To Value
        VM_SET_CONST            VAR_02LETTER_M2_A, 234

        ; Variable Set To Value
        VM_SET_CONST            VAR_02LETTER_M2_B, 235

        ; Variable Set To Value
        VM_SET_CONST            VAR_02LETTER_M2_C, 250

        ; Variable Set To Value
        VM_SET_CONST            VAR_02LETTER_M2_D, 251

        VM_JUMP                 6$
5$:
        ; Variable Set To Value
        VM_SET_CONST            VAR_02LETTER_M2_A, 228

        ; Variable Set To Value
        VM_SET_CONST            VAR_02LETTER_M2_B, 229

        ; Variable Set To Value
        VM_SET_CONST            VAR_02LETTER_M2_C, 244

        ; Variable Set To Value
        VM_SET_CONST            VAR_02LETTER_M2_D, 245

6$:

        ; If Variable .B_AND Value
        VM_RPN
            .R_REF_IND  .SCRIPT_ARG_INDIRECT_0_VARIABLE
            .R_INT16    8
            .R_OPERATOR .B_AND
            .R_STOP
        VM_IF_CONST             .NE, .ARG0, 0, 7$, 1
        ; Variable Set To Value
        VM_SET_CONST            VAR_03LETTER_E1_A, 234

        ; Variable Set To Value
        VM_SET_CONST            VAR_03LETTER_E1_B, 235

        ; Variable Set To Value
        VM_SET_CONST            VAR_03LETTER_E1_C, 250

        ; Variable Set To Value
        VM_SET_CONST            VAR_03LETTER_E1_D, 251

        VM_JUMP                 8$
7$:
        ; Variable Set To Value
        VM_SET_CONST            VAR_03LETTER_E1_A, 232

        ; Variable Set To Value
        VM_SET_CONST            VAR_03LETTER_E1_B, 233

        ; Variable Set To Value
        VM_SET_CONST            VAR_03LETTER_E1_C, 248

        ; Variable Set To Value
        VM_SET_CONST            VAR_03LETTER_E1_D, 249

8$:

        ; If Variable .B_AND Value
        VM_RPN
            .R_REF_IND  .SCRIPT_ARG_INDIRECT_0_VARIABLE
            .R_INT16    16
            .R_OPERATOR .B_AND
            .R_STOP
        VM_IF_CONST             .NE, .ARG0, 0, 9$, 1
        ; Variable Set To Value
        VM_SET_CONST            VAR_04LETTER_E2_A, 234

        ; Variable Set To Value
        VM_SET_CONST            VAR_04LETTER_E2_B, 235

        ; Variable Set To Value
        VM_SET_CONST            VAR_04LETTER_E2_C, 250

        ; Variable Set To Value
        VM_SET_CONST            VAR_04LETTER_E2_D, 251

        VM_JUMP                 10$
9$:
        ; Variable Set To Value
        VM_SET_CONST            VAR_04LETTER_E2_A, 232

        ; Variable Set To Value
        VM_SET_CONST            VAR_04LETTER_E2_B, 233

        ; Variable Set To Value
        VM_SET_CONST            VAR_04LETTER_E2_C, 248

        ; Variable Set To Value
        VM_SET_CONST            VAR_04LETTER_E2_D, 249

10$:

        VM_RET_FAR_N            1
