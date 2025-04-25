#pragma once


// Pin configuration
#define MATRIX_ROW_PINS { B2, B3, B1 }
#define MATRIX_COL_PINS { D4, C6, D7 }
#define DIODE_DIRECTION COL2ROW

#define LAYOUT( \
    k00, k01, k02, \
    k10, k11, k12, \
    k20, k21, k22  \
) { \
    { k20, k10, k00 }, \
    { k21, k11, k01 }, \
    { k22, k12, k02 }  \
}

#define DYNAMIC_KEYMAP_LAYER_COUNT 4
