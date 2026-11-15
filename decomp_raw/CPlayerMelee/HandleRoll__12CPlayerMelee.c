// HandleRoll__12CPlayerMelee @0x1020c0 size=178
int HandleRoll__12CPlayerMelee(float a0)
{
    unsigned int v2;  // edx
    double v3;  // mm7
    double v4;  // mm6
    float v0;  // [bp-0x18]

    sub_4880a0(a0);
    v2 = *(int *)*(int *)(*(unsigned int *)&a0 + 292) + 32;
    v3 = *(float *)(*(int *)*(int *)(*(unsigned int *)&a0 + 292) + 32) * *(float *)(*(int *)*(int *)(*(unsigned int *)&a0 + 292) + 32) + *(float *)(v2 + 4) * *(float *)(v2 + 4) + *(float *)(v2 + 8) * *(float *)(v2 + 8);
    v4 = sqrt(v3);
    if (isnan(v4))
        sub_487dc0(*(unsigned int *)&v3);
    else
        v3 = v4;
    v0 = (float)v3;
    if (v0 < 10.0f && *(char *)(*(int *)*(int *)(*(unsigned int *)&a0 + 292) + 421) & 2)
        return sub_48ba10(a0);
    return sub_488db0(a0);
}

