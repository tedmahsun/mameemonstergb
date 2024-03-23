.module script_3

.include "vm.i"
.include "data/game_globals.i"

.area _CODE_255


___bank_script_3 = 255
.globl ___bank_script_3

_script_3::
        ; Variable Set To Value
        VM_SET_CONST            VAR_MONSTERLIVES_0, 5

        ; Variable Set To False
        VM_SET_CONST            VAR_MAMEEPACKETSCOLLECTED, 0

        VM_RET_FAR
