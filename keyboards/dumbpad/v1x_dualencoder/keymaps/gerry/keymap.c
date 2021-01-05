/* Copyright 2020 imchipwood
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
#include QMK_KEYBOARD_H

#define _BASE 0
#define _SUB  1
#define _NUM  2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
        /*
          BASE LAYER
     /-----------------------------------------`
     |    W    |     E    |    I     | TT(_SUB)|
     |---------|----------|----------|---------|
     |  Ctrl+S |Sft+Ctrl+S|  Crtrl+D | Ctrl+R  |
     |---------|----------|--------- |---------|
     |    X    |    C     |    V     |    B    |
     |---------|----------|----------|---------|
     |    Z    |  Ctrl+Z  |Alt+Ctrl+Z|         |
     \-----------------------------------------'
    */
    [_BASE] = LAYOUT(
           KC_W,     KC_E,     KC_I,TO(1),
        C(KC_S),C(S(KC_S)),  C(KC_D),    C(KC_R),
           KC_X,     KC_C,     KC_V,    KC_B,
           KC_Z,  C(KC_Z), LCA(KC_Z), TO(2)
    ),
    /*
            SUB LAYER
    /---------------------------------------`
    |   KC_Q  |   KC_W  |  KC_E   |   NUM   |
    |---------|---------|---------|---------|
    |   KC_A  |   KC_S  |   KC_D  |  KC_F   |
    |---------|---------|---------|---------|
    |   KC_Z  |  KC_X   |   KC_C  |  KC_V   |
    |---------|---------|---------|---------|
    |  Ctrl   |   Alt   |  Space  |    =    |
    \---------------------------------------'
    */
    [_SUB] = LAYOUT(
        KC_Q,     KC_W,     KC_E,      TO(2),
        KC_A,     KC_S,     KC_D,      KC_F,
        KC_Z,     KC_X,     KC_C,      KC_V,
        KC_LCTRL, KC_LALT,  KC_SPACE,  TO(0)
    ),
    /*
          BASE LAYER
     /---------------------------------------`
     |    7    |    8    |    9    |   Num   |
     |---------|---------|---------|---------|
     |    4    |    5    |    6    |    +    |
     |---------|---------|---------|---------|
     |    1    |    2    |    3    |    -    |
     |---------|---------|---------|---------|
     |    0    |    .    |    =    |         |
     \---------------------------------------'
    */
    [_NUM] = LAYOUT(
        KC_7,      KC_8,    KC_9,     TO(0),
        KC_4,      KC_5,    KC_6,     KC_KP_PLUS,
        KC_1,      KC_2,    KC_3,     KC_KP_MINUS,
        KC_0,    KC_DOT,  KC_EQL,   TO(1)
    ),
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    // If console is enabled, it will print the matrix position and status of each key pressed
/*
#ifdef CONSOLE_ENABLE
    uprintf("KL: kc: %u, col: %u, row: %u, pressed: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed);
#endif
*/
    return true;
}

void keyboard_post_init_user(void) {
    // Customise these values to desired behaviour
    // debug_enable = true;
    // debug_matrix = true;
    // debug_keyboard = true;
    // debug_mouse = true;
}

void encoder_update_user(uint8_t index, bool clockwise) {
    /*  Custom encoder control - handles CW/CCW turning of encoder
     *  Default behavior:
     *    left encoder:
     *      main layer:
     *         CW: move mouse right
     *        CCW: move mouse left
     *      other layers:
     *         CW: = (equals/plus - increase slider in Adobe products)
     *        CCW: - (minus/underscore - decrease slider in adobe products)
     *    right encoder:
     *      main layer:
     *         CW: colume up
     *        CCW: volume down
     *      other layers:
     *         CW: right arrow
     *        CCW: left arrow
     */
    if (index == 0) {
        switch (get_highest_layer(layer_state)) {
            default:
                // main layer - move mouse right (CW) and left (CCW)
                if (clockwise) {
                    tap_code(KC_WH_U);
                } else {
                    tap_code(KC_WH_D);
                }
                break;

            case 1:
                // other layers - =/+ (quals/plus) (CW) and -/_ (minus/underscore) (CCW)
                if (clockwise) {
                    tap_code(KC_UP);
                } else {
                    tap_code(KC_DOWN);
                }
                break;
            case 2:
                // other layers - =/+ (quals/plus) (CW) and -/_ (minus/underscore) (CCW)
                if (clockwise) {
                    tap_code(KC_MS_U);
                } else {
                    tap_code(KC_MS_D);
                }
                break;
        }
    } else if (index == 1) {
        switch (biton32(layer_state)) {
            default:
                // main layer - volume up (CW) and down (CCW)
                if (clockwise) {
                    tap_code(KC_KP_PLUS);
                } else {
                    tap_code(KC_KP_MINUS);
                }
                break;

            case 1:
                // other layers - right (CW) and left (CCW)
                if (clockwise) {
                    tap_code(KC_RIGHT);
                } else {
                    tap_code(KC_LEFT);
                }
                break;
            case 2:
                // other layers - =/+ (quals/plus) (CW) and -/_ (minus/underscore) (CCW)
                if (clockwise) {
                    tap_code(KC_MS_L);
                } else {
                    tap_code(KC_MS_R);
                }
                break;
        }
    }
}
