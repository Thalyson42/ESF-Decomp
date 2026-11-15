// AddPoints__11CBasePlayerii @0xf8cc0 size=386
typedef struct st_4f8cc0_1 {
    struct st_4f8cc0_0 *field_0;
    char padding_4[1844];
    unsigned int field_738;
    char padding_73c[584];
    unsigned int field_984;
} st_4f8cc0_1;

typedef struct st_4f8cc0_0 {
    char padding_0[356];
    float field_164;
    char padding_168[160];
    unsigned int field_208;
    unsigned int field_20c;
} st_4f8cc0_0;

typedef struct st_4f8cc0_3 {
    char padding_0[204];
    struct st_4f8cc0_2 *field_cc;
} st_4f8cc0_3;

typedef struct st_4f8cc0_2 {
    unsigned int field_0;
} st_4f8cc0_2;

typedef struct st_4f8cc0_4 {
    char padding_0[68];
    struct st_4f8cc0_3 *field_44;
} st_4f8cc0_4;

extern st_4f8cc0_4 *g_pGameRules;
extern unsigned int gmsgScoreInfo;
extern st_4f8cc0_2 *g_engfuncs.pfnMessageBegin;
extern st_4f8cc0_2 *g_engfuncs.pfnMessageEnd;
extern st_4f8cc0_2 *g_engfuncs.pfnWriteByte;
extern st_4f8cc0_2 *g_engfuncs.pfnWriteShort;
extern st_4f8cc0_2 *g_engfuncs.pfnIndexOfEdict;

unsigned int AddPoints__11CBasePlayerii(st_4f8cc0_1 *a0, float a1, unsigned int a2)
{
    float v2;  // ecx, Other Possible Types: int
    st_4f8cc0_0 *v3;  // edx
    unsigned int v4;  // eax
    unsigned int v5;  // eax
    unsigned int v6;  // eax
    unsigned int v7;  // eax
    unsigned short v0;  // [bp-0xc]
    unsigned short v1;  // [bp-0xa]

    v2 = a1;
    if ((int)__float_as_int(v2) < 0 && !a2)
    {
        v3 = a0->field_0;
        if (0.0 > v3->field_164)
            return v4;
        v2 = -__float_as_int(v2);
        if ((double)v2 > v3->field_164)
        {
            v1 = __fnstcw();
            v0 = v1 | 0xc00;
            v2 = -v3->field_164;
        }
    }
    a0->field_0->field_164 = (float)((double)v2 + a0->field_0->field_164);
    g_engfuncs.pfnMessageBegin(2, gmsgScoreInfo, 0, 0);
    v5 = g_engfuncs.pfnIndexOfEdict(a0->field_0->field_208);
    g_engfuncs.pfnWriteByte(v5);
    v1 = __fnstcw();
    v0 = v1 | 0xc00;
    v2 = (int)a0->field_0->field_164;
    g_engfuncs.pfnWriteShort(v2);
    g_engfuncs.pfnWriteShort(a0->field_984);
    g_engfuncs.pfnWriteShort(a0->field_738);
    g_engfuncs.pfnWriteShort(a0->field_0->field_20c);
    v6 = g_pGameRules->field_44->field_cc(g_pGameRules, &a0[1].padding_4[16]);
    g_engfuncs.pfnWriteShort(v6 + 1);
    v7 = g_engfuncs.pfnMessageEnd();
    return v7;
}

