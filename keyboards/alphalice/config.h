/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

/* Matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 10

/* Pin configuration */
#define MATRIX_ROW_PINS { GP8, GP9, GP10, GP11 }
#define MATRIX_COL_PINS { GP28, GP27, GP26, GP15, GP14, GP7, GP6, GP5, GP4, GP3 }
#define DIODE_DIRECTION COL2ROW

/* Debounce */
#define DEBOUNCE 5

/* Vial 固有設定 */
#define VIAL_KEYBOARD_UID {0x6D, 0xB2, 0x47, 0xE9, 0x13, 0x8A, 0xC5, 0x70}
#define VIAL_UNLOCK_COMBO_ROWS {0, 1}
#define VIAL_UNLOCK_COMBO_COLS {0, 1}
