/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

/* Matrix size */
#define MATRIX_ROWS 3
#define MATRIX_COLS 8

/* Pin configuration */
#define MATRIX_ROW_PINS { GP6, GP7, GP8 }
#define MATRIX_COL_PINS { GP26, GP15, GP14, GP13, GP12, GP11, GP10, GP9 }
#define DIODE_DIRECTION COL2ROW

/* Debounce */
#define DEBOUNCE 5

/* Vial 固有設定 */
#define VIAL_KEYBOARD_UID {0x9F, 0x42, 0xC7, 0x1D, 0xA8, 0x5E, 0x33, 0x6B}
#define VIAL_UNLOCK_COMBO_ROWS {0, 1}
#define VIAL_UNLOCK_COMBO_COLS {0, 1}
