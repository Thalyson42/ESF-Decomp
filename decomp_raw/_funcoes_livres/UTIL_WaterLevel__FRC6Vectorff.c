// UTIL_WaterLevel__FRC6Vectorff @0x134380 size=198
float UTIL_WaterLevel__FRC6Vectorff(float *a0, float a1, float a2)
{
    double v3;  // mm7
    float v0;  // [bp-0x24]
    float v1;  // [bp-0x20]
    float v2;  // [bp-0x1c]

    v0 = *a0;
    v1 = a0[1];
    v2 = a1;
    if (sub_48ae20(&v0) != 0xfffffffd)
        return a1;
    v2 = a2;
    if (sub_48ae20(&v0) == 0xfffffffd)
        return a2;
    v3 = a2 - a1;
    if (1.0 < v3)
    {
        do
        {
            v2 = (float)(v3 * 0.5 + a1);
            if (sub_48ae20(&v0) == 0xfffffffd)
                a1 = v2;
            else
                a2 = v2;
        } while ((v3 = a2 - a1, 1.0 < v3));
    }
    return v2;
}

