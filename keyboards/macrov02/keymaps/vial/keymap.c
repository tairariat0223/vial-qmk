#include QMK_KEYBOARD_H

enum layers {
    _BASE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
        KC_BSPC, KC_UP  , KC_DEL,
        KC_LEFT, KC_DOWN, KC_RGHT
        )
};

/* エンコーダ処理 */
#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] = {
        { KC_RGHT, KC_LEFT },   // encoder 0
        { KC_DOWN, KC_UP   }    // encoder 1
    },
};
#endif
