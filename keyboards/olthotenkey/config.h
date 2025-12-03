/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID    0xFEED
#define PRODUCT_ID   0x6061
#define DEVICE_VER   0x0001
#define MANUFACTURER "taira"
#define PRODUCT      "olthotenkey"

/* Matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 5

/* Pin configuration */
#define MATRIX_ROW_PINS { GP11, GP12, GP13, GP14, GP15 }
#define MATRIX_COL_PINS { GP6, GP7, GP8, GP9, GP10 }
#define DIODE_DIRECTION COL2ROW

/* Debounce */
#define DEBOUNCE 5

/* Vial 固有設定 */
#define VIAL_KEYBOARD_UID {0x5F, 0x71, 0xC9, 0xAA, 0x11, 0xF0, 0xF8, 0xE8}
#define VIAL_UNLOCK_COMBO_ROWS {0, 1}
#define VIAL_UNLOCK_COMBO_COLS {0, 1}
