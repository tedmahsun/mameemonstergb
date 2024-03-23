#pragma bank 255

// Background: options-screen

#include "gbs_types.h"
#include "data/bg_options_screen_tileset.h"
#include "data/bg_options_screen_tilemap.h"

BANKREF(bg_options_screen)

const struct background_t bg_options_screen = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_options_screen_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_options_screen_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
