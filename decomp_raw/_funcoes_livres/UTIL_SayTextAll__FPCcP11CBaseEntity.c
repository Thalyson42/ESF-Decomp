// UTIL_SayTextAll__FPCcP11CBaseEntity @0x132b40 size=133
typedef struct st_532b40_1 {
    char padding_0[520];
    unsigned int field_208;
} st_532b40_1;

typedef struct st_532b40_0 {
    unsigned int field_0;
} st_532b40_0;

extern unsigned int gmsgSayText;
extern st_532b40_0 *g_engfuncs.pfnMessageBegin;
extern st_532b40_0 *g_engfuncs.pfnMessageEnd;
extern st_532b40_0 *g_engfuncs.pfnWriteByte;
extern st_532b40_0 *g_engfuncs.pfnWriteString;
extern st_532b40_0 *g_engfuncs.pfnIndexOfEdict;

int UTIL_SayTextAll__FPCcP11CBaseEntity(unsigned int a0, st_532b40_1 **a1)
{
    unsigned int v3;  // eax
    unsigned int v0;  // [bp-0x1c]
    unsigned int v1;  // [bp-0x18]
    unsigned int v2;  // [bp-0x14]

    g_engfuncs.pfnMessageBegin(2, gmsgSayText, 0, 0, v0, v1, v2);
    v3 = g_engfuncs.pfnIndexOfEdict(*a1->field_208);
    g_engfuncs.pfnWriteByte(v3);
    g_engfuncs.pfnWriteString(a0);
    return g_engfuncs.pfnMessageEnd();
}

