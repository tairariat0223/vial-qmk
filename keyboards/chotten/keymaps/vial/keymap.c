// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
   
    [0] = LAYOUT_all(
         KC_NUM, KC_PSLS, KC_PAST, KC_PMNS,
         KC_P7,  KC_P8,   KC_P9,   KC_PEQL,
         KC_P4,  KC_P5,   KC_P6,   KC_PPLS,
         KC_P1,  KC_P2,   KC_P3,   KC_ENT,
         KC_0,   KC_PCMM, KC_PDOT, KC_CALC
    ),
    [1] = LAYOUT_all(
         KC_NUM, KC_PSLS, KC_PAST, KC_PMNS,
         KC_P7,  KC_P8,   KC_P9,   KC_PEQL,
         KC_P4,  KC_P5,   KC_P6,   KC_PPLS,
         KC_P1,  KC_P2,   KC_P3,   KC_ENT,
         KC_0,   KC_PCMM, KC_PDOT, KC_CALC
    ),
    [2] = LAYOUT_all(
         KC_NUM, KC_PSLS, KC_PAST, KC_PMNS,
         KC_P7,  KC_P8,   KC_P9,   KC_PEQL,
         KC_P4,  KC_P5,   KC_P6,   KC_PPLS,
         KC_P1,  KC_P2,   KC_P3,   KC_ENT,
         KC_0,   KC_PCMM, KC_PDOT, KC_CALC

    ),
    [3] = LAYOUT_all(
         KC_NUM, KC_PSLS, KC_PAST, KC_PMNS,
         KC_P7,  KC_P8,   KC_P9,   KC_PEQL,
         KC_P4,  KC_P5,   KC_P6,   KC_PPLS,
         KC_P1,  KC_P2,   KC_P3,   KC_ENT,
         KC_0,   KC_PCMM, KC_PDOT, KC_CALC
    ),
    [4] = LAYOUT_all(
         KC_NUM, KC_PSLS, KC_PAST, KC_PMNS,
         KC_P7,  KC_P8,   KC_P9,   KC_PEQL,
         KC_P4,  KC_P5,   KC_P6,   KC_PPLS,
         KC_P1,  KC_P2,   KC_P3,   KC_ENT,
         KC_0,   KC_PCMM, KC_PDOT, KC_CALC
    ),
    [5] = LAYOUT_all(
         KC_NUM, KC_PSLS, KC_PAST, KC_PMNS,
         KC_P7,  KC_P8,   KC_P9,   KC_PEQL,
         KC_P4,  KC_P5,   KC_P6,   KC_PPLS,
         KC_P1,  KC_P2,   KC_P3,   KC_ENT,
         KC_0,   KC_PCMM, KC_PDOT, KC_CALC
    )
};
