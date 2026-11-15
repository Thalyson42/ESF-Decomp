// PrimaryAttack__11CSpiritBomb @0x1216c0 size=757
typedef struct st_5216c0_0 {
    unsigned int field_0;
} st_5216c0_0;

extern unsigned int gmsgAddEffect;
extern st_5216c0_0 *g_engfuncs.pfnMessageBegin;
extern st_5216c0_0 *g_engfuncs.pfnMessageEnd;
extern st_5216c0_0 *g_engfuncs.pfnWriteByte;
extern st_5216c0_0 *g_engfuncs.pfnWriteShort;
extern st_5216c0_0 *g_engfuncs.pfnWriteCoord;
extern st_5216c0_0 *g_engfuncs.pfnIndexOfEdict;

double PrimaryAttack__11CSpiritBomb(float idx)
{
    unsigned int *v9;  // ecx
    unsigned int index;  // edx
    unsigned int v11;  // eax
    double v12;  // mm7
    double v13;  // mm7
    double v14;  // mm7
    double v15;  // mm7
    char v0;  // [bp-0x84]
    float v1;  // [bp-0x74]
    float v2;  // [bp-0x44]
    float v3;  // [bp-0x40]
    float v4;  // [bp-0x3c]
    float v5;  // [bp-0x24]
    float v6;  // [bp-0x20]
    float v7;  // [bp-0x1c]

    if (*(int *)(*(unsigned int *)&idx + 208))
        return v15;
    if (!*(int *)(*(int *)(*(unsigned int *)&idx + 128) + 820))
    {
        UTIL_MakeVectors(*(int *)*(int *)(*(unsigned int *)&idx + 128) + 80);
        v9 = *(int *)(*(unsigned int *)&idx + 128);
        v2 = 0;
        v3 = 0;
        v4 = 200.0f;
        index = *v9 + 8;
        v5 = *(float *)(*v9 + 8) + v2;
        v6 = *(float *)(index + 4) + v3;
        v7 = *(float *)(index + 8) + v4;
        (*(int *)(v9[24] + 480))(&v2, v9);
        UTIL_TraceLine(&v2, &v5, 1, *(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 128) + 520), &v0);
        if (1.0 > v1)
            return 1.0;
        CBasePlayer::EmitClassSound(*(int *)(*(unsigned int *)&idx + 128), "spiritbomb_charge.wav");
        *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 128) + 820) = 1;
        *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 128) + 872) = 1;
        *(unsigned int *)(*(unsigned int *)&idx + 0xcc) = 1;
        *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 128) + 1876) = 0;
        *(unsigned int *)(*(unsigned int *)&idx + 196) = 0;
        v2 = v5;
        v3 = v6;
        v4 = v7;
        *(unsigned int *)(*(unsigned int *)&idx + 200) = CSpiritBombAttack::CreateSpiritBomb(*(int *)*(int *)(*(unsigned int *)&idx + 128), &v2, *(short *)(*(unsigned int *)&idx + 220));
        g_engfuncs.pfnMessageBegin(2, gmsgAddEffect, *(int *)*(int *)(*(unsigned int *)&idx + 128) + 8, 0);
        g_engfuncs.pfnWriteByte(1);
        v11 = g_engfuncs.pfnIndexOfEdict(*(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 200) + 520));
        g_engfuncs.pfnWriteShort(v11);
        g_engfuncs.pfnWriteCoord(*(float *)(*(int *)*(int *)(*(unsigned int *)&idx + 200) + 8));
        g_engfuncs.pfnWriteCoord(*(float *)(*(int *)*(int *)(*(unsigned int *)&idx + 200) + 12));
        v12 = *(float *)(*(int *)*(int *)(*(unsigned int *)&idx + 200) + 16);
        g_engfuncs.pfnWriteCoord((float)v12);
        g_engfuncs.pfnMessageEnd();
    }
    else if (!CBasePlayer::UseKi(*(int *)(*(unsigned int *)&idx + 128), 0))
    {
        if (*(int *)(*(int *)(*(unsigned int *)&idx + 128) + 820))
        {
            CSpiritBomb::Shoot1(idx);
            return v13;
        }
        return v14;
    }
    else
    {
        if (*(int *)(*(unsigned int *)&idx + 196) <= 90)
        {
            if (*(char *)(*(unsigned int *)&idx + 196) & 1)
                CSpiritBombAttack::Grow(*(int *)(*(unsigned int *)&idx + 200));
            *(unsigned int *)(*(unsigned int *)&idx + 196) = *(int *)(*(unsigned int *)&idx + 196) + 1;
            CBasePlayer::DrawChargeBar(*(int *)(*(unsigned int *)&idx + 128), *(int *)(*(unsigned int *)&idx + 196) * 10 / 9);
        }
    }
    UTIL_WeaponTimeBase();
    *(float *)(*(unsigned int *)&idx + 156) = (float)(v12 + 0.2);
    return v12 + 0.2;
}

