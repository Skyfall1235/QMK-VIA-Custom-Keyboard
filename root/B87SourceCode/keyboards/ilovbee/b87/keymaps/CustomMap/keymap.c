// Copyright 2024 yangzheng20003 (@yangzheng20003)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#ifdef RGBLIGHT_ENABLE
#include "rgblight.h"
#endif

enum layers {
    _BL = 0,
    _FL,
    _MBL,
    _MFL,
    _FBL, 
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_BL] = LAYOUT( /* Base */
        KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,      KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11 ,  KC_F12,   KC_CALC,  KC_PSCR,   KC_SCRL,  KC_PAUSE,  
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,       KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,  KC_INS,    KC_HOME,  KC_PGUP,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,       KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,  KC_DEL,    KC_END,   KC_PGDN, 
        KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,       KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,  KC_ENT,   KC_MUTE,          
        KC_LSFT,            KC_Z,     KC_X,     KC_C,       KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,                       KC_UP,    
        KC_LCTL,  KC_LGUI,  KC_LALT,                                  KC_SPC,                                 KC_RALT,  QK_LLCK,  MO(_FL),   KC_RCTL,  KC_LEFT,   KC_DOWN,  KC_RGHT),

    [_FL] = LAYOUT( /* Base */
        _______,  KC_MYCM,   KC_WHOM,   KC_MAIL,  KC_CALC,    KC_MSEL,  KC_MSTP,  KC_MPRV,  KC_MPLY,  KC_MNXT,   KC_MUTE,  KC_VOLD,  KC_VOLU, _______,  _______, RGB_MOD,  _______,
        _______,  _______,   _______,   _______,  _______,   _______,   _______,  _______,  _______,  _______,   _______,   _______, _______, RGB_TOG,  _______, RGB_HUI,  KC_PAUSE,  
        _______,  _______,   _______,   _______,  _______,   _______,   _______,  _______,  _______,  _______,   _______,   _______, _______, _______,  _______, _______,  _______, 
        _______,  KC_NO,     TO(_MBL),  _______,  _______,   _______,   _______,  _______,  _______,  _______,   _______,   _______, _______, _______,                      
        _______,             _______,   _______,  _______,   _______,   NK_TOGG,  _______,  _______,  _______,   _______,   _______, _______,                    RGB_VAI,  
        _______,  GU_TOGG,   _______,                                   EE_CLR,                                  _______,   _______, _______, _______,  RGB_SPD, RGB_VAD,  RGB_SPI ),

    [_MBL] = LAYOUT( /* Base */
        KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,      KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11 ,  KC_F12,   KC_CALC,  KC_PSCR,   KC_SCRL,  KC_PAUSE,  
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,       KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,  KC_INS,    KC_HOME,  KC_PGUP,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,       KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,  KC_DEL,    KC_END,   KC_PGDN, 
        KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,       KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,  KC_ENT,   KC_MUTE,  
        KC_LSFT,            KC_Z,     KC_X,     KC_C,       KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,                       KC_UP,    
        KC_LCTL,  KC_LALT,  KC_LGUI,                                  KC_SPC,                                 KC_RGUI,  MO(_MFL), KC_APP,   KC_RCTL,  KC_LEFT,   KC_DOWN,  KC_RGHT),

    [_MFL] = LAYOUT( /* Base */
        _______,  KC_BRID,   KC_BRIU,   _______,  _______,   RGB_VAD,   RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,   KC_MUTE,  KC_VOLD,  KC_VOLU,  _______,  _______,  RGB_MOD,  KC_PAUSE,
        _______,  _______,   _______,   _______,  _______,   _______,   _______,  _______,  _______,  _______,   _______,   _______, _______,  RGB_TOG,  _______,  RGB_HUI,  KC_PAUSE,  
        _______,  _______,   _______,   _______,  _______,   _______,   _______,  _______,  _______,  _______,   _______,   _______, _______,  _______,  _______,  _______,  _______, 
        _______,  TO(_BL),   KC_NO,     _______,  _______,   _______,   _______,  _______,  _______,  _______,   _______,   _______, _______,  _______,                      
        _______,             _______,   _______,  _______,   _______,   NK_TOGG,  _______,  _______,  _______,   _______,   _______,  MO(_FBL),                     RGB_VAI,  
        _______,  _______,   _______,                                   EE_CLR,                                  _______,   _______, _______,  _______,  RGB_SPD, RGB_VAD,   RGB_SPI ),
    [_FBL] = LAYOUT( /* Base */ 
        QK_BOOT,  _______,   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, _______,  _______, _______,   
        _______,  _______,   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, _______,  _______, _______, 
        _______,  _______,   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, _______,  _______, _______, 
        _______,  _______,   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,             _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,                     _______,   
        _______,  _______,   _______,                                _______,                                _______,  _______,  _______,  _______, _______,  _______, _______ )

};

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [1] = {ENCODER_CCW_CW(_______, _______)},
    [2] = {ENCODER_CCW_CW(_______, _______)},
    [3] = {ENCODER_CCW_CW(_______, _______)},
    [4] = {ENCODER_CCW_CW(_______, _______)},
};
#endif
// clang-format on



bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        uint8_t current_layer = get_highest_layer(layer_state);

        static uint8_t last_layer = 255; // Initialize with a value that won't match any real layer

        // Only change RGB if the layer has actually changed
        if (current_layer != last_layer) {
            #ifdef RGB_MATRIX_ENABLE
            // Ensure we are in a static color mode
            rgb_matrix_mode(RGB_MATRIX_DEFAULT_MODE); // Or RGB_MATRIX_SOLID_COLOR if you prefer

            uint8_t base_hue       = 170; // Hue for Blue
            uint8_t base_saturation = 150; // Reduced saturation for "light" blue
            uint8_t base_value     = 255; // Full brightness

            uint8_t current_hue = base_hue; // Start with base hue

            switch (current_layer) {
                case _BL: // Layer 0: Base Layer (Windows)
                    // This is our starting point
                    break; // No shift needed for the base layer
                case _FL: // Layer 1: Your "First Layer" (Function Layer)
                    current_hue += 40; // Shift hue up by 40
                    break;
                case _MBL: // Layer 2: Mac Base Layer
                    current_hue += 80; // Shift hue up by 80 (2 * 40)
                    break;
                case _MFL: // Layer 3: Mac Function Layer
                    current_hue += 120; // Shift hue up by 120 (3 * 40)
                    break;
                case _FBL: // Layer 4: Another Function Layer
                    current_hue += 160; // Shift hue up by 160 (4 * 40)
                    break;
                default:
                    // For any layers not explicitly defined, wrap the hue based on its number
                    // This ensures it cycles through colors rather than going out of range
                    current_hue += (current_layer * 40);
                    break;
            }

            // Apply the hue to the RGB Matrix.
            // The hue will automatically "wrap around" if it exceeds 255.
            rgb_matrix_sethsv(current_hue, base_saturation, base_value);

            #endif // RGB_MATRIX_ENABLE
            last_layer = current_layer; // Update the last_layer for the next check
        }
    }
    return true; // Always return true so QMK continues processing the keycode
}