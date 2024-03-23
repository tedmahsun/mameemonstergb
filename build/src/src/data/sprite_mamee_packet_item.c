#pragma bank 255
// SpriteSheet: mamee-packet-item

#include "gbs_types.h"
#include "data/sprite_mamee_packet_item_tileset.h"

BANKREF(sprite_mamee_packet_item)

#define SPRITE_1_STATE_DEFAULT 0
#define SPRITE_1_STATE_COLLECTED 8
#define SPRITE_1_STATE_A 0
#define SPRITE_1_STATE_E 0

const metasprite_t sprite_mamee_packet_item_metasprite_0[]  = {
    { 0, 8, 0, 1 }, { 0, -8, 2, 1 },
    {metasprite_end}
};

const metasprite_t sprite_mamee_packet_item_metasprite_1[]  = {
    { 0, 8, 4, 1 }, { 0, -8, 6, 1 },
    {metasprite_end}
};

const metasprite_t sprite_mamee_packet_item_metasprite_2[]  = {
    { 0, 8, 8, 1 }, { 0, -8, 10, 1 },
    {metasprite_end}
};

const metasprite_t sprite_mamee_packet_item_metasprite_3[]  = {
    { 0, 8, 12, 1 }, { 0, -8, 14, 1 },
    {metasprite_end}
};

const metasprite_t sprite_mamee_packet_item_metasprite_4[]  = {
    { 0, 8, 10, 33 }, { 0, -8, 8, 33 },
    {metasprite_end}
};

const metasprite_t sprite_mamee_packet_item_metasprite_5[]  = {
    { 0, 8, 6, 33 }, { 0, -8, 4, 33 },
    {metasprite_end}
};

const metasprite_t sprite_mamee_packet_item_metasprite_6[]  = {
    { 0, 8, 0, 0 }, { 0, -8, 2, 0 },
    {metasprite_end}
};

const metasprite_t sprite_mamee_packet_item_metasprite_7[]  = {
    { 0, 8, 16, 0 }, { 0, -8, 18, 0 },
    {metasprite_end}
};

const metasprite_t sprite_mamee_packet_item_metasprite_8[]  = {
    { 0, 8, 20, 0 }, { 0, -8, 22, 0 },
    {metasprite_end}
};

const metasprite_t sprite_mamee_packet_item_metasprite_9[]  = {
    { 0, 8, 24, 0 }, { 0, -8, 26, 0 },
    {metasprite_end}
};

const metasprite_t sprite_mamee_packet_item_metasprite_10[]  = {
    { 0, 8, 28, 0 }, { 0, -8, 30, 0 },
    {metasprite_end}
};

const metasprite_t * const sprite_mamee_packet_item_metasprites[] = {
    sprite_mamee_packet_item_metasprite_0,
    sprite_mamee_packet_item_metasprite_1,
    sprite_mamee_packet_item_metasprite_2,
    sprite_mamee_packet_item_metasprite_3,
    sprite_mamee_packet_item_metasprite_4,
    sprite_mamee_packet_item_metasprite_5,
    sprite_mamee_packet_item_metasprite_6,
    sprite_mamee_packet_item_metasprite_7,
    sprite_mamee_packet_item_metasprite_8,
    sprite_mamee_packet_item_metasprite_9,
    sprite_mamee_packet_item_metasprite_10,
    sprite_mamee_packet_item_metasprite_10
};

const struct animation_t sprite_mamee_packet_item_animations[] = {
    {
        .start = 0,
        .end = 5
    },
    {
        .start = 0,
        .end = 5
    },
    {
        .start = 0,
        .end = 5
    },
    {
        .start = 0,
        .end = 5
    },
    {
        .start = 0,
        .end = 5
    },
    {
        .start = 0,
        .end = 5
    },
    {
        .start = 0,
        .end = 5
    },
    {
        .start = 0,
        .end = 5
    },
    {
        .start = 6,
        .end = 11
    },
    {
        .start = 6,
        .end = 11
    },
    {
        .start = 6,
        .end = 11
    },
    {
        .start = 6,
        .end = 11
    },
    {
        .start = 6,
        .end = 11
    },
    {
        .start = 6,
        .end = 11
    },
    {
        .start = 6,
        .end = 11
    },
    {
        .start = 6,
        .end = 11
    }
};

const UWORD sprite_mamee_packet_item_animations_lookup[] = {
    SPRITE_1_STATE_DEFAULT,
    SPRITE_1_STATE_COLLECTED
};

const struct spritesheet_t sprite_mamee_packet_item = {
    .n_metasprites = 12,
    .emote_origin = {
        .x = 0,
        .y = -16
    },
    .metasprites = sprite_mamee_packet_item_metasprites,
    .animations = sprite_mamee_packet_item_animations,
    .animations_lookup = sprite_mamee_packet_item_animations_lookup,
    .bounds = {
        .left = 4,
        .bottom = 7,
        .right = 11,
        .top = -8
    },
    .tileset = TO_FAR_PTR_T(sprite_mamee_packet_item_tileset),
    .cgb_tileset = { NULL, NULL }
};
