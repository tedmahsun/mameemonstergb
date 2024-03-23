.module actor_9_interact

.include "vm.i"
.include "data/game_globals.i"

.area _CODE_255

.LOCAL_TMP0_PARAM0_VALUE = -4
.LOCAL_ACTOR = -4

___bank_actor_9_interact = 255
.globl ___bank_actor_9_interact

_actor_9_interact::
        VM_RESERVE              4

        ; If Parameter 0 Equals 0
        VM_GET_TLOCAL           .LOCAL_TMP0_PARAM0_VALUE, 0
        VM_IF_CONST             .EQ, .LOCAL_TMP0_PARAM0_VALUE, 0, 1$, 0
        VM_JUMP                 2$
1$:
        ; Sound Play
        VM_SFX_PLAY             ___bank_sound_gbfx2_sav_05, _sound_gbfx2_sav_05, ___mute_mask_sound_gbfx2_sav_05, .SFX_PRIORITY_NORMAL

        ; Variable Add Flags
        VM_RPN
            .R_REF      VAR_MAMEELETTERSCOLLECTED_S
            .R_INT16    4
            .R_OPERATOR .B_OR
            .R_STOP
        VM_SET                  VAR_MAMEELETTERSCOLLECTED_S, .ARG0
        VM_POP                  1

        ; Variable Set To Value
        VM_SET_CONST            VAR_02LETTER_M2_A, 228

        ; Variable Set To Value
        VM_SET_CONST            VAR_02LETTER_M2_B, 229

        ; Variable Set To Value
        VM_SET_CONST            VAR_02LETTER_M2_C, 244

        ; Variable Set To Value
        VM_SET_CONST            VAR_02LETTER_M2_D, 245

        ; Call Script: GAME - UpdateHUD
        VM_CALL_FAR             ___bank_script_5, _script_5

        ; Call Script: ITEM - MAMEELetterPickedUp
        VM_PUSH_CONST           12 ; Actor 0
        VM_PUSH_CONST           VAR_MAMEELETTERSCOLLECTED_S ; Variable V0
        VM_CALL_FAR             ___bank_script_8, _script_8

        ; Actor Deactivate
        VM_SET_CONST            .LOCAL_ACTOR, 12
        VM_ACTOR_DEACTIVATE     .LOCAL_ACTOR

        ; Stop Script
        VM_STOP
2$:

        ; Stop Script
        VM_STOP
