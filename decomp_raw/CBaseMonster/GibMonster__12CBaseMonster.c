// GibMonster__12CBaseMonster @0xa46e0 size=353
typedef struct st_4a46e0_1 {
    float field_0;
} st_4a46e0_1;

typedef struct st_4a46e0_0 {
    unsigned int field_0;
} st_4a46e0_0;

extern char SUB_Remove__11CBaseEntity;
extern st_4a46e0_0 *g_engfuncs.pfnCVarGetFloat;
extern st_4a46e0_1 *gpGlobals;

double GibMonster__12CBaseMonster(float idx)
{
    unsigned int v1;  // edi
    double v2;  // mm7
    double v3;  // mm0

    v1 = 0;
    v2 = 0.800000011920929;
    EMIT_SOUND_DYN(*(int *)(*(int *)idx + 520), 1, "common/bodysplat.wav", 0x3f800000, 0.800000011920929f, 0, 100);
    if ((*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 468))(idx))
    {
        g_engfuncs.pfnCVarGetFloat("violence_hgibs");
        if (v3 != 0.0)
        {
            CGib::SpawnHeadGib(*(int *)idx);
            CGib::SpawnRandomGibs(*(int *)idx, 4, 1);
        }
    }
    else
    {
        if (!(*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 472))(idx))
            goto LABEL_4a47e6;
        g_engfuncs.pfnCVarGetFloat("violence_agibs");
        if (v3 != 0.0)
            CGib::SpawnRandomGibs(*(int *)idx, 4, 0);
    }
    v2 = 0.0;
    v1 = 1;
LABEL_4a47e6:
    if ((*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 160))(idx))
    {
        return v2;
    }
    else if (v1)
    {
        *(unsigned int *)(*(unsigned int *)&idx + 12) = 0xffff0000;
        *(char **)(*(unsigned int *)&idx + 16) = &SUB_Remove__11CBaseEntity;
        *(float *)(*(int *)idx + 260) = *(float *)gpGlobals;
        return v2;
    }
    else
    {
        (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 476))(idx);
        return v2;
    }
}

