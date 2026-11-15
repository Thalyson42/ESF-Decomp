// Use__10CEnvFunnelP11CBaseEntityT18USE_TYPEf @0xb6860 size=266
typedef struct st_4b6860_0 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[240];
    unsigned int field_104;
    char padding_108[152];
    char field_1a0;
} st_4b6860_0;

typedef struct st_4b6860_1 {
    struct st_4b6860_0 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[88];
    unsigned int field_6c;
} st_4b6860_1;

typedef struct st_4b6860_2 {
    float field_0;
} st_4b6860_2;

typedef struct st_4b6860_3 {
    unsigned int field_0;
} st_4b6860_3;

extern char SUB_Remove__11CBaseEntity;
extern st_4b6860_3 *g_engfuncs.pfnMessageBegin;
extern st_4b6860_3 *g_engfuncs.pfnMessageEnd;
extern st_4b6860_3 *g_engfuncs.pfnWriteByte;
extern st_4b6860_3 *g_engfuncs.pfnWriteShort;
extern st_4b6860_3 *g_engfuncs.pfnWriteCoord;
extern st_4b6860_2 *gpGlobals;

short Use__10CEnvFunnelP11CBaseEntityT18USE_TYPEf(st_4b6860_1 *a0)
{
    unsigned int *v4;  // eax
    unsigned int v0;  // [bp-0x2c]
    unsigned int v1;  // [bp-0x1c]
    unsigned int v2;  // [bp-0x18]
    unsigned int v3;  // [bp-0x14]

    g_engfuncs.pfnMessageBegin(0, 23, 0, 0, v1, v2, v3);
    g_engfuncs.pfnWriteByte(100);
    g_engfuncs.pfnWriteCoord(*(float *)&a0->field_0->field_8);
    g_engfuncs.pfnWriteCoord(*(float *)&a0->field_0->field_c);
    g_engfuncs.pfnWriteCoord(*(float *)&a0->field_0->field_10);
    g_engfuncs.pfnWriteShort(a0->field_6c);
    if (a0->field_0->field_1a0 & 1)
    {
        v0 = 1;
        v4 = g_engfuncs.pfnWriteShort;
    }
    else
    {
        v0 = 0;
        v4 = g_engfuncs.pfnWriteShort;
    }
    v4(v0);
    a0->field_c = _INSERT(g_engfuncs.pfnMessageEnd(), 0, 0) | 0xffff0000;
    a0->field_10 = &SUB_Remove__11CBaseEntity;
    *(float *)&a0->field_0->field_104 = *(float *)gpGlobals;
    return (unsigned short)gpGlobals;
}

