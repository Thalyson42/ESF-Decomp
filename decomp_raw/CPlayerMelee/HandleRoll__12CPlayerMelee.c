// HandleRoll__12CPlayerMelee @0x1020c0 size=178
int HandleRoll__12CPlayerMelee(float a0)
{
    unsigned int v2;  // edx
    double v3;  // mm7
    double v4;  // mm6
    float v0;  // [bp-0x18]

    CPlayerMelee::CheckCreater(a0);
    v2 = *(int *)*(int *)(*(unsigned int *)&a0 + 292) + 32;
    v3 = *(float *)(*(int *)*(int *)(*(unsigned int *)&a0 + 292) + 32) * *(float *)(*(int *)*(int *)(*(unsigned int *)&a0 + 292) + 32) + *(float *)(v2 + 4) * *(float *)(v2 + 4) + *(float *)(v2 + 8) * *(float *)(v2 + 8);
    v4 = sqrt(v3);
    if (isnan(v4))
        sqrt(*(unsigned int *)&v3);
    else
        v3 = v4;
    v0 = (float)v3;
    if (v0 < 10.0f && *(char *)(*(int *)*(int *)(*(unsigned int *)&a0 + 292) + 421) & 2)
        return CPlayerMelee::StartLay(a0);
    return CPlayerMelee::HandleRecover(a0);
}

