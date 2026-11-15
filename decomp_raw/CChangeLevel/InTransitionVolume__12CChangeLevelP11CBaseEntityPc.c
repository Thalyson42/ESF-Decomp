// InTransitionVolume__12CChangeLevelP11CBaseEntityPc @0x12de50 size=381
typedef struct st_52de50_0 {
    char padding_0[124];
    struct st_52de50_1 *field_7c;
} st_52de50_0;

typedef struct st_52de50_3 {
    char padding_0[28];
    struct st_52de50_4 *field_1c;
} st_52de50_3;

typedef struct st_52de50_2 {
    char padding_0[264];
    unsigned int field_108;
    char padding_10c[136];
    struct st_52de50_0 *field_194;
} st_52de50_2;

typedef struct st_52de50_4 {
    unsigned int field_0;
} st_52de50_4;

typedef struct st_52de50_1 {
    struct st_52de50_2 *field_0;
    char padding_4[92];
    struct st_52de50_3 *field_60;
} st_52de50_1;

typedef struct st_52de50_5 {
    char padding_0[152];
    unsigned int field_98;
} st_52de50_5;

extern st_52de50_4 *g_6167f8;
extern st_52de50_4 *g_6168d4;
extern st_52de50_4 *g_6168d8;
extern st_52de50_5 *gpGlobals;

unsigned int InTransitionVolume__12CChangeLevelP11CBaseEntityPc(st_52de50_1 *a0, unsigned int a1)
{
    st_52de50_2 *v4;  // eax
    st_52de50_0 *v5;  // eax
    st_52de50_1 *v6;  // eax
    unsigned int v7;  // esi
    st_52de50_0 *v8;  // eax
    st_52de50_4 **v9;  // edi
    st_52de50_0 *v0;  // [bp-0x3c]
    unsigned int v1;  // [bp-0x38]
    unsigned int v2;  // [bp-0x34]
    unsigned int v3;  // [bp-0xc]

    if ((char)a0->field_60->field_1c(a0) < 0)
        return 1;
    v4 = a0->field_0;
    if (v4->field_108 == 12 && v4->field_194)
    {
        v5 = v4->field_194;
        if (v4->field_194 || (v5 = g_6168d4(0), v5))
            v6 = v5->field_7c;
        else
            v6 = NULL;
        a0 = v6;
    }
    v3 = 1;
    v2 = a1;
    v1 = "targetname";
    v0 = NULL;
    while (1)
    {
        v0 = g_6167f8(v0, v1, v2);
        v7 = 0;
        if (!v0 || !g_6168d8(v0))
            v7 = 1;
        if (v7)
            return v3;
        v8 = v0;
        if (v8 || (v8 = g_6168d4(0), v8))
            v9 = v8->field_7c;
        else
            v9 = NULL;
        if (v9 && !sub_488af0(*(int *)*v9 + gpGlobals->field_98, "trigger_transition"))
        {
            if (sub_48b160(v9, a0))
                break;
            v3 = 0;
        }
        v2 = a1;
        v1 = "targetname";
    }
    return 1;
}

