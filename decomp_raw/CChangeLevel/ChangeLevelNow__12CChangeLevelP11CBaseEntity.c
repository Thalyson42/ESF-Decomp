// ChangeLevelNow__12CChangeLevelP11CBaseEntity @0x12da60 size=615
typedef struct st_52da60_7 {
    char padding_0[124];
    struct st_52da60_8 *field_7c;
} st_52da60_7;

typedef struct st_52da60_11 {
    char padding_0[128];
    char field_80;
    char padding_81[7];
    unsigned int field_88;
    unsigned int field_8c;
    unsigned int field_90;
} st_52da60_11;

typedef struct st_52da60_6 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
} st_52da60_6;

typedef struct st_52da60_12 {
    char padding_0[24];
    struct st_52da60_1 *field_18;
} st_52da60_12;

typedef struct st_52da60_4 {
    struct st_52da60_3 *field_0;
    char padding_4[208];
    char field_d4;
    char padding_d5[47];
    char field_104;
    char padding_105[31];
    char field_124;
    char padding_125[31];
    unsigned int field_144;
    float field_148;
} st_52da60_4;

typedef struct st_52da60_1 {
    unsigned int field_0;
} st_52da60_1;

typedef struct st_52da60_8 {
    struct st_52da60_6 *field_0;
} st_52da60_8;

typedef struct st_52da60_3 {
    char padding_0[484];
    float field_1e4;
} st_52da60_3;

typedef struct st_52da60_9 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[436];
    unsigned int field_1c8;
    char padding_1cc[60];
    int field_208;
} st_52da60_9;

typedef struct st_52da60_10 {
    struct st_52da60_9 *field_0;
    char padding_4[96];
    unsigned int field_64;
} st_52da60_10;

typedef struct st_52da60_0 {
    char padding_0[28];
    struct st_52da60_1 *field_1c;
} st_52da60_0;

typedef struct st_52da60_5 {
    unsigned int field_0;
    char padding_4[156];
    unsigned int field_a0;
    unsigned int field_a4;
    unsigned int field_a8;
} st_52da60_5;

typedef struct st_52da60_2 {
    char padding_0[68];
    struct st_52da60_0 *field_44;
} st_52da60_2;

extern st_52da60_2 *g_pGameRules;
extern st_52da60_12 g_engfuncs;
extern st_52da60_1 *g_engfuncs.pfnAlertMessage;
extern st_52da60_1 *g_engfuncs.pfnPEntityOfEntOffset;
extern st_52da60_1 *g_engfuncs.pfnEntOffsetOfPEntity;
extern st_52da60_1 *g_engfuncs.pfnPEntityOfEntIndex;
extern st_52da60_5 *gpGlobals;
extern int st_szNextMap;
extern char st_szNextSpot;

unsigned int ChangeLevelNow__12CChangeLevelP11CBaseEntity(st_52da60_4 *a0, int a1)
{
    unsigned int v3;  // eax
    unsigned int i;  // eax
    st_52da60_11 *v13;  // esi
    unsigned int *v14;  // ecx
    st_52da60_7 *v6;  // eax
    st_52da60_6 **v7;  // eax
    unsigned int *v8;  // esi
    unsigned int v9;  // eax
    st_52da60_10 *v10;  // esi
    st_52da60_9 *v11;  // ecx
    unsigned int *v12;  // edx
    st_52da60_12 *v0;  // [bp-0x510]
    unsigned int v1;  // [bp-0x50c]
    st_52da60_6 **v2;  // [bp-0x508]

    v3 = 15;
    do
    {
        i = v3;
        v3 = i - 1;
    } while (i >= 1);
    if (g_pGameRules->field_44->field_1c(g_pGameRules))
    {
        return v9;
    }
    else if (a0->field_0->field_1e4 != *(float *)&gpGlobals->field_0)
    {
        a0->field_0->field_1e4 = *(float *)&gpGlobals->field_0;
        v6 = g_engfuncs.pfnPEntityOfEntIndex(1);
        if (v6 || (v6 = g_engfuncs.pfnPEntityOfEntOffset(0), v6))
            v7 = v6->field_7c;
        else
            v7 = NULL;
        v2 = v7;
        v8 = &a0->field_124;
        if (!CChangeLevel::InTransitionVolume(v7, v8))
        {
            v9 = g_engfuncs.pfnAlertMessage(2, "Player isn't in the transition volume %s, aborting\n", v8);
            return v9;
        }
        if (a0->field_144)
        {
            v10 = GetClassPtr__H1Z11CFireAndDie_PX01_PX01(0);
            if (v10)
            {
                v10->field_0->field_1c8 = a0->field_144;
                *(float *)&v10->field_64 = a0->field_148;
                v11 = v10->field_0;
                v12 = *v2;
                v11->field_8 = v12[2];
                v11->field_c = v12[3];
                v11->field_10 = v12[4];
                DispatchSpawn(v10->field_0->field_208);
            }
        }
        strcpy@GLIBC_2.0(&st_szNextMap, &a0->field_104);
        EHANDLE::__as(&a0->field_d4, a1);
        CBaseDelay::SUB_UseTargets(a0, a1, 3, 0);
        st_szNextSpot = 0;
        v13 = CChangeLevel::FindLandmark(&a0->field_124);
        v1 = 0;
        if (!v13 || !g_engfuncs.pfnEntOffsetOfPEntity(v13))
            v1 = 1;
        if (!v1)
        {
            strcpy@GLIBC_2.0(&st_szNextSpot, &a0->field_124);
            v14 = &v13->field_80;
            if (!v13)
                v14 = NULL;
            gpGlobals->field_a0 = v14[2];
            gpGlobals->field_a4 = v14[3];
            gpGlobals->field_a8 = v14[4];
        }
        v0 = &g_engfuncs.padding_0[0];
        g_engfuncs.pfnAlertMessage(1, "CHANGE LEVEL: %s %s\n", &st_szNextMap, &st_szNextSpot);
        v0->field_18(&st_szNextMap, &st_szNextSpot);
        return v9;
    }
    else
    {
        return v9;
    }
}

