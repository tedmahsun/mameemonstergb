.module script_6

.include "vm.i"
.include "data/game_globals.i"

.area _CODE_255


___bank_script_6 = 255
.globl ___bank_script_6

_script_6::
        ; Input Script Attach
        VM_CONTEXT_PREPARE      4, ___bank_script_input_0, _script_input_0
        VM_INPUT_ATTACH         16, 4

        VM_RET_FAR
