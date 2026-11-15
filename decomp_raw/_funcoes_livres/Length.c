// Length @0x18de20 size=98
float Length(float *a0)
{
    double v1;  // mm7
    int i;  // eax
    double v3;  // mm6
    float v0;  // [bp-0x8]

    v1 = 0.0;
    i = 0;
    do
    {
        v1 += a0[i] * a0[i];
        i += 1;
    } while (i <= 2);
    v3 = sqrt(v1);
    if (isnan(v3))
        sqrt(*(unsigned int *)&v1);
    else
        v1 = v3;
    v0 = (float)v1;
    return v0;
}

