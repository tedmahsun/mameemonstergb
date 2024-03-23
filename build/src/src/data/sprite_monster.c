#pragma bank 255
// SpriteSheet: Monster

#include "gbs_types.h"
#include "data/sprite_monster_tileset.h"

BANKREF(sprite_monster)

#define SPRITE_0_STATE_DEFAULT 0
#define SPRITE_0_STATE_COLLECTED 0
#define SPRITE_0_STATE_A 0
#define SPRITE_0_STATE_E 0

const metasprite_t sprite_monster_metasprite_0[]  = {
    { 0, -8, 20, 32 }, { -16, 0, 22, 32 }, { 16, 8, 24, 32 }, { -16, 0, 26, 32 }, { 16, 8, 28, 32 }, { -16, 0, 30, 32 }, { 16, 8, 32, 32 }, { -16, 0, 34, 32 },
    {metasprite_end}
};

const metasprite_t sprite_monster_metasprite_1[]  = {
    { 0, 16, 0, 0 }, { -16, 0, 2, 0 }, { 16, -8, 4, 0 }, { -16, 0, 6, 0 }, { 16, -8, 8, 0 }, { -16, 0, 10, 0 }, { 16, -8, 12, 0 }, { -16, 0, 14, 0 },
    {metasprite_end}
};

const metasprite_t sprite_monster_metasprite_2[]  = {
    { 0, 16, 0, 0 }, { -16, 0, 2, 0 }, { 16, -8, 4, 0 }, { -16, 0, 16, 0 }, { 16, -8, 8, 0 }, { -16, 0, 18, 0 }, { 16, -8, 12, 0 }, { -16, 0, 14, 0 },
    {metasprite_end}
};

const metasprite_t sprite_monster_metasprite_3[]  = {
    { 0, 16, 20, 0 }, { -16, 0, 22, 0 }, { 16, -8, 24, 0 }, { -16, 0, 26, 0 }, { 16, -8, 28, 0 }, { -16, 0, 30, 0 }, { 16, -8, 32, 0 }, { -16, 0, 34, 0 },
    {metasprite_end}
};

const metasprite_t sprite_monster_metasprite_4[]  = {
    { 0, -8, 0, 32 }, { -16, 0, 2, 32 }, { 16, 8, 4, 32 }, { -16, 0, 6, 32 }, { 16, 8, 8, 32 }, { -16, 0, 10, 32 }, { 16, 8, 12, 32 }, { -16, 0, 14, 32 },
    {metasprite_end}
};

const metasprite_t sprite_monster_metasprite_5[]  = {
    { 0, -8, 0, 32 }, { -16, 0, 2, 32 }, { 16, 8, 4, 32 }, { -16, 0, 16, 32 }, { 16, 8, 8, 32 }, { -16, 0, 18, 32 }, { 16, 8, 12, 32 }, { -16, 0, 14, 32 },
    {metasprite_end}
};

const metasprite_t sprite_monster_metasprite_6[]  = {
    {metasprite_end}
};

const metasprite_t sprite_monster_metasprite_7[]  = {
    { 0, 16, 36, 0 }, { -16, 0, 2, 0 }, { 16, -8, 38, 0 }, { -16, 0, 6, 0 }, { 16, -8, 40, 0 }, { -16, 0, 10, 0 }, { 16, -8, 42, 0 }, { -16, 0, 14, 0 },
    {metasprite_end}
};

const metasprite_t sprite_monster_metasprite_8[]  = {
    { 0, 16, 44, 0 }, { -16, 0, 22, 0 }, { 16, -8, 46, 0 }, { -16, 0, 48, 0 }, { 16, -8, 50, 0 }, { -16, 0, 30, 0 }, { 16, -8, 52, 0 }, { -16, 0, 34, 0 },
    {metasprite_end}
};

const metasprite_t sprite_monster_metasprite_9[]  = {
    { 0, -8, 36, 32 }, { -16, 0, 2, 32 }, { 16, 8, 38, 32 }, { -16, 0, 6, 32 }, { 16, 8, 40, 32 }, { -16, 0, 10, 32 }, { 16, 8, 42, 32 }, { -16, 0, 14, 32 },
    {metasprite_end}
};

const metasprite_t sprite_monster_metasprite_10[]  = {
    { 0, -8, 44, 32 }, { -16, 0, 22, 32 }, { 16, 8, 46, 32 }, { -16, 0, 48, 32 }, { 16, 8, 50, 32 }, { -16, 0, 30, 32 }, { 16, 8, 52, 32 }, { -16, 0, 34, 32 },
    {metasprite_end}
};

const metasprite_t * const sprite_monster_metasprites[] = {
    sprite_monster_metasprite_0,
    sprite_monster_metasprite_1,
    sprite_monster_metasprite_1,
    sprite_monster_metasprite_1,
    sprite_monster_metasprite_2,
    sprite_monster_metasprite_1,
    sprite_monster_metasprite_2,
    sprite_monster_metasprite_3,
    sprite_monster_metasprite_4,
    sprite_monster_metasprite_4,
    sprite_monster_metasprite_4,
    sprite_monster_metasprite_5,
    sprite_monster_metasprite_4,
    sprite_monster_metasprite_5,
    sprite_monster_metasprite_6,
    sprite_monster_metasprite_7,
    sprite_monster_metasprite_8,
    sprite_monster_metasprite_9,
    sprite_monster_metasprite_10
};

const struct animation_t sprite_monster_animations[] = {
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 1,
        .end = 6
    },
    {
        .start = 7,
        .end = 7
    },
    {
        .start = 8,
        .end = 13
    },
    {
        .start = 14,
        .end = 14
    },
    {
        .start = 15,
        .end = 16
    },
    {
        .start = 14,
        .end = 14
    },
    {
        .start = 17,
        .end = 18
    }
};

const UWORD sprite_monster_animations_lookup[] = {
    SPRITE_0_STATE_DEFAULT
};

const struct spritesheet_t sprite_monster = {
    .n_metasprites = 19,
    .emote_origin = {
        .x = 0,
        .y = -32
    },
    .metasprites = sprite_monster_metasprites,
    .animations = sprite_monster_animations,
    .animations_lookup = sprite_monster_animations_lookup,
    .bounds = {
        .left = 0,
        .bottom = 7,
        .right = 15,
        .top = -24
    },
    .tileset = TO_FAR_PTR_T(sprite_monster_tileset),
    .cgb_tileset = { NULL, NULL }
};
