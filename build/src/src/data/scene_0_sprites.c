#pragma bank 255

// Scene: Pause Menu
// Sprites

#include "gbs_types.h"
#include "data/sprite_placeholder_sprite.h"

BANKREF(scene_0_sprites)

const far_ptr_t scene_0_sprites[] = {
    TO_FAR_PTR_T(sprite_placeholder_sprite)
};
