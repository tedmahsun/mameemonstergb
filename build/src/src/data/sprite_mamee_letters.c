#pragma bank 255
// SpriteSheet: mamee-letters

#include "gbs_types.h"
#include "data/sprite_mamee_letters_tileset.h"

BANKREF(sprite_mamee_letters)

#define SPRITE_2_STATE_DEFAULT 0
#define SPRITE_2_STATE_COLLECTED 0
#define SPRITE_2_STATE_A 8
#define SPRITE_2_STATE_E 16

const metasprite_t sprite_mamee_letters_metasprite_0[]  = {
    { 0, 8, 0, 0 }, { 0, -8, 2, 0 },
    {metasprite_end}
};

const metasprite_t sprite_mamee_letters_metasprite_1[]  = {
    { 0, 8, 4, 0 }, { 0, -8, 6, 0 },
    {metasprite_end}
};

const metasprite_t sprite_mamee_letters_metasprite_2[]  = {
    { 0, 8, 8, 0 }, { 0, -8, 10, 0 },
    {metasprite_end}
};

const metasprite_t sprite_mamee_letters_metasprite_3[]  = {
    { 0, 8, 12, 0 }, { 0, -8, 14, 0 },
    {metasprite_end}
};

const metasprite_t sprite_mamee_letters_metasprite_4[]  = {
    { 0, 8, 16, 0 }, { 0, -8, 18, 0 },
    {metasprite_end}
};

const metasprite_t sprite_mamee_letters_metasprite_5[]  = {
    { 0, 8, 20, 0 }, { 0, -8, 22, 0 },
    {metasprite_end}
};

const metasprite_t * const sprite_mamee_letters_metasprites[] = {
    sprite_mamee_letters_metasprite_0,
    sprite_mamee_letters_metasprite_1,
    sprite_mamee_letters_metasprite_2,
    sprite_mamee_letters_metasprite_3,
    sprite_mamee_letters_metasprite_4,
    sprite_mamee_letters_metasprite_5
};

const struct animation_t sprite_mamee_letters_animations[] = {
    {
        .start = 0,
        .end = 1
    },
    {
        .start = 0,
        .end = 1
    },
    {
        .start = 0,
        .end = 1
    },
    {
        .start = 0,
        .end = 1
    },
    {
        .start = 0,
        .end = 1
    },
    {
        .start = 0,
        .end = 1
    },
    {
        .start = 0,
        .end = 1
    },
    {
        .start = 0,
        .end = 1
    },
    {
        .start = 2,
        .end = 3
    },
    {
        .start = 2,
        .end = 3
    },
    {
        .start = 2,
        .end = 3
    },
    {
        .start = 2,
        .end = 3
    },
    {
        .start = 2,
        .end = 3
    },
    {
        .start = 2,
        .end = 3
    },
    {
        .start = 2,
        .end = 3
    },
    {
        .start = 2,
        .end = 3
    },
    {
        .start = 4,
        .end = 5
    },
    {
        .start = 4,
        .end = 5
    },
    {
        .start = 4,
        .end = 5
    },
    {
        .start = 4,
        .end = 5
    },
    {
        .start = 4,
        .end = 5
    },
    {
        .start = 4,
        .end = 5
    },
    {
        .start = 4,
        .end = 5
    },
    {
        .start = 4,
        .end = 5
    }
};

const UWORD sprite_mamee_letters_animations_lookup[] = {
    SPRITE_2_STATE_DEFAULT,
    SPRITE_2_STATE_COLLECTED,
    SPRITE_2_STATE_A,
    SPRITE_2_STATE_E
};

const struct spritesheet_t sprite_mamee_letters = {
    .n_metasprites = 6,
    .emote_origin = {
        .x = 0,
        .y = -16
    },
    .metasprites = sprite_mamee_letters_metasprites,
    .animations = sprite_mamee_letters_animations,
    .animations_lookup = sprite_mamee_letters_animations_lookup,
    .bounds = {
        .left = 0,
        .bottom = 7,
        .right = 15,
        .top = -8
    },
    .tileset = TO_FAR_PTR_T(sprite_mamee_letters_tileset),
    .cgb_tileset = { NULL, NULL }
};
