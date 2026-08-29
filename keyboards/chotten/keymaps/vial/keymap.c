// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
   
    [0] = LAYOUT(
         KC_NUM, KC_PSLS,KC_PAST,KC_PMNS,
         KC_P7,  KC_P8,  KC_P9,  KC_PEQL,
         KC_P4,  KC_P5,  KC_P6,  KC_PPLS,
         KC_P1,  KC_P2,  KC_P3,  KC_ENT,
         KC_0,   KC_PCMM,KC_PDOT,KC_CALC
/*
    ),
    [1] = LAYOUT(
         KC_NUM, KC_PSLS,KC_PAST,KC_PMNS,
         KC_P7,  KC_P8,  KC_P9,  KC_PEQL,
         KC_P4,  KC_P5,  KC_P6,  KC_PPLS,
         KC_P1,  KC_P2,  KC_P3,  KC_ENT,
         KC_0,   KC_PCMM,KC_PDOT,KC_ENT
    ),
    [2] = LAYOUT(
         KC_NUM, KC_PSLS,KC_PAST,KC_PMNS,
         KC_P7,  KC_P8,  KC_P9,  KC_PEQL,
         KC_P4,  KC_P5,  KC_P6,  KC_PPLS,
         KC_P1,  KC_P2,  KC_P3,  KC_ENT,
         KC_0,   KC_PCMM,KC_PDOT,KC_ENT
    ),
    [3] = LAYOUT(
         KC_NUM, KC_PSLS,KC_PAST,KC_PMNS,
         KC_P7,  KC_P8,  KC_P9,  KC_PEQL,
         KC_P4,  KC_P5,  KC_P6,  KC_PPLS,
         KC_P1,  KC_P2,  KC_P3,  KC_ENT,
         KC_0,   KC_PCMM,KC_PDOT,KC_ENT
    ),
    [4] = LAYOUT(
         KC_NUM, KC_PSLS,KC_PAST,KC_PMNS,
         KC_P7,  KC_P8,  KC_P9,  KC_PEQL,
         KC_P4,  KC_P5,  KC_P6,  KC_PPLS,
         KC_P1,  KC_P2,  KC_P3,  KC_ENT,
         KC_0,   KC_PCMM,KC_PDOT,KC_ENT
    ),
    [5] = LAYOUT(
         KC_NUM, KC_PSLS,KC_PAST,KC_PMNS,
         KC_P7,  KC_P8,  KC_P9,  KC_PEQL,
         KC_P4,  KC_P5,  KC_P6,  KC_PPLS,
         KC_P1,  KC_P2,  KC_P3,  KC_ENT,
         KC_0,   KC_PCMM,KC_PDOT,KC_ENT
*/
    )
}
;
