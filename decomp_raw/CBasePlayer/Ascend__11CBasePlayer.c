// Ascend__11CBasePlayer @0xf1460 size=611
typedef struct st_4f1460_0 {
    float field_0;
} st_4f1460_0;

typedef struct st_4f1460_1 {
    unsigned int field_0;
} st_4f1460_1;

extern unsigned int gmsgTransform;
extern st_4f1460_1 *g_engfuncs.pfnMessageBegin;
extern st_4f1460_1 *g_engfuncs.pfnMessageEnd;
extern st_4f1460_1 *g_engfuncs.pfnWriteByte;
extern st_4f1460_1 *g_engfuncs.pfnWriteLong;
extern st_4f1460_0 *gpGlobals;

unsigned int * Ascend__11CBasePlayer(double a0, double a1, float idx)
{
    int v5;  // eax
    unsigned int v6;  // eax
    float v0;  // [bp-0x10]
    unsigned short v1;  // [bp-0xc]
    unsigned short v2;  // [bp-0xa]
    int v3;  // [bp-0x8]

    CBasePlayer::StopAscending(idx);
    __builtin_delete(*(int *)(*(unsigned int *)&idx + 1892));
    *(int *)(*(unsigned int *)&idx + 1892) = *(int *)(*(unsigned int *)&idx + 1896);
    *(float *)(*(int *)idx + 608) = (float)(*(float *)(*(int *)idx + 608) - 100.0);
    if (0.0 > *(float *)(*(int *)idx + 608))
        *(float *)(*(int *)idx + 608) = 0.0f;
    if (*(int *)(*(unsigned int *)&idx + 828))
    {
        *(unsigned int *)(*(unsigned int *)&idx + 888) = 1;
    }
    else
    {
        CBasePlayer::RemoveAllWeapons(idx, 0);
        (*(int *)(*(int *)(*(int *)(*(unsigned int *)&idx + 1892) + 4) + 48))(*(int *)(*(unsigned int *)&idx + 1892));
    }
    (*(int *)(*(int *)(*(int *)(*(unsigned int *)&idx + 1892) + 4) + 44))(*(int *)(*(unsigned int *)&idx + 1892));
    *(float *)(*(unsigned int *)&idx + 880) = (float)(0.0 * *(float *)(*(unsigned int *)&idx + 880));
    (*(int *)(*(int *)(*(int *)(*(unsigned int *)&idx + 1892) + 4) + 44))(*(int *)(*(unsigned int *)&idx + 1892));
    v2 = __fnstcw();
    v1 = v2 | 0xc00;
    v3 = (int)(a0 * (double)*(int *)(*(unsigned int *)&idx + 1864));
    CBasePlayer::SetMaxPowerLevel(idx, v3);
    CBasePlayer::SetPowerLevel(idx, v3);
    v0 = (float)(*(float *)(*(int *)idx + 352) / (double)*(int *)(*(unsigned int *)&idx + 588));
    v5 = (*(int *)(*(int *)(*(int *)(*(unsigned int *)&idx + 1892) + 4) + 16))(*(int *)(*(unsigned int *)&idx + 1892));
    *(int *)(*(unsigned int *)&idx + 588) = v5;
    CBasePlayer::SetMaxHealth(idx, v5);
    v2 = __fnstcw();
    v1 = v2 | 0xc00;
    v3 = (int)((double)*(int *)(*(unsigned int *)&idx + 588) * v0);
    if (v3 <= 0)
        *(unsigned int *)(*(int *)idx + 352) = 0x3f800000;
    else
        *(float *)(*(int *)idx + 352) = (float)v3;
    *(unsigned int *)(*(unsigned int *)&idx + 1868) = (*(int *)(*(int *)(*(int *)(*(unsigned int *)&idx + 1892) + 4) + 12))(*(int *)(*(unsigned int *)&idx + 1892));
    g_engfuncs.pfnMessageBegin(1, gmsgTransform, 0, *(int *)(*(int *)idx + 520));
    g_engfuncs.pfnWriteByte(0);
    v6 = (*(int *)(*(int *)(*(int *)(*(unsigned int *)&idx + 1892) + 4) + 40))(*(int *)(*(unsigned int *)&idx + 1892));
    g_engfuncs.pfnWriteLong(v6);
    g_engfuncs.pfnMessageEnd();
    CBaseClass::SetModel(*(int *)(*(unsigned int *)&idx + 1892));
    if (*(int *)(*(unsigned int *)&idx + 1900))
        CAura::SetColor(*(int *)(*(unsigned int *)&idx + 1900));
    if (*(int *)(*(unsigned int *)&idx + 1740) == 1)
        *(unsigned int *)(*(unsigned int *)&idx + 1740) = 2;
    *(float *)(*(unsigned int *)&idx + 932) = *(float *)gpGlobals;
    return gpGlobals;
}

