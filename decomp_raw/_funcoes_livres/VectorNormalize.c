// VectorNormalize @0x18dee0 size=130
float VectorNormalize(float *a0)
{
    double v1;  // mm7
    double v2;  // mm6
    double v3;  // mm6
    float v0;  // [bp-0x8]

    v1 = *a0 * *a0 + a0[1] * a0[1] + a0[2] * a0[2];
    v2 = sqrt(v1);
    if (isnan(v2))
        sqrt(*(unsigned int *)&v1);
    else
        v1 = v2;
    v0 = (float)v1;
    if (v0 != 0.0f)
    {
        v3 = 1.0 / v0;
        *a0 = (float)(v3 * *a0);
        a0[1] = (float)(v3 * a0[1]);
        a0[2] = (float)(v3 * a0[2]);
    }
    return v0;
}

