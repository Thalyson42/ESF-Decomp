// StopPowerUp__11CBasePlayer @0xf2ae0 size=148
typedef struct st_4f2ae0_1 {
    struct st_4f2ae0_0 *field_0;
    char padding_4[812];
    unsigned int field_330;
    char padding_334[1056];
    unsigned int field_754;
} st_4f2ae0_1;

typedef struct st_4f2ae0_0 {
    char padding_0[520];
    unsigned int field_208;
} st_4f2ae0_0;

typedef struct st_4f2ae0_2 {
    unsigned int field_0;
} st_4f2ae0_2;

extern unsigned int gmsgStopPowerupFX;
extern st_4f2ae0_2 *g_engfuncs.pfnMessageBegin;
extern st_4f2ae0_2 *g_engfuncs.pfnMessageEnd;
extern st_4f2ae0_2 *g_engfuncs.pfnWriteByte;
extern st_4f2ae0_2 *g_engfuncs.pfnIndexOfEdict;

int StopPowerUp__11CBasePlayer(st_4f2ae0_1 *a0)
{
    unsigned int v1;  // eax
    unsigned int v0;  // [bp-0x2c]

    if (!a0->field_330)
        return v1;
    a0->field_754 = 0x3f800000;
    a0->field_330 = 0;
    g_engfuncs.pfnMessageBegin(2, gmsgStopPowerupFX, &a0->field_0->padding_0[8], 0);
    v0 = g_engfuncs.pfnIndexOfEdict(a0->field_0->field_208);
    g_engfuncs.pfnWriteByte(v0);
    return g_engfuncs.pfnMessageEnd(v0);
}

