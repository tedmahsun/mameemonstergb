.module scene_1_init

.include "vm.i"
.include "data/game_globals.i"

.globl b_wait_frames, _wait_frames, _fade_frames_per_step

.area _CODE_255

.LOCAL_ACTOR = -4
.LOCAL_TMP1_WAIT_ARGS = -4

___bank_scene_1_init = 255
.globl ___bank_scene_1_init

_scene_1_init::
        VM_LOCK

        VM_RESERVE              4

        ; If Variable True
        VM_IF_CONST             .GT, VAR_S0A0_ITEMCOLLECTED, 0, 1$, 0
        VM_JUMP                 2$
1$:
        ; Actor Deactivate
        VM_SET_CONST            .LOCAL_ACTOR, 1
        VM_ACTOR_DEACTIVATE     .LOCAL_ACTOR

2$:

        ; If Variable True
        VM_IF_CONST             .GT, VAR_S0A0_ITEMCOLLECTED_1, 0, 3$, 0
        VM_JUMP                 4$
3$:
        ; Actor Deactivate
        VM_SET_CONST            .LOCAL_ACTOR, 2
        VM_ACTOR_DEACTIVATE     .LOCAL_ACTOR

4$:

        ; If Variable True
        VM_IF_CONST             .GT, VAR_S0A0_ITEMCOLLECTED_2, 0, 5$, 0
        VM_JUMP                 6$
5$:
        ; Actor Deactivate
        VM_SET_CONST            .LOCAL_ACTOR, 3
        VM_ACTOR_DEACTIVATE     .LOCAL_ACTOR

6$:

        ; If Variable True
        VM_IF_CONST             .GT, VAR_S0A0_ITEMCOLLECTED_3, 0, 7$, 0
        VM_JUMP                 8$
7$:
        ; Actor Deactivate
        VM_SET_CONST            .LOCAL_ACTOR, 4
        VM_ACTOR_DEACTIVATE     .LOCAL_ACTOR

8$:

        ; If Variable True
        VM_IF_CONST             .GT, VAR_S0A0_ITEMCOLLECTED_4, 0, 9$, 0
        VM_JUMP                 10$
9$:
        ; Actor Deactivate
        VM_SET_CONST            .LOCAL_ACTOR, 5
        VM_ACTOR_DEACTIVATE     .LOCAL_ACTOR

10$:

        ; If Variable True
        VM_IF_CONST             .GT, VAR_S0A0_ITEMCOLLECTED_5, 0, 11$, 0
        VM_JUMP                 12$
11$:
        ; Actor Deactivate
        VM_SET_CONST            .LOCAL_ACTOR, 6
        VM_ACTOR_DEACTIVATE     .LOCAL_ACTOR

12$:

        ; If Variable True
        VM_IF_CONST             .GT, VAR_S0A0_ITEMCOLLECTED_6, 0, 13$, 0
        VM_JUMP                 14$
13$:
        ; Actor Deactivate
        VM_SET_CONST            .LOCAL_ACTOR, 7
        VM_ACTOR_DEACTIVATE     .LOCAL_ACTOR

14$:

        ; If Variable True
        VM_IF_CONST             .GT, VAR_S0A0_ITEMCOLLECTED_7, 0, 15$, 0
        VM_JUMP                 16$
15$:
        ; Actor Deactivate
        VM_SET_CONST            .LOCAL_ACTOR, 8
        VM_ACTOR_DEACTIVATE     .LOCAL_ACTOR

16$:

        ; If Variable True
        VM_IF_CONST             .GT, VAR_S0A0_ITEMCOLLECTED_8, 0, 17$, 0
        VM_JUMP                 18$
17$:
        ; Actor Deactivate
        VM_SET_CONST            .LOCAL_ACTOR, 9
        VM_ACTOR_DEACTIVATE     .LOCAL_ACTOR

18$:

        ; If Variable .B_AND Value
        VM_RPN
            .R_REF      VAR_MAMEELETTERSCOLLECTED_S
            .R_INT16    1
            .R_OPERATOR .B_AND
            .R_STOP
        VM_IF_CONST             .NE, .ARG0, 0, 19$, 1
        ; Actor Set Active
        VM_SET_CONST            .LOCAL_ACTOR, 10

        ; Actor Set Animation State
        VM_ACTOR_SET_ANIM_SET   .LOCAL_ACTOR, STATE_DEFAULT

        VM_JUMP                 20$
19$:
        ; Actor Deactivate
        VM_SET_CONST            .LOCAL_ACTOR, 10
        VM_ACTOR_DEACTIVATE     .LOCAL_ACTOR

20$:

        ; If Variable .B_AND Value
        VM_RPN
            .R_REF      VAR_MAMEELETTERSCOLLECTED_S
            .R_INT16    2
            .R_OPERATOR .B_AND
            .R_STOP
        VM_IF_CONST             .NE, .ARG0, 0, 21$, 1
        ; Actor Set Active
        VM_SET_CONST            .LOCAL_ACTOR, 11

        ; Actor Set Animation State
        VM_ACTOR_SET_ANIM_SET   .LOCAL_ACTOR, STATE_A

        VM_JUMP                 22$
21$:
        ; Actor Deactivate
        VM_SET_CONST            .LOCAL_ACTOR, 11
        VM_ACTOR_DEACTIVATE     .LOCAL_ACTOR

22$:

        ; If Variable .B_AND Value
        VM_RPN
            .R_REF      VAR_MAMEELETTERSCOLLECTED_S
            .R_INT16    4
            .R_OPERATOR .B_AND
            .R_STOP
        VM_IF_CONST             .NE, .ARG0, 0, 23$, 1
        ; Actor Set Active
        VM_SET_CONST            .LOCAL_ACTOR, 12

        ; Actor Set Animation State
        VM_ACTOR_SET_ANIM_SET   .LOCAL_ACTOR, STATE_DEFAULT

        VM_JUMP                 24$
23$:
        ; Actor Deactivate
        VM_SET_CONST            .LOCAL_ACTOR, 12
        VM_ACTOR_DEACTIVATE     .LOCAL_ACTOR

24$:

        ; If Variable .B_AND Value
        VM_RPN
            .R_REF      VAR_MAMEELETTERSCOLLECTED_S
            .R_INT16    8
            .R_OPERATOR .B_AND
            .R_STOP
        VM_IF_CONST             .NE, .ARG0, 0, 25$, 1
        ; Actor Set Active
        VM_SET_CONST            .LOCAL_ACTOR, 13

        ; Actor Set Animation State
        VM_ACTOR_SET_ANIM_SET   .LOCAL_ACTOR, STATE_E

        VM_JUMP                 26$
25$:
        ; Actor Deactivate
        VM_SET_CONST            .LOCAL_ACTOR, 13
        VM_ACTOR_DEACTIVATE     .LOCAL_ACTOR

26$:

        ; If Variable .B_AND Value
        VM_RPN
            .R_REF      VAR_MAMEELETTERSCOLLECTED_S
            .R_INT16    16
            .R_OPERATOR .B_AND
            .R_STOP
        VM_IF_CONST             .NE, .ARG0, 0, 27$, 1
        ; Actor Set Active
        VM_SET_CONST            .LOCAL_ACTOR, 14

        ; Actor Set Animation State
        VM_ACTOR_SET_ANIM_SET   .LOCAL_ACTOR, STATE_E

        VM_JUMP                 28$
27$:
        ; Actor Deactivate
        VM_SET_CONST            .LOCAL_ACTOR, 14
        VM_ACTOR_DEACTIVATE     .LOCAL_ACTOR

28$:

        ; If Variable True
        VM_IF_CONST             .GT, VAR_S0A0_ITEMCOLLECTED_9, 0, 29$, 0
        VM_JUMP                 30$
29$:
        ; Actor Deactivate
        VM_SET_CONST            .LOCAL_ACTOR, 15
        VM_ACTOR_DEACTIVATE     .LOCAL_ACTOR

30$:

        ; If Variable True
        VM_IF_CONST             .GT, VAR_ISDEBUGMODEOFF, 0, 31$, 0
        ; Call Script: GAME - DebugMode
        VM_CALL_FAR             ___bank_script_3, _script_3

        VM_JUMP                 32$
31$:
32$:

        ; Call Script: PLAYER - Jump
        VM_CALL_FAR             ___bank_script_6, _script_6

        ; Call Script: PLAYER - Pause
        VM_CALL_FAR             ___bank_script_9, _script_9

        ; Call Script: INIT - MAMEELetters
        VM_PUSH_CONST           VAR_MAMEELETTERSCOLLECTED_S ; Variable V0
        VM_CALL_FAR             ___bank_script_7, _script_7

        ; Call Script: GAME - OpenHUD
        VM_CALL_FAR             ___bank_script_4, _script_4

        ; Call Script: GAME - UpdateHUD
        VM_CALL_FAR             ___bank_script_5, _script_5

        ; Wait N Frames
        VM_SET_CONST            .LOCAL_TMP1_WAIT_ARGS, 1
        VM_INVOKE               b_wait_frames, _wait_frames, 0, .LOCAL_TMP1_WAIT_ARGS

        ; Fade In
        VM_SET_CONST_INT8       _fade_frames_per_step, 1
        VM_FADE_IN              1

        ; Stop Script
        VM_STOP
