// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum custom_keycodes {
    M0 = SAFE_RANGE,
    M1,
    M2,
    M3,
    M4,
    M5,
    M6,
    // Add others if needed
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_ortho_3x3(
        M0,   M1,   M3,
        M4,   M5,   M6,
        MO(1),   MO(2),   MO(3)
    ),
    [1] = LAYOUT_ortho_3x3(
        KC_MUTE,   KC_VOLD,   KC_VOLU,
        KC_MPRV,   KC_MPLY,   KC_MNXT,
        KC_BRID,   KC_BRIU,   KC_PSCR
    ),
    [2] = LAYOUT_ortho_3x3(
        RGB_RMOD,   RGB_MOD,   RGB_TOG,
        RGB_HUD,   RGB_HUI,   RGB_VAI,
        RGB_SAD,   RGB_SAI,   RGB_VAD
    ),
    [3] = LAYOUT_ortho_3x3(
        KC_1,   KC_2,   KC_3,
        KC_4,   KC_5,   KC_6,
        KC_7,   KC_8,   KC_9
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch (keycode) {
            case M0:
                SEND_STRING("git fetch\n");
                return false;
            case M1:
                SEND_STRING("git pull\n");
                return false;
            case M2:
                SEND_STRING("git push\n");
                return false;
            case M3:
                SEND_STRING("git status\n");
                return false;
            case M4:
                SEND_STRING("git checkout -\n");
                return false;
            case M5:
                SEND_STRING("git log --oneline\n");
                return false;
            case M6:
                SEND_STRING("git log --oneline --graph --decorate --all\n");
                return false;
        }
    }
    return true;
}

