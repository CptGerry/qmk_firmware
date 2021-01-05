#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x4374/* CG */
#define DEVICE_VER      0x0001
#define MANUFACTURER    cptgerry
#define PRODUCT         osuner
#define DESCRIPTION     Keyboard

/* key matrix size */
#define MATRIX_ROWS 2
#define MATRIX_COLS 5

/* key matrix pins */
#define MATRIX_ROW_PINS { C6, D7 }
#define MATRIX_COL_PINS { F5, F4, F6, F7, B1 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

#ifdef RGBLIGHT_ENABLE
#define RGB_DI_PIN B5
#define RGBLED_NUM 1
#endif

#endif
