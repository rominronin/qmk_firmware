// Copyright 2026 Baris Tosun (@rominronin)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// MacOS based definitions.
#define K_SPCFN LT(2, KC_SPACE) // Tap for space, hold for symbols layer
#define K_PRVWD LALT(KC_LEFT)      // Previous word
#define K_NXTWD LALT(KC_RIGHT)     // Next word
#define K_LSTRT LGUI(KC_LEFT)      // Start of line
#define K_LEND  LGUI(KC_RIGHT)     // End of line
#define UNDO    LGUI(KC_Z)         // UNDO
#define CUT     LGUI(KC_X)         // CUT
#define COPY    LGUI(KC_C)         // COPY
#define PASTE   LGUI(KC_V)         // PASTE

/*
 * Matrix order of LAYOUT_all (Tsuka60 classic, PCB "Prototype One"):
 *   row 0: 15 keys, row 1: 15 keys
 *   row 2: 13 keys, centre key is 1.5u
 *   row 3: 13 keys, centre key is 2u
 *   row 4: L1 L2 L3 | left space, centre space, right/6.25u/7u space, key right of 6.25u |
 *          R1 R2 R3 | four 1u keys right of the 7u spacebar
 *   PCB bug: (4,3) (4,4) (4,9) (4,10) (4,11) have no trace from diode to Row4.
 */
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_all(
        KC_ESC , KC_GRV , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , DF(1)  , KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_QUOT, KC_BSPC,
        KC_TAB , KC_CAPS, KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , KC_DEL , KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_LBRC, KC_RBRC,
        MO(3)  , KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , KC_BSLS, KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_ENT,
        KC_LSFT, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , KC_ENT , KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_RSFT,
        KC_LCTL, KC_LALT, KC_LGUI, KC_SPC , KC_SPC , K_SPCFN, KC_RALT, KC_RGUI, MO(2)  , KC_RCTL, KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT
    ),
    [1] = LAYOUT_all(
        _______, _______, _______, _______, _______, _______, _______, DF(0)  , _______, _______, KC_PEQL, KC_PSLS, KC_PAST, _______, _______,
        _______, _______, _______, _______, MS_UP  , _______, _______, _______, _______, KC_P7  , KC_P8  , KC_P9  , KC_PMNS, _______, _______,
        _______, MS_BTN2, MS_LEFT, MS_DOWN, MS_RGHT, _______, _______, _______, KC_P4  , KC_P5  , KC_P6  , KC_PPLS, _______,
        _______, _______, MS_ACL0, MS_ACL1, MS_ACL2, _______, _______, _______, KC_P1  , KC_P2  , KC_P3  , KC_PENT, _______,
        _______, _______, _______, MS_BTN1, _______, KC_P0  , _______, KC_PDOT, KC_PENT, _______, _______, _______, _______, _______
    ),
    [2] = LAYOUT_all(
        QK_BOOT, _______, KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_VOLU, KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , KC_F12,
        _______, KC_GRV , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , KC_VOLD, KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_DEL , _______,
        _______, KC_EXLM, KC_AT  , KC_HASH, KC_DLR , KC_PERC, KC_MPLY, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______,
        _______, KC_PLUS, KC_MINS, KC_EQL , KC_LCBR, KC_RCBR, KC_MNXT, KC_LBRC, KC_RBRC, KC_SCLN, KC_COLN, KC_BSLS, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),
    [3] = LAYOUT_all(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, K_PRVWD, KC_UP  , K_NXTWD, _______, _______, _______,
        _______, KC_LGUI, KC_LCTL, KC_LALT, KC_LSFT, _______, _______, KC_BSPC, KC_LEFT, KC_DOWN, KC_RGHT, KC_DEL , _______,
        _______, UNDO   , CUT    , COPY   , PASTE  , _______, _______, _______, K_LSTRT, _______, K_LEND , _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    )
};
