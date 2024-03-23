#pragma bank 255

// Background: Stage 1

#include "gbs_types.h"
#include "data/bg_stage_1_tileset.h"
#include "data/bg_stage_1_tilemap.h"

BANKREF(bg_stage_1)

const struct background_t bg_stage_1 = {
    .width = 100,
    .height = 54,
    .tileset = TO_FAR_PTR_T(bg_stage_1_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_stage_1_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
