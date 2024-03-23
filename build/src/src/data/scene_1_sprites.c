#pragma bank 255

// Scene: Stage 1
// Sprites

#include "gbs_types.h"
#include "data/sprite_mamee_packet_item.h"
#include "data/sprite_mamee_letters.h"

BANKREF(scene_1_sprites)

const far_ptr_t scene_1_sprites[] = {
    TO_FAR_PTR_T(sprite_mamee_packet_item),
    TO_FAR_PTR_T(sprite_mamee_letters)
};
