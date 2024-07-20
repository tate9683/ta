// Copyright 2024 taco9683 (@taco9683)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once
#define VIAL_KEYBOARD_UID  {0x16, 0xE4, 0x03, 0xF7, 0x77, 0x4D, 0x67, 0xB6}
#define VIAL_UNLOCK_COMBO_ROWS { 1, 0 }
#define VIAL_UNLOCK_COMBO_COLS { 1, 8 }

#define DYNAMIC_KEYMAP_LAYER_COUNT 7
/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

#define WS2812_DI_PIN GP15
#define WS2812_TIMING 1250
#define WS2812_T1H 650
#define WS2812_T0H 350
#define WS2812_TRST_US 100 

#define RGBLIGHT_LAYERS // レイヤーとの連動機能の有効化

#define RGBLED_NUM 5

#define RGBLIGHT_MAX_LAYERS 7 // 連動するレイヤー数(最大8)

#define RGBLIGHT_LIMIT_VAL 100
#define RGBLIGHT_DISABLE_KEYCODES
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_RAINBOW_MOOD


//RGBMATRIX
// Enable RGB Matrix
#ifdef RGB_MATRIX_ENABLE
#define RGBLIGHT_LED_MAP { 0, 1, 2, 3, 4 }
#    define RGB_MATRIX_KEYPRESSES // reacts to keypresses
#    define RGB_DISABLE_AFTER_TIMEOUT 0  // number of minutes to wait until rgb automatically turns off
#    define RGB_DISABLE_WHEN_USB_SUSPENDED true  // turn off effects when suspended
#    define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#    define RGB_MATRIX_LED_PROCESS_LIMIT 4
#    define RGB_MATRIX_LED_FLUSH_LIMIT 26
#    define RGB_MATRIX_MAXIMUM_BRIGHTNESS 150
#    define DRIVER_LED_TOTAL 35  // Change this to the number of LEDs on your keyboard
#endif
/* The LEDs on the slave half go in reverse order 個々のLED番号のお知らせ*/
/*

#define RGBLIGHT_LIMIT_VAL 100
#define RGBLIGHT_DISABLE_KEYCODES
#define RGBLIGHT_EFFECT_SNAKE
#define RGBLIGHT_EFFECT_KNIGHT
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#define RGBLIGHT_EFFECT_CHRISTMAS
#define RGBLIGHT_EFFECT_STATIC_GRADIENT
#define RGBLIGHT_EFFECT_RGB_TEST
#define RGBLIGHT_EFFECT_ALTERNATING
#define RGBLIGHT_EFFECT_TWINKLE
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#endif
*/

/*
#define LAYOUT( \
   k00, k01, k02, k03, k04, k05, KC_NO, k07, k08, k09, k10, \
   k11, k12, k13, k14, k15, k16, k17,   k18, k19, k20, k21, \
   k22, k23, k24, k25, k26, k27, k28,   k29, k30, k31, k32, \
                   k33, k34, k35, k36, k37, k38, k39, k40 \
  ) 
*/
/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* Use 1000hz polling */
#define USB_POLLING_INTERVAL_MS 1



