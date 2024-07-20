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


#ifdef RGBLIGHT_ENABLE
#define RGBLIGHT_LAYERS // レイヤーとの連動機能の有効化
#define RGBLIGHT_MAX_LAYERS 6 // 連動するレイヤー数(最大8)
#define WS2812_DI_PIN GP15
#define WS2812_TIMING 1250
#define WS2812_T1H 650
#define WS2812_T0H 350
#define WS2812_TRST_US 100

#define RGBLED_NUM 5
/* The LEDs on the slave half go in reverse order 個々のLED番号のお知らせ*/
#define RGBLIGHT_LED_MAP { 0, 1, 2, 3, 4 }
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



/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* Use 1000hz polling */
#define USB_POLLING_INTERVAL_MS 1


