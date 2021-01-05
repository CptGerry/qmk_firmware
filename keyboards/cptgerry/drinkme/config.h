/* Copyright 2019 Spaceman
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once
#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x4347 // "CG"
#define PRODUCT_ID      0x444D // "2%"
#define DEVICE_VER      0x0001
#define MANUFACTURER    CptGerryxMrBingo
#define PRODUCT         Drink Me
#define DESCRIPTION     A Alice themed 4% Keyboard

/* key matrix size */
#define MATRIX_ROWS 1
#define MATRIX_COLS 4

/* Milk default pinout */
#define DIRECT_PINS { \
    {E6, D7, B1, B3}, \
}
#define UNUSED_PINS

#define RGB_DI_PIN C6
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 2
#define RGBLIGHT_HUE_STEP 10
#define RGBLIGHT_SAT_STEP 17
#define RGBLIGHT_VAL_STEP 17
