#pragma bank 255
// SpriteSheet: placeholder-sprite

#include "gbs_types.h"
#include "data/sprite_placeholder_sprite_tileset.h"

BANKREF(sprite_placeholder_sprite)

#define SPRITE_3_STATE_DEFAULT 0
#define SPRITE_3_STATE_COLLECTED 0
#define SPRITE_3_STATE_A 0
#define SPRITE_3_STATE_E 0

const metasprite_t sprite_placeholder_sprite_metasprite_0[]  = {
    {metasprite_end}
};

const metasprite_t * const sprite_placeholder_sprite_metasprites[] = {
    sprite_placeholder_sprite_metasprite_0
};

const struct animation_t sprite_placeholder_sprite_animations[] = {
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 0,
        .end = 0
    }
};

const UWORD sprite_placeholder_sprite_animations_lookup[] = {
    SPRITE_3_STATE_DEFAULT
};

const struct spritesheet_t sprite_placeholder_sprite = {
    .n_metasprites = 1,
    .emote_origin = {
        .x = 0,
        .y = -16
    },
    .metasprites = sprite_placeholder_sprite_metasprites,
    .animations = sprite_placeholder_sprite_animations,
    .animations_lookup = sprite_placeholder_sprite_animations_lookup,
    .bounds = {
        .left = 0,
        .bottom = 7,
        .right = 15,
        .top = -8
    },
    .tileset = TO_FAR_PTR_T(sprite_placeholder_sprite_tileset),
    .cgb_tileset = { NULL, NULL }
};
