#pragma once
#include "quantum.h"

#define LAYOUT_2( \
	K00, K01, \
	K12, K13, K14 \
) \
{ \
	{ K00,   K01,   KC_NO, KC_NO, KC_NO }, \
	{ KC_NO, KC_NO, K12,   K13,   K14 } \
}	
