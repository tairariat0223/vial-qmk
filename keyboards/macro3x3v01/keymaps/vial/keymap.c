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
#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] = {
        { KC_VOLU, KC_VOLD },   // encoder 0
        { KC_PGDN, KC_PGUP }    // encoder 1
    },
};
#endif
