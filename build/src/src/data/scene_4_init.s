.module scene_4_init

.include "vm.i"
.include "data/game_globals.i"

.globl b_wait_frames, _wait_frames, _fade_frames_per_step

.area _CODE_255

.LOCAL_TMP0_WAIT_ARGS = -1
.LOCAL_TMP1_WAIT_ARGS = -1

___bank_scene_4_init = 255
.globl ___bank_scene_4_init

_scene_4_init::
        VM_LOCK

        VM_RESERVE              1

        ; Wait N Frames
        VM_SET_CONST            .LOCAL_TMP0_WAIT_ARGS, 1
        VM_INVOKE               b_wait_frames, _wait_frames, 0, .LOCAL_TMP0_WAIT_ARGS

        ; Fade In
        VM_SET_CONST_INT8       _fade_frames_per_step, 1
        VM_FADE_IN              1

        ; Wait N Frames
        VM_SET_CONST            .LOCAL_TMP1_WAIT_ARGS, 120
        VM_INVOKE               b_wait_frames, _wait_frames, 0, .LOCAL_TMP1_WAIT_ARGS

        ; Call Script: GAME - Init
        VM_CALL_FAR             ___bank_script_2, _script_2

        ; Input Script Attach
        VM_CONTEXT_PREPARE      1, ___bank_script_input_2, _script_input_2
        VM_INPUT_ATTACH         176, ^/(1 | .OVERRIDE_DEFAULT)/

        ; Stop Script
        VM_STOP
