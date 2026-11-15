// StartPowerUp__11CBasePlayer @0xf28a0 size=569
typedef struct st_4f28a0_0 {
    float field_0;
    float field_4;
    float field_8;
    unsigned int field_c;
} st_4f28a0_0;

typedef struct st_4f28a0_1 {
    unsigned int field_0;
} st_4f28a0_1;

extern unsigned int gmsgPowerupFX;
extern st_4f28a0_0 g_vecAuraColor;
extern st_4f28a0_1 *g_engfuncs.pfnMessageBegin;
extern st_4f28a0_1 *g_engfuncs.pfnMessageEnd;
extern st_4f28a0_1 *g_engfuncs.pfnWriteByte;
extern st_4f28a0_1 *g_engfuncs.pfnIndexOfEdict;

unsigned int StartPowerUp__11CBasePlayer(float idx)
{
    unsigned int v7;  // eax
    unsigned int v8;  // eax
    st_4f28a0_0 *v9;  // edx
    unsigned int v10;  // eax
    int v0;  // [bp-0x2c]
    unsigned short v1;  // [bp-0x28]
    unsigned short v2;  // [bp-0x26]
    float v3;  // [bp-0x24]
    float v4;  // [bp-0x20]
    float v5;  // [bp-0x1c]

    v7 = *(int *)idx;
    if (*(char *)(v7 + 423) & 4)
    {
        return v7;
    }
    else if (*(int *)(*(unsigned int *)&idx + 868))
    {
        return v7;
    }
    else if (*(int *)(*(unsigned int *)&idx + 816))
    {
        return v7;
    }
    else if (*(int *)(*(unsigned int *)&idx + 820))
    {
        return v7;
    }
    else if (!*(int *)(*(unsigned int *)&idx + 828))
    {
        v8 = (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 140))(idx);
        if (!v8)
        {
            return v8;
        }
        else if (*(int *)(*(unsigned int *)&idx + 808))
        {
            return v8;
        }
        else if (*(int *)(*(unsigned int *)&idx + 832))
        {
            return v8;
        }
        else if (*(int *)(*(unsigned int *)&idx + 1904))
        {
            return v8;
        }
        else if (*(int *)(*(unsigned int *)&idx + 892))
        {
            return v8;
        }
        else if (*(int *)(*(unsigned int *)&idx + 1144))
        {
            return v8;
        }
        else if (!*(int *)(*(unsigned int *)&idx + 1724))
        {
            if (*(int *)(*(unsigned int *)&idx + 812))
                CBasePlayer::StopBlock(idx);
            if (*(int *)(*(unsigned int *)&idx + 804))
                CBasePlayer::StopTurbo(idx);
            if (!(*(char *)(*(int *)idx + 421) & 2) && !*(int *)(*(unsigned int *)&idx + 800))
                CBasePlayer::StartFly(idx);
            *(unsigned int *)(*(unsigned int *)&idx + 1876) = 0;
            *(unsigned int *)(*(unsigned int *)&idx + 816) = 1;
            v9 = &(&g_vecAuraColor.field_0)[3 * (*(int *)(*(int *)(*(int *)(*(unsigned int *)&idx + 1892) + 4) + 56))(*(int *)(*(unsigned int *)&idx + 1892))];
            v3 = v9->field_0;
            v4 = v9->field_4;
            v5 = v9->field_8;
            g_engfuncs.pfnMessageBegin(2, gmsgPowerupFX, *(int *)idx + 8, 0);
            v10 = g_engfuncs.pfnIndexOfEdict(*(int *)(*(int *)idx + 520));
            g_engfuncs.pfnWriteByte(v10);
            v2 = __fnstcw();
            v1 = v2 | 0xc00;
            v0 = (int)v3;
            g_engfuncs.pfnWriteByte(v0);
            v2 = __fnstcw();
            v1 = v2 | 0xc00;
            v0 = (int)v4;
            g_engfuncs.pfnWriteByte(v0);
            v2 = __fnstcw();
            v1 = v2 | 0xc00;
            v0 = (int)v5;
            g_engfuncs.pfnWriteByte(v0);
            return g_engfuncs.pfnMessageEnd();
        }
        else
        {
            return v8;
        }
    }
    else
    {
        return v7;
    }
}

