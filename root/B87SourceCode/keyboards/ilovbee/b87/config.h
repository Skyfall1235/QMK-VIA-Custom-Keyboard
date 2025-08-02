// Copyright 2024 yangzheng20003 (@yangzheng20003)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define USB_POWER_EN_PIN B1 //USB ENABLE pin
#define LED_POWER_EN_PIN A5 //LED ENABLE pin
#define HS_BAT_CABLE_PIN A7 //USB insertion detection pin

#define BAT_FULL_PIN A15
#define BAT_FULL_STATE 1


#define HS_RGB_INDICATOR_COUNT 99
#define HS_RGB_BAT_COUNT 1

/* Device Connection RGB Indicator Light Index And Color */
#define RGB_MATRIX_DISABLE_SHARED_KEYCODES
#define RGBLIGHT_LAYERS

/* Status Indicator Lamp */

#define HS_RGB_INDEX_CAPS 0
#define HS_RGB_INDEX_WIN_LOCK 1
#define HS_RGB_BLINK_INDEX_VAI 0
#define HS_RGB_BLINK_INDEX_VAD 1
#define HS_RGB_BLINK_INDEX_SPI 2

#define HS_RGB_BLINK_INDEX_WIN 55
#define HS_RGB_BLINK_INDEX_MAC 56

/* Encoder */
#define ENCODER_MAP_KEY_DELAY 1

/* SPI */
#define SPI_DRIVER SPIDQ
#define SPI_SCK_PIN B3
#define SPI_MOSI_PIN B5
#define SPI_MISO_PIN B4

/* Flash */
#define EXTERNAL_FLASH_SPI_SLAVE_SELECT_PIN C12
#define WEAR_LEVELING_LOGICAL_SIZE (WEAR_LEVELING_BACKING_SIZE / 2)

/* RGB Matrix */
#define WS2812_BYTE_ORDER WS2812_BYTE_ORDER_RGB
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_KEYPRESSES

/* WS2812 */
#define WS2812_SPI_DRIVER SPIDM2
#define WS2812_SPI_DIVISOR 32

// --- ADDITIONS FOR REACTIVE RGB & DEFAULT SETTINGS ---

// You must explicitly enable the RGB Matrix modes you want to include in your firmware.
// For "Reactive Simple", you need this:
#define ENABLE_RGB_MATRIX_REACTIVE_SIMPLE

// You can also add other modes if you want them to be available via RGB_MOD keycode later:
// #define ENABLE_RGB_MATRIX_SOLID_COLOR      // Recommended if you want to explicitly select this mode
// #define ENABLE_RGB_MATRIX_BREATHING
// #define ENABLE_RGB_MATRIX_REACTIVE_STIPPLE
// #define ENABLE_RGB_MATRIX_REACTIVE_RIPPLE
// #define ENABLE_RGB_MATRIX_REACTIVE_SPLASH
// See QMK documentation for a full list of modes you can enable.

// Default RGB Matrix Settings (Highly Recommended for Consistent Startup)
// These set the initial state of your RGB Matrix when the keyboard first boots
// or after an EEPROM reset.
#define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_SOLID_COLOR // Start with a solid color
#define RGB_MATRIX_DEFAULT_HUE  150                     // Light Blue Hue (for default)
#define RGB_MATRIX_DEFAULT_SAT  180                     // Medium Saturation (for default)
#define RGB_MATRIX_DEFAULT_VAL  200                     // High Value (Brightness) (for default)
#define RGB_MATRIX_DEFAULT_SPD  0                       // Default speed (0 means no animation speed)
