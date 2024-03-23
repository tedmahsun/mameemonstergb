#pragma bank 255

// Background: Title Screen

#include "gbs_types.h"
#include "data/bg_title_screen_tileset.h"
#include "data/bg_title_screen_tilemap.h"

BANKREF(bg_title_screen)

const struct background_t bg_title_screen = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_title_screen_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_title_screen_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
