.module script_4

.include "vm.i"
.include "data/game_globals.i"

.globl _text_ff_joypad, _text_draw_speed, _text_out_speed, _text_in_speed

.area _CODE_255


___bank_script_4 = 255
.globl ___bank_script_4

_script_4::
        ; Text Set Animation Speed
        VM_SET_CONST_INT8       _text_ff_joypad, 0
        VM_SET_CONST_INT8       _text_draw_speed, 0
        VM_SET_CONST_INT8       _text_out_speed, -3
        VM_SET_CONST_INT8       _text_in_speed, -3

        VM_OVERLAY_SHOW 0, 16, .UI_COLOR_WHITE, 0

        VM_RET_FAR
