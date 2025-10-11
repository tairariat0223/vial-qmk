/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID    0xFEED
#define PRODUCT_ID   0x6060
#define DEVICE_VER   0x0001
#define MANUFACTURER "taira"
#define PRODUCT      "33hand"

/* Matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 10

/* Pin configuration */
#define MATRIX_ROW_PINS { GP29, GP28, GP27, GP26 }
#define MATRIX_COL_PINS { GP1, GP2, GP3, GP4, GP5, GP6, GP7, GP8, GP9, GP10 }
#define DIODE_DIRECTION COL2ROW

/* Debounce */
#define DEBOUNCE 5

/* Vial 固有設定 */
#define VIAL_KEYBOARD_UID {0xBD, 0x6E, 0xDA, 0x61, 0xA9, 0xF0, 0xEB, 0xD3}
#define VIAL_UNLOCK_COMBO_ROWS {0, 1}
#define VIAL_UNLOCK_COMBO_COLS {0, 1}
