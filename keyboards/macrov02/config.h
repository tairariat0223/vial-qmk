/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

/* Matrix size */
#define MATRIX_ROWS 2
#define MATRIX_COLS 3

/* direct pins */
#define DIRECT_PINS { \
    { GP3, GP4, GP5 }, \
    { GP6, GP7, GP8 }, \
}

/* pullups */
#define INTERNAL_PULLUPS

/* Debounce */
#define DEBOUNCE 5

/* Vial 固有設定 */
#define VIAL_KEYBOARD_UID {0x91,0xA2,0xB3,0xC4,0xD5,0xE6,0x17,0x28}
#define VIAL_UNLOCK_COMBO_ROWS {0, 0}
#define VIAL_UNLOCK_COMBO_COLS {0, 1}

/* マウスカーソル設定*/
#define MOUSEKEY_DELAY          0
#define MOUSEKEY_INTERVAL       16
#define MOUSEKEY_MOVE_DELTA     8
#define MOUSEKEY_MAX_SPEED      3
#define MOUSEKEY_TIME_TO_MAX    64

#define MOUSEKEY_WHEEL_DELAY    0
#define MOUSEKEY_WHEEL_INTERVAL 16
#define MOUSEKEY_WHEEL_DELTA    1
#define MOUSEKEY_WHEEL_MAX_SPEED 8
#define MOUSEKEY_WHEEL_TIME_TO_MAX 64
