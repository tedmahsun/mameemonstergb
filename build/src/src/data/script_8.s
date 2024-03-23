.module script_8

.include "vm.i"
.include "data/game_globals.i"

.area _CODE_255

.SCRIPT_ARG_INDIRECT_0_VARIABLE = -10
.SCRIPT_ARG_1_ACTOR = -11
.LOCAL_ACTOR = -4
.LOCAL_TMP1_WAIT_ARGS = -5
.LOCAL_LOOP = -6
.LOCAL_FINAL_X = -7

___bank_script_8 = 255
.globl ___bank_script_8

_script_8::
        VM_RESERVE              7

        ; Actor Set Active
        VM_SET                  .LOCAL_ACTOR, .SCRIPT_ARG_1_ACTOR

        ; Actor Move Relative
        VM_ACTOR_GET_POS        .LOCAL_ACTOR
        VM_RPN
            .R_REF      ^/(.LOCAL_ACTOR + 1)/
            .R_INT16    0
            .R_OPERATOR .ADD
            .R_INT16    0
            .R_OPERATOR .MAX
            .R_REF      ^/(.LOCAL_ACTOR + 2)/
            .R_INT16    -384
            .R_OPERATOR .ADD
            .R_INT16    0
            .R_OPERATOR .MAX
            .R_STOP
        VM_SET                  ^/(.LOCAL_ACTOR + 1 - 2)/, .ARG1
        VM_SET                  ^/(.LOCAL_ACTOR + 2 - 2)/, .ARG0
        VM_POP                  2
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 3)/, .ACTOR_ATTR_H_FIRST
        VM_ACTOR_MOVE_TO        .LOCAL_ACTOR

        ; Sprite FX
        VM_SET                  .LOCAL_ACTOR, .SCRIPT_ARG_1_ACTOR

        
        VM_SET_CONST        .LOCAL_LOOP, 4
        VM_SET_CONST        .LOCAL_TMP1_WAIT_ARGS, 1
        
        VM_ACTOR_GET_POS    .LOCAL_ACTOR
        VM_SET              .LOCAL_FINAL_X, ^/(.LOCAL_ACTOR + 1)/
        
        1$: ; start_loop
        
          VM_RPN
            .R_REF          .LOCAL_FINAL_X ; X
            .R_INT16        4
            .R_REF          .LOCAL_LOOP
            .R_OPERATOR     .SUB
            .R_INT16        64
            .R_OPERATOR     .MUL
            .R_OPERATOR     .ADD
            .R_REF_SET      ^/(.LOCAL_ACTOR + 1)/
            .R_STOP
        
          VM_ACTOR_SET_POS  .LOCAL_ACTOR
        
          ; Wait 1 Frames
          VM_INVOKE         b_wait_frames, _wait_frames, 0, .LOCAL_TMP1_WAIT_ARGS
        
          VM_RPN
            .R_REF          .LOCAL_FINAL_X ; X
            .R_INT16        4
            .R_REF          .LOCAL_LOOP
            .R_OPERATOR     .SUB
            .R_INT16        64
            .R_OPERATOR     .MUL
            .R_OPERATOR     .SUB
            .R_REF_SET      ^/(.LOCAL_ACTOR + 1)/
            .R_STOP
        
          VM_ACTOR_SET_POS  .LOCAL_ACTOR
        
          ; Wait 1 Frames
          VM_INVOKE         b_wait_frames, _wait_frames, 0, .LOCAL_TMP1_WAIT_ARGS
        
        VM_LOOP .LOCAL_LOOP, 1$, 0
          

        ; Actor Hide
        VM_SET                  .LOCAL_ACTOR, .SCRIPT_ARG_1_ACTOR
        VM_ACTOR_SET_HIDDEN     .LOCAL_ACTOR, 1

        ; If Variable .B_AND Value
        VM_RPN
            .R_REF_IND  .SCRIPT_ARG_INDIRECT_0_VARIABLE
            .R_INT16    1
            .R_OPERATOR .B_AND
            .R_STOP
        VM_IF_CONST             .NE, .ARG0, 0, 2$, 1
        VM_JUMP                 3$
2$:
        ; If Variable .B_AND Value
        VM_RPN
            .R_REF_IND  .SCRIPT_ARG_INDIRECT_0_VARIABLE
            .R_INT16    2
            .R_OPERATOR .B_AND
            .R_STOP
        VM_IF_CONST             .NE, .ARG0, 0, 4$, 1
        VM_JUMP                 5$
4$:
        ; If Variable .B_AND Value
        VM_RPN
            .R_REF_IND  .SCRIPT_ARG_INDIRECT_0_VARIABLE
            .R_INT16    4
            .R_OPERATOR .B_AND
            .R_STOP
        VM_IF_CONST             .NE, .ARG0, 0, 6$, 1
        VM_JUMP                 7$
6$:
        ; If Variable .B_AND Value
        VM_RPN
            .R_REF_IND  .SCRIPT_ARG_INDIRECT_0_VARIABLE
            .R_INT16    8
            .R_OPERATOR .B_AND
            .R_STOP
        VM_IF_CONST             .NE, .ARG0, 0, 8$, 1
        VM_JUMP                 9$
8$:
        ; If Variable .B_AND Value
        VM_RPN
            .R_REF_IND  .SCRIPT_ARG_INDIRECT_0_VARIABLE
            .R_INT16    16
            .R_OPERATOR .B_AND
            .R_STOP
        VM_IF_CONST             .NE, .ARG0, 0, 10$, 1
        VM_JUMP                 11$
10$:
        ; Variable Add Flags
        VM_RPN
            .R_REF_IND  .SCRIPT_ARG_INDIRECT_0_VARIABLE
            .R_INT16    32
            .R_OPERATOR .B_OR
            .R_STOP
        VM_SET_INDIRECT         ^/(.SCRIPT_ARG_INDIRECT_0_VARIABLE - 1)/, .ARG0
        VM_POP                  1

11$:

9$:

7$:

5$:

3$:

        VM_RESERVE              -7
        VM_RET_FAR_N            2
