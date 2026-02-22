#include QMK_KEYBOARD_H

enum layers {
    _BASE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
        KC_LSFT, KC_LCTL, KC_LALT,
        KC_BSPC, KC_UP  , KC_DEL,
        KC_LEFT, KC_0   , KC_RGHT,
                 KC_DOWN,
                 KC_ENT
    )
};

/* エンコーダ処理 */
bool encoder_update_user(uint8_t index, bool clockwise) {
    switch (index) {
        case 0: // 左エンコーダ
            if (clockwise) {
                tap_code(KC_VOLU);
            } else {
                tap_code(KC_VOLD);
            }
            break;

        case 1: // 右エンコーダ
            if (clockwise) {
                tap_code(KC_PGDN);
            } else {
                tap_code(KC_PGUP);
            }
            break;
    }
    return true;
}
