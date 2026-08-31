/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

/* Matrix size
#define MATRIX_ROWS 5
#define MATRIX_COLS 4  */

/* Pin configuration */
#define DIRECT_PINS {
    {GP0, GP29, GP28, GP27 },
    {GP5, GP14, GP15, GP26 },
    {GP4, GP11, GP12, GP13 },
    {GP3, GP7,  GP6,  GP10 },
    {GP1, GP2,  GP8,  GP9 }
#define DIODE_DIRECTION COL2ROW

/* Debounce */
#define DEBOUNCE 5

/* Vial 固有設定 */
#define VIAL_KEYBOARD_UID {0x3A, 0xF7, 0x81, 0x2C, 0xD5, 0x64, 0x9E, 0xB0}
#define VIAL_UNLOCK_COMBO_ROWS {0, 1}
#define VIAL_UNLOCK_COMBO_COLS {0, 1}
