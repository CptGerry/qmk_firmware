#pragma once
#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x0025
#define DEVICE_VER      0x0001
#define MANUFACTURER    cptgerry
#define PRODUCT         Zesty25
#define DESCRIPTION     5x5 Macropad

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 5

/* key matrix pins */
#define MATRIX_ROW_PINS { F4, F5, F6, F7, B1 }
#define MATRIX_COL_PINS { B3, B2, D1, D0, D4 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW


/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5


/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#ifdef RGBLIGHT_ENABLE
#define RGB_DI_PIN D7
#define RGBLED_NUM 3
#endif