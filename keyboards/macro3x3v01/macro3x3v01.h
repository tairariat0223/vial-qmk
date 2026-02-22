#pragma once

#include "quantum.h"

#define LAYOUT( \
    k00, k01, k02, \
    k10, k11, k12, \
    k20, k21, k22, \
         k30,       \
         k40        \
) \
{ \
    { k00, k01, k02 }, \
    { k10, k11, k12 }, \
    { k20, k21, k22 }, \
    { k30, KC_NO, KC_NO }, \
    { KC_NO, k40, KC_NO } \
}
