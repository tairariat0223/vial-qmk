// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
   
    [0] = LAYOUT(
         KC_W, KC_E, KC_R,   KC_T, KC_Y, KC_U, KC_I, KC_O,
         KC_S, KC_D, KC_F,   KC_G, KC_H, KC_J, KC_K, KC_P,
         KC_A, KC_Z, KC_SPC, KC_B, KC_N, KC_M, KC_L

    ),
    [1] = LAYOUT(
         KC_W, KC_E, KC_R,   KC_T, KC_Y, KC_U, KC_I, KC_O,
         KC_S, KC_D, KC_F,   KC_G, KC_H, KC_J, KC_K, KC_P,
         KC_A, KC_Z, KC_SPC, KC_B, KC_N, KC_M, KC_L

    ),
    [2] = LAYOUT(
         KC_W, KC_E, KC_R,   KC_T, KC_Y, KC_U, KC_I, KC_O,
         KC_S, KC_D, KC_F,   KC_G, KC_H, KC_J, KC_K, KC_P,
         KC_A, KC_Z, KC_SPC, KC_B, KC_N, KC_M, KC_L

    ),
    [3] = LAYOUT(
         KC_W, KC_E, KC_R,   KC_T, KC_Y, KC_U, KC_I, KC_O,
         KC_S, KC_D, KC_F,   KC_G, KC_H, KC_J, KC_K, KC_P,
         KC_A, KC_Z, KC_SPC, KC_B, KC_N, KC_M, KC_L

    )
};
