#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
      [0] = LAYOUT(
          KC_Z, KC_X, KC_C, KC_V
      ),
      [1] = LAYOUT(
          _______, _______, _______, _______
      ),
      [2] = LAYOUT(
          _______, _______, _______,_______
      ),
      [3] = LAYOUT(
          _______, _______, _______, _______
      )
};
