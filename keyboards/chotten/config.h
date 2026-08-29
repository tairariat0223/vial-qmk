/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

/* Matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 4

/* Pin configuration */
#define MATRIX_ROW_PINS { GP15, GP14, GP13, GP12, GP11 }
#define MATRIX_COL_PINS { GP26, GP27, GP28, GP29 }
#define DIODE_DIRECTION COL2ROW

/* Debounce */
#define DEBOUNCE 5

/* Vial 固有設定 */
#define VIAL_KEYBOARD_UID {0x3A, 0xF7, 0x81, 0x2C, 0xD5, 0x64, 0x9E, 0xB0}
#define VIAL_UNLOCK_COMBO_ROWS {0, 1}
#define VIAL_UNLOCK_COMBO_COLS {0, 1}
