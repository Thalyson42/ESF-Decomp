// DragonBallDrop__30CHalfLifeCaptureTheDragonBallsiP11CDragonBall @0x9b9b0 size=180
typedef struct st_49b9b0_1 {
    struct st_49b9b0_0 *field_0;
} st_49b9b0_1;

typedef struct st_49b9b0_0 {
    char padding_0[520];
    unsigned int field_208;
} st_49b9b0_0;

typedef struct st_49b9b0_2 {
    unsigned int field_0;
} st_49b9b0_2;

extern unsigned int gmsgDragonBallEnt;
extern st_49b9b0_2 *g_engfuncs.pfnMessageBegin;
extern st_49b9b0_2 *g_engfuncs.pfnMessageEnd;
extern st_49b9b0_2 *g_engfuncs.pfnWriteByte;
extern st_49b9b0_2 *g_engfuncs.pfnWriteShort;
extern st_49b9b0_2 *g_engfuncs.pfnIndexOfEdict;

int DragonBallDrop__30CHalfLifeCaptureTheDragonBallsiP11CDragonBall(unsigned int a0, unsigned int a1, st_49b9b0_0 **a2)
{
    unsigned int v3;  // edi
    unsigned int v4;  // eax
    unsigned int v0;  // [bp-0x3c]
    unsigned int v1;  // [bp-0xc]
    st_49b9b0_1 **v2;  // [bp-0x8]

    v3 = a1 - 1;
    if (v3 > 6)
        return v4;
    v2 = v3 * 4;
    v1 = a0 + 632;
    *(st_49b9b0_0 ***)((char *)v2 + v1) = a2;
    g_engfuncs.pfnMessageBegin(2, gmsgDragonBallEnt, 0, 0);
    g_engfuncs.pfnWriteByte(v3);
    v0 = g_engfuncs.pfnIndexOfEdict(*(int *)(*(int *)*(int *)((char *)v2 + v1) + 520));
    g_engfuncs.pfnWriteShort(v0);
    return g_engfuncs.pfnMessageEnd(v0);
}

