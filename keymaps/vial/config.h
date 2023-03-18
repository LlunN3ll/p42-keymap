/*
Copyright 2020 Pabile

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#include "config_common.h"

#define VIAL_KEYBOARD_UID {0xD1, 0xE0, 0x0C, 0x35, 0x3E, 0x9B, 0x05, 0x21}

/* USB Device descriptor parameter */
#define VENDOR_ID       0x6666
#define PRODUCT_ID      0x6670
#define DEVICE_VER      0x0002
#define MANUFACTURER    Pabile
#define PRODUCT         P42v2 Keyboard

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 7

/* pin-out for PROMICRO */
#define MATRIX_ROW_PINS { D1, D0, D4, C6, D7, E6 }
#define MATRIX_COL_PINS { B4, F7, B1, B6, B2, B3, F6 }

#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Encoders */
#define ENCODERS_PAD_A { D3, F5 }
#define ENCODERS_PAD_B { D2, F4 }

#define TAPPING_TERM 210

#define FORCE_NKRO

#define USB_POLLING_INTERVAL_MS 1

#define QMK_KEYS_PER_SCAN 12

#define IGNORE_MOD_TAP_INTERRUPT

#define PERMISSIVE_HOLD

#define VIAL_COMBO_ENTRIES 2

#define DYNAMIC_KEYMAP_LAYER_COUNT 6

#define NO_MUSIC_MODE

#define LAYER_STATE_8BIT

#undef RGBLIGHT_ANIMATIONS

#undef RGBLIGHT_EFFECT_BREATHING

#undef RGBLIGHT_EFFECT_RAINBOW_MOOD

#undef RGBLIGHT_EFFECT_RAINBOW_SWIRL

#undef RGBLIGHT_EFFECT_SNAKE

#undef RGBLIGHT_EFFECT_KNIGHT

#undef RGBLIGHT_EFFECT_CHRISTMAS

#undef RGBLIGHT_EFFECT_STATIC_GRADIENT

#undef RGBLIGHT_EFFECT_RGB_TEST

#undef RGBLIGHT_EFFECT_ALTERNATING

#undef RGBLIGHT_EFFECT_TWINKLE

#undef LOCKING_SUPPORT_ENABLE

#undef LOCKING_RESYNC_ENABLE

