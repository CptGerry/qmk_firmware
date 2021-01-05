#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	
	[0] = LAYOUT_macro(
	KC_P7, KC_P8, KC_P9, 
	KC_P4, KC_P5, KC_P6, KC_K, 
	KC_P1, KC_P2, KC_P3
	),
	[1] = LAYOUT_macro(
	KC_P7, KC_P8, KC_P9, 
	KC_P4, KC_P5, KC_P6, KC_K, 
	KC_P1, KC_P2, KC_P3
	),
	[2] = LAYOUT_macro(
	KC_P7, KC_P8, KC_P9, 
	KC_P4, KC_P5, KC_P6, KC_K, 
	KC_P1, KC_P2, KC_P3
	),
	[3] = LAYOUT_macro(
	KC_P7, KC_P8, KC_P9, 
	KC_P4, KC_P5, KC_P6, KC_K, 
	KC_P1, KC_P2, KC_P3
	),
};