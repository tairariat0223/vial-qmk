/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

/* USB Device descriptor parameter */
//#define VENDOR_ID    0xFEED
//#define PRODUCT_ID   0x6061
//#define DEVICE_VER   0x0001
//#define MANUFACTURER "taira"
//#define PRODUCT      "macro3x3v01"

/* Matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 3

/* direct pins */
#define DIRECT_PINS { \
    { GP29, GP14, GP13 }, \
    { GP28, GP8, GP26 }, \
    { GP12, GP11, GP9 } , \
    { GP10,  NO_PIN, NO_PIN }, \
    { NO_PIN, GP27, NO_PIN }  \
}

/* encoder */
//#define ENCODERS_PAD_A { GP2, GP3 }
//#define ENCODERS_PAD_B { GP5, GP4 }

/* pullups */
#define INTERNAL_PULLUPS

/* diode direction (directでも必要) */
//#define DIODE_DIRECTION COL2ROW

/* Debounce */
#define DEBOUNCE 5

/* Vial 固有設定 */
//#define VIAL_KEYBOARD_UID {0x91,0xA2,0xB3,0xC4,0xD5,0xE6,0x17,0x28}
//#define VIAL_UNLOCK_COMBO_ROWS {0, 0}
//#define VIAL_UNLOCK_COMBO_COLS {0, 1}

/* マウスカーソル設定*/
#define MOUSEKEY_DELAY          0
#define MOUSEKEY_INTERVAL       16
#define MOUSEKEY_MOVE_DELTA     8
#define MOUSEKEY_MAX_SPEED      6
#define MOUSEKEY_TIME_TO_MAX    64

#define MOUSEKEY_WHEEL_DELAY    0
#define MOUSEKEY_WHEEL_INTERVAL 16
#define MOUSEKEY_WHEEL_DELTA    1
#define MOUSEKEY_WHEEL_MAX_SPEED 8
#define MOUSEKEY_WHEEL_TIME_TO_MAX 64
