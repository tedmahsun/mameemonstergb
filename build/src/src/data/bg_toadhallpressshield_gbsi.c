#pragma bank 255

// Background: ToadhallPressShield-GBsize

#include "gbs_types.h"
#include "data/bg_toadhallpressshield_gbsi_tileset.h"
#include "data/bg_title_screen_tilemap.h"

BANKREF(bg_toadhallpressshield_gbsi)

const struct background_t bg_toadhallpressshield_gbsi = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_toadhallpressshield_gbsi_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_title_screen_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
