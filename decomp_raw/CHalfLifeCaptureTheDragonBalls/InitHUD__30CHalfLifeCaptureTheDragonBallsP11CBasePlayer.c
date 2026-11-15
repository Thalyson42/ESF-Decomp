// InitHUD__30CHalfLifeCaptureTheDragonBallsP11CBasePlayer @0x9b4c0 size=421
typedef struct st_49b4c0_4 {
    char padding_0[160];
    struct st_49b4c0_2 *field_a0;
} st_49b4c0_4;

typedef struct st_49b4c0_5 {
    struct st_49b4c0_0 *field_0;
    char padding_4[92];
    struct st_49b4c0_4 *field_60;
    char padding_64[1788];
    unsigned int field_760;
} st_49b4c0_5;

typedef struct st_49b4c0_1 {
    struct st_49b4c0_0 *field_0;
} st_49b4c0_1;

typedef struct st_49b4c0_2 {
    unsigned int field_0;
} st_49b4c0_2;

typedef struct st_49b4c0_0 {
    char padding_0[520];
    unsigned int field_208;
} st_49b4c0_0;

typedef struct st_49b4c0_3 {
    char padding_0[144];
    int field_90;
} st_49b4c0_3;

extern unsigned int gmsgDragonBallEnt;
extern st_49b4c0_2 *g_engfuncs.pfnMessageBegin;
extern st_49b4c0_2 *g_engfuncs.pfnMessageEnd;
extern st_49b4c0_2 *g_engfuncs.pfnWriteByte;
extern st_49b4c0_2 *g_engfuncs.pfnWriteShort;
extern st_49b4c0_2 *g_engfuncs.pfnIndexOfEdict;
extern st_49b4c0_3 *gpGlobals;

int InitHUD__30CHalfLifeCaptureTheDragonBallsP11CBasePlayer(int a0, st_49b4c0_0 **a1)
{
    st_49b4c0_1 **v3;  // edi
    st_49b4c0_5 *v4;  // edi
    unsigned int v0;  // [bp-0x3c]
    int v1;  // [bp-0xc]
    int iter;  // [bp-0x8]

    iter = 0;
    v1 = a0 + 632;
    do
    {
        v3 = iter * 4;
        if (*(int *)((char *)v3 + v1))
        {
            g_engfuncs.pfnMessageBegin(1, gmsgDragonBallEnt, 0, *a1->field_208);
            g_engfuncs.pfnWriteByte(iter);
            v0 = g_engfuncs.pfnIndexOfEdict(*(int *)(*(int *)*(int *)((char *)v3 + v1) + 520));
            g_engfuncs.pfnWriteShort(v0);
            g_engfuncs.pfnMessageEnd(v0);
        }
    } while ((iter += 1, iter <= 6));
    iter = 1;
    while (iter <= gpGlobals->field_90)
    {
        v4 = UTIL_PlayerByIndex(iter);
        if (!v4)
        {
            iter += 1;
        }
        else if (!v4->field_60->field_a0(v4))
        {
            iter += 1;
        }
        else if (v4->field_760)
        {
            g_engfuncs.pfnMessageBegin(1, gmsgDragonBallEnt, 0, *a1->field_208);
            g_engfuncs.pfnWriteByte(v4->field_760 - 1);
            v0 = g_engfuncs.pfnIndexOfEdict(v4->field_0->field_208);
            g_engfuncs.pfnWriteShort(v0);
            g_engfuncs.pfnMessageEnd(v0);
            iter += 1;
        }
        else
        {
            iter += 1;
        }
    }
    return CHalfLifeTeamplay::InitHUD(a0, a1);
}

