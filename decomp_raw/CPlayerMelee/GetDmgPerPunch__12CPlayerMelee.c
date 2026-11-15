// GetDmgPerPunch__12CPlayerMelee @0x108f80 size=179
double GetDmgPerPunch__12CPlayerMelee(double a0, float a1)
{
    double v2;  // mm7
    double v3;  // mm7
    double v4;  // mm7
    float v0;  // [bp-0x18]

    if (*(int *)(*(int *)(*(unsigned int *)&a1 + 304) + 208))
    {
        v2 = 2.0;
        v0 = 2.0f;
    }
    else
    {
        v0 = 1.0;
    }
    if (*(int *)(*(int *)(*(unsigned int *)&a1 + 304) + 212))
    {
        v3 = 0.5;
    }
    else
    {
        if (!*(int *)(*(int *)(*(unsigned int *)&a1 + 304) + 216))
            goto LABEL_508feb;
        v3 = 1.2;
    }
    v2 = v3 * v0;
    v0 = (float)v2;
LABEL_508feb:
    CPlayerMelee::GetPowerRatio(a1, *(int *)(*(unsigned int *)&a1 + 296));
    v0 = (float)(v2 * v0);
    v4 = 1.0;
    if (1.0 <= v0)
    {
        v4 = 5.0;
        if (5.0 >= v0)
            return a0;
    }
    v0 = (float)v4;
    return a0;
}

