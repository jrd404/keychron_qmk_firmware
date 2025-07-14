/* Copyright 2024 @ Keychron (https://www.keychron.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H
#include "lemokey_common.h"

enum layers {
    L0,
    L1,
    L2,
    L3,
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [L0] = LAYOUT_ansi_82(
        LT(L2,KC_ESC),  KC_BTN1,        KC_BTN2,        KC_F3,          KC_F4,          KC_F5,          KC_F6,          KC_MPRV,        KC_MPLY,        KC_MNXT,        KC_F10,         KC_F11,         KC_F12,         LT(L3,KC_DEL),      KC_MUTE,
        KC_GRV,         KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINS,        KC_EQL,         KC_BSPC,            KC_HOME,
        KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_LBRC,        KC_RBRC,        KC_BSLS,            KC_PGUP,
LCAG_T(KC_CAPS),        KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOT,                        KC_ENT,             KC_PGDN,
        KC_LSFT,        KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           KC_N,           KC_M,           KC_COMM,        KC_DOT,         KC_SLSH,        KC_RSFT,                        KC_UP,
        KC_LCTL,        KC_LALT,        KC_LGUI,                                        KC_SPC,                                                         KC_RGUI,        MO(L1),         KC_RALT,        KC_LEFT,        KC_DOWN,            KC_RGHT),

    [L1] = LAYOUT_ansi_82(
        LCAG(KC_ESC),   KC_F1,          KC_F2,          _______,        _______,        _______,        _______,        KC_F7,          KC_F8,          KC_F9,          _______,        _______,        _______,        _______,            OSL(3),
        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,            KC_END,
        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        LAG(KC_LEFT),   LAG(KC_RGHT),   _______,            KC_WH_U,
        CW_TOGG,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,                        _______,            KC_WH_D,
        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,                        _______,
        _______,        _______,        _______,                                        LCAG(KC_SPC),                                                   HYPR(KC_NO),    _______,        MEH(KC_NO),     _______,        _______,            _______),

    [L2] = LAYOUT_ansi_82(
        KC_ESC,         KC_BTN1,        KC_BTN2,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,            _______,
        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,            KC_HOME,
        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        KC_LBRC,        KC_RBRC,        _______,            KC_PGUP,
LCAG_T(KC_CAPS),        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,                        _______,            KC_PGDN,
        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,                        KC_WH_U,
        _______,        _______,        _______,                                        KC_SPC,                                                         KC_RGUI,        MO(L3),         KC_LALT,        KC_WH_L,        KC_WH_D,            KC_WH_R),

    [L3] = LAYOUT_ansi_82(
        _______,        KC_F1,          KC_F2,          _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,            RGB_TOG,
        P2P4G,          BT_HST1,        BT_HST2,        BT_HST3,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,            KC_END,
        _______,        _______,        KC_MS_U,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,            KC_WH_U,
        _______,        KC_MS_L,        KC_MS_D,        KC_MS_R,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,                        _______,            KC_WH_D,
        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,                        KC_UP,
        _______,        _______,        _______,                                        _______,                                                        HYPR(KC_NO),    _______,        MEH(KC_NO),     KC_LEFT,        KC_DOWN,            KC_RGHT)
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [L0] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [L1] = {ENCODER_CCW_CW(RGB_VAD, RGB_VAI)},
    [L2] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [L3] = {ENCODER_CCW_CW(RGB_VAD, RGB_VAI)}
};
#endif

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if(!process_record_lemokey_common(keycode, record)) {
        return false;
    }
    return true;
}
