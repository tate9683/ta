#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │Esc│ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │ \ │ ` │
     * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┤
     * │ Tab │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ [ │ ] │ Bspc│
     * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
     * │ Ctrl │ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │ ' │  Enter │
     * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┬───┤
     * │ Shift  │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │ Shift│MO1│
     * └─────┬──┴┬──┴──┬┴───┴───┴───┴───┴───┴───┴──┬┴───┴┬───┬─┴───┘
     *       │Alt│ GUI │                           │ GUI │Alt│
     *       └───┴─────┴───────────────────────────┴─────┴───┘
     */
       [0] = LAYOUT_spankey(
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,             KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        KC_LCTL,  KC_A,    KC_S,    KC_D,    KC_F,   KC_G,    KC_2,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_MINUS,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_3,    KC_N,    KC_M,    KC_COMM,	 KC_DOT,  KC_SLSH,
        KC_APP,  KC_LCTL, KC_LALT, 		KC_SPC,		 KC_ENTER,       KC_SPC,       KC_GT,   KC_LEFT
    ),
	[1] = LAYOUT_spankey(
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,             KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        KC_LCTL,  KC_A,    KC_S,    KC_D,    KC_F,   KC_G,    KC_2,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_MINUS,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_3,    KC_N,    KC_M,    KC_COMM,	 KC_DOT,  KC_SLSH,
        KC_APP,  KC_LCTL, KC_LALT, 		KC_SPC,		 KC_ENTER,       KC_SPC,       KC_GT,   KC_LEFT
    ),
	[2] = LAYOUT_spankey(
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,             KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        KC_LCTL,  KC_A,    KC_S,    KC_D,    KC_F,   KC_G,    KC_2,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_MINUS,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_3,    KC_N,    KC_M,    KC_COMM,	 KC_DOT,  KC_SLSH,
        KC_APP,  KC_LCTL, KC_LALT, 		KC_SPC,		 KC_ENTER,        KC_SPC,       KC_GT,   KC_LEFT
    ),
	[3] = LAYOUT_spankey(
        _______,  _______,    _______,    _______,    _______,     _______,    _______,    _______,    _______,    _______,    _______,       _______,
        _______,  _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______, _______,
        _______, _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,	 _______,  _______,
        _______,  _______, _______, 	_______,		_______,       _______,      _______,   _______
    )
	
};
