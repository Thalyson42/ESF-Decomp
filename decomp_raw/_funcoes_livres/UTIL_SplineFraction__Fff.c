// UTIL_SplineFraction__Fff @0x1332b0 size=47
double UTIL_SplineFraction__Fff(float a0, float a1)
{
    float v1;  // 128
    float v2;  // 112

    v1 = a0 * a1;
    v2 = v1 * v1;
    return v1 * v1 * 3.0 - v1 * (v2 + v2);
}

