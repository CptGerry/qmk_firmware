#pragma once
#include "quantum.h"

#define LAYOUT( \
    K01, K02, K03, \
    K11, K12, K13  \
) \
{ \
    { K01, K02, K03 }, \
    { K11, K12, K13 } \
}
