#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x0060
#define DEVICE_VER      0x0001
#define MANUFACTURER    cptgerry
#define PRODUCT         CG60
#define DESCRIPTION     60% Keyboard

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 13

/* key matrix pins */
#define MATRIX_ROW_PINS { B1, F7, F6, D2, D3 }
#define MATRIX_COL_PINS { F4, F5, B5, B4, E6, D7, C6, D4, D0, D1, B3, B2, B6 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW


#define DEBOUNCE 5