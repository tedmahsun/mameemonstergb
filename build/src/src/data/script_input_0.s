.module script_input_0

.include "vm.i"
.include "data/game_globals.i"

.area _CODE_255


___bank_script_input_0 = 255
.globl ___bank_script_input_0

_script_input_0::
        ; Store player field in variable
        VM_GET_UINT8 VAR_PLAYERSTATE, _plat_state

        ; If VAR_PLAYERSTATE>3&&VAR_PLAYERSTATE<7||VAR_PLAYERSTATE>8
        VM_RPN
            .R_REF      VAR_PLAYERSTATE
            .R_INT16    3
            .R_OPERATOR .GT
            .R_REF      VAR_PLAYERSTATE
            .R_INT16    7
            .R_OPERATOR .LT
            .R_OPERATOR .AND
            .R_REF      VAR_PLAYERSTATE
            .R_INT16    8
            .R_OPERATOR .GT
            .R_OPERATOR .OR
            .R_STOP
        VM_IF_CONST             .GT, .ARG0, 0, 1$, 1
        VM_JUMP                 2$
1$:
        ; Sound Play
        VM_SFX_PLAY             ___bank_sound_action_sav_35, _sound_action_sav_35, ___mute_mask_sound_action_sav_35, .SFX_PRIORITY_NORMAL

2$:

        ; Stop Script
        VM_STOP
