// AngleBetweenVectors @0x18dbb0 size=174
double AngleBetweenVectors(float *a0, float *a1)
{
    double v3;  // mm7
    double v4;  // mm0
    float v0;  // [bp-0x1c]
    float v1;  // [bp-0x18]
    float v2;  // [bp-0x8]

    sub_48c330(a0);
    v1 = (float)v3;
    sub_48c330(a1);
    v0 = (float)v3;
    if (v1 != 0.0f && v0 != 0.0f)
    {
        sub_48db10((unsigned int)(*a0 * *a1 + a0[1] * a1[1] + a0[2] * a1[2] >> 0));
        v2 = (float)(v4 / (v1 * v0));
        v2 = (float)(v2 * 180.0 / 3.141592653589793);
        return 3.141592653589793;
    }
    return 0.0;
}

