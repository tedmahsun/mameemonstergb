#pragma bank 255

// Scene: Pause Menu
// Actors

#include "gbs_types.h"
#include "data/sprite_placeholder_sprite.h"

BANKREF(scene_0_actors)

const struct actor_t scene_0_actors[] = {
    {
        // SceneControl,
        .pos = {
            .x = 136 * 16,
            .y = 128 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 7,
            .right = 15,
            .top = -8
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(sprite_placeholder_sprite),
        .move_speed = 16,
        .anim_tick = 15,
        .pinned = TRUE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_NONE,
        .collision_enabled = FALSE,
        .reserve_tiles = 0
    }
};
