// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │Tab│ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │Bsp│
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │Esc│ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │ ' │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │Sft│ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │Ent│
     * ├───┼───┼───┼───┼───┼───┴───┼───┼───┼───┼───┼───┤
     * │App│Ctl│Alt│GUI│ < │       │ > │ ← │ ↓ │ ↑ │ → │
     * └───┴───┴───┴───┴───┴───────┴───┴───┴───┴───┴───┘
     */
    [0] = LAYOUT_invader(
        LCTL_T(KC_Q),    KC_W,    KC_E,    KC_R,   KC_T,             		 KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
        KC_A,   		 KC_S,    KC_D,    KC_F,   KC_G,    KC_BACKSLASH,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,
        LSFT_T(KC_Z),    LALT_T(KC_X),     KC_C,   KC_V,    KC_B,    		 KC_SEMICOLON,     KC_N,    KC_M,    KC_COMM,	 KC_DOT,  
        KC_LCTL, KC_LALT, KC_GT,		KC_SPACE,		 KC_ENTER,          LALT(KC_GRAVE),    KC_GT,   KC_LEFT
    )
};
