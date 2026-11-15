// Holster__11CSpiritBombi @0x120d30 size=361
typedef struct st_520d30_0 {
    unsigned int field_0;
} st_520d30_0;

extern unsigned int gmsgRemoveEffect;
extern st_520d30_0 *g_engfuncs.pfnMessageBegin;
extern st_520d30_0 *g_engfuncs.pfnMessageEnd;
extern st_520d30_0 *g_engfuncs.pfnWriteShort;
extern st_520d30_0 *g_engfuncs.pfnIndexOfEdict;

int Holster__11CSpiritBombi(float idx)
{
    unsigned int v0;  // [bp-0x2c]

    if (!*(int *)(*(int *)(*(unsigned int *)&idx + 128) + 820))
        return (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 364))(idx);
    *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 128) + 1876) = 0x3f800000;
    *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 128) + 820) = 0;
    *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 128) + 824) = 0;
    *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 128) + 872) = 0;
    CBasePlayer::DrawChargeBar(*(int *)(*(unsigned int *)&idx + 128), 0);
    EMIT_SOUND_DYN(*(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 128) + 520), 2, "common/null.wav", 0x3f800000, 0.800000011920929f, 0, 100);
    if (*(int *)(*(unsigned int *)&idx + 0xcc))
    {
        g_engfuncs.pfnMessageBegin(2, gmsgRemoveEffect, 0, 0);
        v0 = g_engfuncs.pfnIndexOfEdict(*(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 200) + 520));
        g_engfuncs.pfnWriteShort(v0);
        g_engfuncs.pfnMessageEnd(v0);
        (*(int *)(*(int *)(*(int *)(*(unsigned int *)&idx + 200) + 96) + 508))(*(int *)(*(unsigned int *)&idx + 200));
        *(unsigned int *)(*(unsigned int *)&idx + 200) = 0;
    }
    else if (*(int *)(*(unsigned int *)&idx + 208))
    {
        (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 356))(idx);
    }
    return (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 364))(idx);
}

