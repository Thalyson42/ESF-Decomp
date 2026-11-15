// AddClientAfterFX__11CBasePlayer @0xf6290 size=191
typedef struct st_4f6290_0 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[500];
    unsigned int field_208;
} st_4f6290_0;

typedef struct st_4f6290_1 {
    unsigned int field_0;
} st_4f6290_1;

extern unsigned int gmsgAfterFX;
extern st_4f6290_1 *g_engfuncs.pfnMessageBegin;
extern st_4f6290_1 *g_engfuncs.pfnMessageEnd;
extern st_4f6290_1 *g_engfuncs.pfnWriteByte;
extern st_4f6290_1 *g_engfuncs.pfnWriteCoord;
extern st_4f6290_1 *g_engfuncs.pfnIndexOfEdict;

int AddClientAfterFX__11CBasePlayer(st_4f6290_0 **a0)
{
    unsigned int v3;  // eax
    unsigned int v0;  // [bp-0x1c]
    unsigned int v1;  // [bp-0x18]
    unsigned int v2;  // [bp-0x14]

    g_engfuncs.pfnMessageBegin(4, gmsgAfterFX, &*a0->field_8, 0, v0, v1, v2);
    v3 = g_engfuncs.pfnIndexOfEdict(*a0->field_208);
    g_engfuncs.pfnWriteByte(v3);
    g_engfuncs.pfnWriteCoord(*a0->field_8);
    g_engfuncs.pfnWriteCoord(*a0->field_c);
    g_engfuncs.pfnWriteCoord(*a0->field_10);
    return g_engfuncs.pfnMessageEnd();
}

