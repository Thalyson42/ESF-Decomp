// MonsterThink__12CBaseMonster @0xd4530 size=228
typedef struct st_4d4530_0 {
    float field_0;
} st_4d4530_0;

extern st_4d4530_0 *gpGlobals;

unsigned int MonsterThink__12CBaseMonster(double a0, float a1)
{
    double v2;  // mm7
    unsigned int v4;  // edx
    unsigned int v5;  // eax
    float v0;  // [bp-0x18]

    v2 = 0.1 + *(float *)gpGlobals;
    *(float *)(*(int *)a1 + 260) = (float)v2;
    (*(int *)(*(int *)(*(unsigned int *)&a1 + 96) + 240))(a1);
    CBaseAnimating::StudioFrameAdvance(a1, 0);
    v0 = (float)v2;
    if (*(int *)(*(unsigned int *)&a1 + 384) != 6 && *(int *)(*(unsigned int *)&a1 + 384) != 8 && *(int *)(*(unsigned int *)&a1 + 372) == 1 && *(int *)(*(unsigned int *)&a1 + 120))
    {
        v4 = (!*(int *)(*(unsigned int *)&a1 + 124) ? CBaseAnimating::LookupActivityHeaviest(a1, *(int *)(*(unsigned int *)&a1 + 372)) : CBaseAnimating::LookupActivity(a1, 1));
        if (v4 != 0xffffffff)
        {
            *(unsigned int *)(*(int *)a1 + 296) = v4;
            CBaseAnimating::ResetSequenceInfo(a1);
        }
    }
    v5 = CBaseAnimating::DispatchAnimEvents(a1, v0);
    if (!*(int *)(*(unsigned int *)&a1 + 532))
        return v5;
    return (*(int *)(*(int *)(*(unsigned int *)&a1 + 96) + 292))(a1, v0);
}

