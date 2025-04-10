#pragma once


// Pin configuration
#define MATRIX_ROW_PINS { B1, B3, B2 }
#define MATRIX_COL_PINS { D4, C6, D7 }
#define DIODE_DIRECTION COL2ROW


#define LAYOUT( \
    k00, k01, k02, \
    k10, k11, k12, \
    k20, k21, k22  \
) { \
    { k00, k01, k02 }, \
    { k10, k11, k12 }, \
    { k20, k21, k22 }  \
}

#define DYNAMIC_KEYMAP_LAYER_COUNT 4