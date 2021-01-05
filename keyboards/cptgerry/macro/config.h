#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x0101
#define DEVICE_VER      0x0001
#define MANUFACTURER    cptgerry
#define PRODUCT         macro
#define DESCRIPTION     macro
/* key matrix size */
#define MATRIX_ROWS 3
#define MATRIX_COLS 4

/* key matrix pins */
#define MATRIX_ROW_PINS { D0, C6, E6 }
#define MATRIX_COL_PINS { F5, F7, B2, B5 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5
