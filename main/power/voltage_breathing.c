#include "voltage_breathing.h"
#include <math.h>

#ifndef PI
#define PI 3.14159265358979323846
#endif

float voltage_breathing(float t, float Vc)
{
    return Vc * (1.0f + 0.1333f * sinf(2.0f * PI * t / 0.6f + PI / 3.0f));
}

