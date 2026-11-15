// StopObserving__11CBasePlayer @0xf0d30 size=232
typedef struct st_4f0d30_1 {
    char padding_0[384];
    unsigned int field_180;
} st_4f0d30_1;

typedef struct st_4f0d30_0 {
    unsigned int field_0;
} st_4f0d30_0;

extern unsigned int gmsgChangeView;
extern st_4f0d30_0 *g_engfuncs.pfnMessageBegin;
extern st_4f0d30_0 *g_engfuncs.pfnMessageEnd;
extern st_4f0d30_0 *g_engfuncs.pfnWriteByte;

int StopObserving__11CBasePlayer(float idx)
{
    st_4f0d30_1 *v1;  // eax
    unsigned int v2;  // eax

    if (!*(int *)(*(unsigned int *)&idx + 808))
        return v2;
    g_engfuncs.pfnMessageBegin(1, gmsgChangeView, 0, *(int *)(*(int *)idx + 520));
    g_engfuncs.pfnWriteByte(3);
    g_engfuncs.pfnWriteByte(0);
    g_engfuncs.pfnMessageEnd();
    *(unsigned int *)(*(unsigned int *)&idx + 808) = 1;
    *(char *)(*(unsigned int *)&idx + 784) = *(char *)(*(unsigned int *)&idx + 784) | 32;
    CBasePlayer::EnableControl(idx, 1);
    *(char *)(*(int *)idx + 280) = *(char *)(*(int *)idx + 280) & 127;
    *(unsigned int *)(*(unsigned int *)&idx + 808) = 0;
    *(char *)(*(unsigned int *)&idx + 784) = *(char *)(*(unsigned int *)&idx + 784) & 223;
    *(unsigned int *)(*(int *)idx + 384) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 2440) = 0;
    respawn(*(int *)idx, 0);
    v1 = *(int *)idx;
    *(float *)&v1->padding_0[260] = -1.0f;
    return v1;
}

