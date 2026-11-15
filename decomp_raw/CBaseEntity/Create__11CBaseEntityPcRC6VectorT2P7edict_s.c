// Create__11CBaseEntityPcRC6VectorT2P7edict_s @0x9da00 size=262
typedef struct st_49da00_3 {
    char padding_0[124];
    struct st_49da00_4 *field_7c;
} st_49da00_3;

typedef struct st_49da00_4 {
    struct st_49da00_2 *field_0;
} st_49da00_4;

typedef struct st_49da00_2 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[60];
    unsigned int field_50;
    unsigned int field_54;
    unsigned int field_58;
    char padding_5c[316];
    unsigned int field_198;
    char padding_19c[108];
    int field_208;
} st_49da00_2;

typedef struct st_49da00_0 {
    char padding_0[152];
    unsigned int field_98;
} st_49da00_0;

typedef struct st_49da00_1 {
    unsigned int field_0;
} st_49da00_1;

extern st_49da00_1 *g_engfuncs.pfnCreateNamedEntity;
extern st_49da00_1 *g_engfuncs.pfnAlertMessage;
extern st_49da00_1 *g_engfuncs.pfnPEntityOfEntOffset;
extern st_49da00_1 *g_engfuncs.pfnEntOffsetOfPEntity;
extern st_49da00_0 *gpGlobals;

st_49da00_2 ** Create__11CBaseEntityPcRC6VectorT2P7edict_s(unsigned int a0, unsigned int *a1, unsigned int *a2, unsigned int a3)
{
    st_49da00_3 *v1;  // esi
    st_49da00_3 *v2;  // eax
    st_49da00_2 **v3;  // esi
    unsigned int *v4;  // edx
    unsigned int *v5;  // edx
    unsigned int v0;  // [bp-0x8]

    v1 = g_engfuncs.pfnCreateNamedEntity(a0 - gpGlobals->field_98);
    v0 = 0;
    if (!v1 || !g_engfuncs.pfnEntOffsetOfPEntity(v1))
        v0 = 1;
    if (v0)
    {
        g_engfuncs.pfnAlertMessage(1, "NULL Ent in Create!\n");
        return NULL;
    }
    v2 = v1;
    if (v2 || (v2 = g_engfuncs.pfnPEntityOfEntOffset(0), v2))
        v3 = v2->field_7c;
    else
        v3 = NULL;
    *v3->field_198 = a3;
    v4 = *v3;
    v4[2] = *a1;
    v4[3] = a1[1];
    v4[4] = a1[2];
    v5 = *v3;
    v5[20] = *a2;
    v5[21] = a2[1];
    v5[22] = a2[2];
    DispatchSpawn(*v3->field_208);
    return v3;
}

