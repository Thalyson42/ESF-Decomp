// TakeBean__11CBasePlayer @0xf5e40 size=173
typedef struct st_4f5e40_0 {
    unsigned int field_0;
} st_4f5e40_0;

extern unsigned int gmsgSensuBean;
extern st_4f5e40_0 *g_engfuncs.pfnMessageBegin;
extern st_4f5e40_0 *g_engfuncs.pfnMessageEnd;
extern st_4f5e40_0 *g_engfuncs.pfnWriteByte;

unsigned int TakeBean__11CBasePlayer(float idx)
{
    unsigned int v0;  // [bp-0x2c]

    if (*(int *)(*(unsigned int *)&idx + 1884) > 0)
    {
        *(unsigned int *)(*(unsigned int *)&idx + 1884) = *(int *)(*(unsigned int *)&idx + 1884) - 1;
        g_engfuncs.pfnMessageBegin(1, gmsgSensuBean, 0, *(int *)(*(int *)idx + 520));
        v0 = *(int *)(*(unsigned int *)&idx + 1884);
        g_engfuncs.pfnWriteByte(v0);
        g_engfuncs.pfnMessageEnd(v0);
        *(float *)(*(int *)idx + 608) = 1000.0f;
        CBasePlayer::SetPowerLevel(idx, *(int *)(*(unsigned int *)&idx + 1864));
        *(float *)(*(int *)idx + 352) = (float)*(int *)(*(unsigned int *)&idx + 588);
        return 1;
    }
    return 0;
}

