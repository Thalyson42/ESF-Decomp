// PM_ClipVelocity @0x18efd0 size=169
unsigned int PM_ClipVelocity(float *a0, float *a1, float *a2, float a3)
{
    unsigned int v0;  // edi
    float v1;  // 128
    int idx;  // edx

    v0 = 0;
    if (0.0 < a1[2])
        v0 = 1;
    if (a1[2] == 0.0f)
        v0 |= 2;
    v1 = (*a0 * *a1 + a0[1] * a1[1] + a0[2] * a1[2]) * a3;
    idx = 0;
    do
    {
        a2[idx] = a0[idx] - v1 * a1[idx];
        if (-0.1 < a2[idx] && 0.1 > a2[idx])
            *(unsigned int *)&a2[idx] = 0;
    } while ((idx += 1, idx <= 2));
    return v0;
}

