// UTIL_PrecacheOther__FPCc @0x134f40 size=238
typedef struct st_534f40_4 {
    char padding_0[124];
    struct st_534f40_3 *field_7c;
} st_534f40_4;

typedef struct st_534f40_2 {
    char padding_0[12];
    struct st_534f40_1 *field_c;
} st_534f40_2;

typedef struct st_534f40_1 {
    unsigned int field_0;
} st_534f40_1;

typedef struct st_534f40_5 {
    char padding_0[520];
    struct st_534f40_4 *field_208;
} st_534f40_5;

typedef struct st_534f40_3 {
    char padding_0[96];
    struct st_534f40_2 *field_60;
} st_534f40_3;

typedef struct st_534f40_0 {
    char padding_0[152];
    unsigned int field_98;
} st_534f40_0;

extern st_534f40_1 *g_engfuncs.pfnRemoveEntity;
extern st_534f40_1 *g_engfuncs.pfnCreateNamedEntity;
extern st_534f40_1 *g_engfuncs.pfnAlertMessage;
extern st_534f40_1 *g_engfuncs.pfnPEntityOfEntOffset;
extern st_534f40_1 *g_engfuncs.pfnEntOffsetOfPEntity;
extern st_534f40_0 *gpGlobals;

int UTIL_PrecacheOther__FPCc(unsigned int a0)
{
    st_534f40_5 *v1;  // esi
    st_534f40_5 *v2;  // eax
    st_534f40_4 *v3;  // eax
    st_534f40_3 *v4;  // edx
    unsigned int v0;  // [bp-0x8]

    v1 = g_engfuncs.pfnCreateNamedEntity(a0 - gpGlobals->field_98);
    v0 = 0;
    if (!v1 || !g_engfuncs.pfnEntOffsetOfPEntity(v1))
        v0 = 1;
    if (v0)
        return g_engfuncs.pfnAlertMessage(1, "NULL Ent in UTIL_PrecacheOther\n");
    v2 = (!v1 ? NULL : (struct st_534f40_5 *)&v1->padding_0[128]);
    v3 = v2->field_208;
    if (v2->field_208 || (v3 = g_engfuncs.pfnPEntityOfEntOffset(0), v3))
        v4 = v3->field_7c;
    else
        v4 = NULL;
    if (!v4)
        return g_engfuncs.pfnRemoveEntity(v1);
    v4->field_60->field_c(v4);
    return g_engfuncs.pfnRemoveEntity(v1);
}

