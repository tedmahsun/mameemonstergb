#pragma bank 255

// Scene: Stage 1
// Actors

#include "gbs_types.h"
#include "data/sprite_mamee_packet_item.h"
#include "data/actor_0_interact.h"
#include "data/sprite_mamee_packet_item.h"
#include "data/actor_1_interact.h"
#include "data/sprite_mamee_packet_item.h"
#include "data/actor_2_interact.h"
#include "data/sprite_mamee_packet_item.h"
#include "data/actor_3_interact.h"
#include "data/sprite_mamee_packet_item.h"
#include "data/actor_4_interact.h"
#include "data/sprite_mamee_packet_item.h"
#include "data/actor_5_interact.h"
#include "data/sprite_mamee_packet_item.h"
#include "data/actor_7_interact.h"
#include "data/sprite_mamee_packet_item.h"
#include "data/actor_8_interact.h"
#include "data/sprite_mamee_packet_item.h"
#include "data/actor_10_interact.h"
#include "data/sprite_mamee_letters.h"
#include "data/actor_6_interact.h"
#include "data/sprite_mamee_letters.h"
#include "data/actor_12_interact.h"
#include "data/sprite_mamee_letters.h"
#include "data/actor_9_interact.h"
#include "data/sprite_mamee_letters.h"
#include "data/actor_13_interact.h"
#include "data/sprite_mamee_letters.h"
#include "data/actor_14_interact.h"
#include "data/sprite_mamee_packet_item.h"
#include "data/actor_15_interact.h"

BANKREF(scene_1_actors)

const struct actor_t scene_1_actors[] = {
    {
        // MameePacketItem,
        .pos = {
            .x = 152 * 16,
            .y = 360 * 16
        },
        .bounds = {
            .left = 4,
            .bottom = 7,
            .right = 11,
            .top = -8
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(sprite_mamee_packet_item),
        .move_speed = 64,
        .anim_tick = 15,
        .pinned = FALSE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script = TO_FAR_PTR_T(actor_0_interact),
        .reserve_tiles = 0
    },
    {
        // MameePacketItem,
        .pos = {
            .x = 248 * 16,
            .y = 368 * 16
        },
        .bounds = {
            .left = 4,
            .bottom = 7,
            .right = 11,
            .top = -8
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(sprite_mamee_packet_item),
        .move_speed = 64,
        .anim_tick = 15,
        .pinned = FALSE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script = TO_FAR_PTR_T(actor_1_interact),
        .reserve_tiles = 0
    },
    {
        // MameePacketItem,
        .pos = {
            .x = 200 * 16,
            .y = 208 * 16
        },
        .bounds = {
            .left = 4,
            .bottom = 7,
            .right = 11,
            .top = -8
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(sprite_mamee_packet_item),
        .move_speed = 64,
        .anim_tick = 15,
        .pinned = FALSE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script = TO_FAR_PTR_T(actor_2_interact),
        .reserve_tiles = 0
    },
    {
        // MameePacketItem,
        .pos = {
            .x = 136 * 16,
            .y = 248 * 16
        },
        .bounds = {
            .left = 4,
            .bottom = 7,
            .right = 11,
            .top = -8
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(sprite_mamee_packet_item),
        .move_speed = 64,
        .anim_tick = 15,
        .pinned = FALSE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script = TO_FAR_PTR_T(actor_3_interact),
        .reserve_tiles = 0
    },
    {
        // MameePacketItem,
        .pos = {
            .x = 328 * 16,
            .y = 368 * 16
        },
        .bounds = {
            .left = 4,
            .bottom = 7,
            .right = 11,
            .top = -8
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(sprite_mamee_packet_item),
        .move_speed = 64,
        .anim_tick = 15,
        .pinned = FALSE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script = TO_FAR_PTR_T(actor_4_interact),
        .reserve_tiles = 0
    },
    {
        // MameePacketItem,
        .pos = {
            .x = 640 * 16,
            .y = 160 * 16
        },
        .bounds = {
            .left = 4,
            .bottom = 7,
            .right = 11,
            .top = -8
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(sprite_mamee_packet_item),
        .move_speed = 64,
        .anim_tick = 15,
        .pinned = FALSE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script = TO_FAR_PTR_T(actor_5_interact),
        .reserve_tiles = 0
    },
    {
        // MameePacketItem,
        .pos = {
            .x = 336 * 16,
            .y = 184 * 16
        },
        .bounds = {
            .left = 4,
            .bottom = 7,
            .right = 11,
            .top = -8
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(sprite_mamee_packet_item),
        .move_speed = 64,
        .anim_tick = 15,
        .pinned = FALSE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script = TO_FAR_PTR_T(actor_7_interact),
        .reserve_tiles = 0
    },
    {
        // MameePacketItem,
        .pos = {
            .x = 72 * 16,
            .y = 216 * 16
        },
        .bounds = {
            .left = 4,
            .bottom = 7,
            .right = 11,
            .top = -8
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(sprite_mamee_packet_item),
        .move_speed = 64,
        .anim_tick = 15,
        .pinned = FALSE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script = TO_FAR_PTR_T(actor_8_interact),
        .reserve_tiles = 0
    },
    {
        // MameePacketItem,
        .pos = {
            .x = 680 * 16,
            .y = 368 * 16
        },
        .bounds = {
            .left = 4,
            .bottom = 7,
            .right = 11,
            .top = -8
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(sprite_mamee_packet_item),
        .move_speed = 64,
        .anim_tick = 15,
        .pinned = FALSE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script = TO_FAR_PTR_T(actor_10_interact),
        .reserve_tiles = 0
    },
    {
        // M1-Letter,
        .pos = {
            .x = 392 * 16,
            .y = 200 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 7,
            .right = 15,
            .top = -8
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(sprite_mamee_letters),
        .move_speed = 64,
        .anim_tick = 15,
        .pinned = FALSE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script = TO_FAR_PTR_T(actor_6_interact),
        .reserve_tiles = 0
    },
    {
        // A-Letter,
        .pos = {
            .x = 272 * 16,
            .y = 224 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 7,
            .right = 15,
            .top = -8
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(sprite_mamee_letters),
        .move_speed = 64,
        .anim_tick = 15,
        .pinned = FALSE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script = TO_FAR_PTR_T(actor_12_interact),
        .reserve_tiles = 0
    },
    {
        // M2-Letter,
        .pos = {
            .x = 584 * 16,
            .y = 192 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 7,
            .right = 15,
            .top = -8
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(sprite_mamee_letters),
        .move_speed = 64,
        .anim_tick = 15,
        .pinned = FALSE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script = TO_FAR_PTR_T(actor_9_interact),
        .reserve_tiles = 0
    },
    {
        // E1-Letter,
        .pos = {
            .x = 704 * 16,
            .y = 184 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 7,
            .right = 15,
            .top = -8
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(sprite_mamee_letters),
        .move_speed = 64,
        .anim_tick = 15,
        .pinned = FALSE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script = TO_FAR_PTR_T(actor_13_interact),
        .reserve_tiles = 0
    },
    {
        // E2-Letter,
        .pos = {
            .x = 8 * 16,
            .y = 256 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 7,
            .right = 15,
            .top = -8
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(sprite_mamee_letters),
        .move_speed = 64,
        .anim_tick = 15,
        .pinned = FALSE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script = TO_FAR_PTR_T(actor_14_interact),
        .reserve_tiles = 0
    },
    {
        // MameePacketItem,
        .pos = {
            .x = 488 * 16,
            .y = 264 * 16
        },
        .bounds = {
            .left = 4,
            .bottom = 7,
            .right = 11,
            .top = -8
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(sprite_mamee_packet_item),
        .move_speed = 64,
        .anim_tick = 15,
        .pinned = FALSE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script = TO_FAR_PTR_T(actor_15_interact),
        .reserve_tiles = 0
    }
};
