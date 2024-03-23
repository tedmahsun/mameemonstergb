.module actor_3_interact

.include "vm.i"
.include "data/game_globals.i"

.area _CODE_255

.LOCAL_TMP0_PARAM0_VALUE = -4
.LOCAL_ACTOR = -4

___bank_actor_3_interact = 255
.globl ___bank_actor_3_interact

_actor_3_interact::
        VM_RESERVE              4

        ; If Parameter 0 Equals 0
        VM_GET_TLOCAL           .LOCAL_TMP0_PARAM0_VALUE, 0
        VM_IF_CONST             .EQ, .LOCAL_TMP0_PARAM0_VALUE, 0, 1$, 0
        VM_JUMP                 2$
1$:
        ; Call Script: ITEM - MameePacket
        VM_PUSH_CONST           4 ; Actor 0
        VM_PUSH_CONST           VAR_S0A0_ITEMCOLLECTED_3 ; Variable V0
        VM_CALL_FAR             ___bank_script_1, _script_1

        ; Actor Deactivate
        VM_SET_CONST            .LOCAL_ACTOR, 4
        VM_ACTOR_DEACTIVATE     .LOCAL_ACTOR

        ; Stop Script
        VM_STOP
2$:

        ; Stop Script
        VM_STOP
