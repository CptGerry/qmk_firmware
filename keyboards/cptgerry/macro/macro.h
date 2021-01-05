#ifndef MACRO_H
#define MACRO_H

#include "quantum.h"

#define LAYOUT_macro(  \
	k00, k01, k02, \
	k10, k11, k12, k13,  \
	k20, k21, k22  \
) \
{ \
  { k00,   k01,   k02,   KC_NO },  \
  { k10,   k11,   k12,   k13 },  \
  { k20,   k21,   k22,   KC_NO }  \
}

#endif