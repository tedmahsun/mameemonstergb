#pragma bank 255

// Tileset: sprite_monster_tileset

#include "gbs_types.h"

BANKREF(sprite_monster_tileset)

const struct tileset_t sprite_monster_tileset = {
    .n_tiles = 54,
    .tiles = {
        0xA0, 0xE0, 0x50, 0xF0, 0x70, 0xF0, 0xD0, 0xF0, 0xA0, 0xE0, 0xC0, 0xC0, 0x80, 0x80, 0x80, 0x80,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x40, 0xC0, 0x40, 0xC0, 0x80, 0x80, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
        0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0,
        0x00, 0xFF, 0x01, 0xFF, 0x41, 0xFF, 0x80, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x01, 0xFF,
        0x83, 0xFF, 0x06, 0xFE, 0x1C, 0xFC, 0xFF, 0xFF, 0x78, 0x7F, 0x60, 0x7F, 0x40, 0x7F, 0x3F, 0x3F,
        0xEE, 0xEE, 0x11, 0xFF, 0x02, 0xFE, 0xE2, 0xFE, 0xF7, 0x1D, 0xFF, 0x08, 0xFF, 0x39, 0xFF, 0x3F,
        0xFF, 0x1F, 0xFF, 0xF9, 0x3F, 0xFD, 0x3F, 0xFF, 0x1F, 0xFF, 0x01, 0xFF, 0x85, 0xFF, 0x78, 0xFF,
        0x3E, 0xEB, 0x5E, 0xF7, 0x9C, 0xEF, 0x38, 0xFF, 0x71, 0xFF, 0x81, 0xFF, 0x01, 0xFF, 0x01, 0xFF,
        0x00, 0xFF, 0x10, 0xFF, 0x08, 0xFF, 0xE7, 0xFF, 0x04, 0xFC, 0x04, 0xFC, 0x04, 0xFC, 0xF8, 0xF8,
        0x00, 0x00, 0x03, 0x03, 0x04, 0x07, 0x08, 0x0F, 0x11, 0x1F, 0x23, 0x3E, 0x43, 0x7E, 0xC3, 0xFE,
        0xC1, 0xFF, 0x44, 0xFF, 0x4E, 0xFB, 0x1E, 0xF3, 0x0E, 0xFB, 0x67, 0xDF, 0xE1, 0xBF, 0xFC, 0xD7,
        0x41, 0x7F, 0x42, 0x7F, 0x40, 0x7F, 0x60, 0x7F, 0x38, 0x3F, 0x1F, 0x1F, 0x0F, 0x0F, 0x08, 0x0F,
        0x04, 0x07, 0x02, 0x03, 0x02, 0x03, 0x04, 0x07, 0x04, 0x07, 0x04, 0x07, 0x04, 0x07, 0x03, 0x03,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x07, 0x07, 0x08, 0x0F, 0x10, 0x1F, 0x10, 0x1F, 0x20, 0x3F, 0x20, 0x3F, 0x43, 0x7F, 0x44, 0x7F,
        0xEE, 0xEE, 0x11, 0xFF, 0x02, 0xFE, 0xE2, 0xFE, 0x15, 0xFF, 0x08, 0xFF, 0x08, 0xFF, 0x0E, 0xFF,
        0x1F, 0xFF, 0xFF, 0xF9, 0x3F, 0xFD, 0x3F, 0xFF, 0x1F, 0xFF, 0x01, 0xFF, 0x85, 0xFF, 0x78, 0xFF,
        0x00, 0x00, 0x03, 0x03, 0x04, 0x07, 0x08, 0x0F, 0x11, 0x1F, 0x22, 0x3F, 0x42, 0x7F, 0xC2, 0xFF,
        0xC1, 0xFF, 0x44, 0xFF, 0x4E, 0xFB, 0x1E, 0xF3, 0x0E, 0xFB, 0x67, 0xDF, 0xE1, 0xBF, 0xFC, 0xD7,
        0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80,
        0x80, 0x80, 0x00, 0x00, 0xC0, 0x40, 0xC0, 0x40, 0xC0, 0xC0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00,
        0x3D, 0xFF, 0x01, 0xFF, 0x20, 0xFF, 0x40, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x81, 0xFF,
        0x01, 0xFF, 0x73, 0xFF, 0x8C, 0xFF, 0x08, 0xFF, 0x08, 0xFF, 0x11, 0xFF, 0x22, 0xFE, 0xDC, 0xDC,
        0xEC, 0xEC, 0x52, 0x76, 0x89, 0xFF, 0x01, 0xFF, 0x31, 0xFF, 0x7B, 0xCF, 0xFF, 0x84, 0xFF, 0x8D,
        0xFF, 0x8F, 0x7F, 0xCF, 0x3F, 0xFE, 0x8F, 0xFF, 0x8F, 0xFF, 0x87, 0xFF, 0x81, 0xFF, 0xC2, 0xFE,
        0x7E, 0xEB, 0x9F, 0xF5, 0x2F, 0xFB, 0x4E, 0xF7, 0x1C, 0xEF, 0x78, 0xFF, 0xC0, 0xFF, 0x80, 0xFF,
        0x00, 0xFF, 0x00, 0xFF, 0x80, 0xFF, 0x41, 0x7F, 0x20, 0x3F, 0x10, 0x1F, 0x08, 0x0F, 0x07, 0x07,
        0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x02, 0x03, 0x04, 0x07, 0x08, 0x0F, 0x10, 0x1F, 0x20, 0x3F,
        0x60, 0x7F, 0xE0, 0xFF, 0x21, 0xFF, 0x23, 0xFE, 0x07, 0xFC, 0x03, 0xFE, 0x31, 0xEF, 0xF0, 0xDF,
        0x22, 0x3F, 0x20, 0x3F, 0x21, 0x3F, 0x20, 0x3F, 0x30, 0x3F, 0x1C, 0x1F, 0x0F, 0x0F, 0x07, 0x07,
        0x02, 0x03, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x03, 0x03, 0x04, 0x07, 0x08, 0x0F, 0x08, 0x0F, 0x10, 0x1F, 0x10, 0x1F, 0x21, 0x3F,
        0xA0, 0xE0, 0x50, 0xF0, 0x70, 0xF0, 0xD0, 0xF0, 0xA0, 0xE0, 0xC0, 0xC0, 0x80, 0x80, 0x80, 0x80,
        0x80, 0x80, 0x00, 0x00, 0x80, 0x80, 0x60, 0xE0, 0x90, 0xF0, 0x10, 0xF0, 0x20, 0xE0, 0xC0, 0xC0,
        0x00, 0xFF, 0x01, 0xFF, 0x41, 0xFF, 0x80, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x01, 0xFF,
        0x83, 0xFF, 0x07, 0xFF, 0x1E, 0xFF, 0x7C, 0xFF, 0xF8, 0xFF, 0x10, 0x1F, 0x08, 0x0F, 0x07, 0x07,
        0x3E, 0xEB, 0x5E, 0xF7, 0x9C, 0xEF, 0x38, 0xFF, 0x71, 0xFF, 0x81, 0xFF, 0x01, 0xFF, 0x01, 0xFF,
        0x00, 0xFF, 0x80, 0xFF, 0x10, 0xFF, 0x28, 0xEF, 0xA7, 0xE7, 0x10, 0xF0, 0x10, 0xF0, 0xE0, 0xE0,
        0x41, 0x7F, 0x42, 0x7F, 0x40, 0x7F, 0x60, 0x7F, 0x38, 0x3F, 0x1F, 0x1F, 0x0F, 0x0F, 0x08, 0x0F,
        0x06, 0x07, 0x05, 0x07, 0x08, 0x0F, 0x08, 0x0F, 0x09, 0x0F, 0x08, 0x0F, 0x04, 0x07, 0x03, 0x03,
        0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x3D, 0xFF, 0x01, 0xFF, 0x20, 0xFF, 0x40, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x81, 0xFF,
        0x01, 0xFF, 0x72, 0xFE, 0x8C, 0xFC, 0x08, 0xF8, 0x08, 0xF8, 0x10, 0xF0, 0x20, 0xE0, 0xC0, 0xC0,
        0x22, 0x22, 0x55, 0x77, 0x89, 0xFF, 0x01, 0xFF, 0x31, 0xFF, 0x7B, 0xCF, 0xFF, 0x84, 0xFF, 0x8D,
        0xFF, 0x8F, 0x7F, 0xCF, 0x3F, 0xFE, 0x8F, 0xFF, 0x8F, 0xFF, 0x87, 0xFF, 0x81, 0xFF, 0xC2, 0xFE,
        0x7E, 0xEB, 0x9F, 0xF5, 0x2F, 0xFB, 0x4E, 0xF7, 0x1C, 0xEF, 0x78, 0xFF, 0xC0, 0xFF, 0x80, 0xFF,
        0x00, 0xFF, 0x00, 0xFF, 0x80, 0xFF, 0xC1, 0xFF, 0xE0, 0xFF, 0xF0, 0xFF, 0xF8, 0xFF, 0x67, 0x67,
        0x22, 0x3F, 0x20, 0x3F, 0x21, 0x3F, 0x20, 0x3F, 0x30, 0x3F, 0x1C, 0x1F, 0x0F, 0x0F, 0x07, 0x07,
        0x02, 0x03, 0x01, 0x01, 0x03, 0x03, 0x03, 0x03, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00
    }
};