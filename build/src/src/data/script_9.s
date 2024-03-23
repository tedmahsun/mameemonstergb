.module script_9

.include "vm.i"
.include "data/game_globals.i"

.area _CODE_255


___bank_script_9 = 255
.globl ___bank_script_9

_script_9::
        ; Input Script Attach
        VM_CONTEXT_PREPARE      1, ___bank_script_input_1, _script_input_1
        VM_INPUT_ATTACH         128, ^/(1 | .OVERRIDE_DEFAULT)/

        VM_RET_FAR
