// KeyValue__17CScriptedSentenceP14KeyValueData_s @0x116360 size=1688
typedef struct st_516360_0 {
    char padding_0[4];
    int field_4;
    int field_8;
    unsigned int field_c;
} st_516360_0;

typedef struct st_516360_2 {
    struct st_516360_1 *field_0;
    char padding_4[256];
    unsigned int field_104;
    unsigned int field_108;
    float field_10c;
    float field_110;
    float field_114;
    char padding_118[4];
    float field_11c;
    char padding_120[4];
    unsigned int field_124;
} st_516360_2;

typedef struct st_516360_1 {
    char padding_0[388];
    unsigned int field_184;
} st_516360_1;

typedef struct st_516360_3 {
    unsigned int field_0;
} st_516360_3;

extern st_516360_3 *g_engfuncs.pfnAllocString;

double KeyValue__17CScriptedSentenceP14KeyValueData_s(st_516360_2 *a0, st_516360_0 *a1)
{
    double v0;  // mm7
    double v1;  // mm7
    double v2;  // mm7
    double v3;  // mm7
    double v4;  // mm7
    unsigned int v5;  // eax
    double v6;  // mm7
    double v7;  // mm7
    double v8;  // mm7
    double v9;  // mm7

    if (!strcmp@GLIBC_2.0(a1->field_4, "sentence"))
    {
        a0->field_104 = g_engfuncs.pfnAllocString(a1->field_8);
        a1->field_c = 1;
        return v0;
    }
    else if (!strcmp@GLIBC_2.0(a1->field_4, "entity"))
    {
        a0->field_108 = g_engfuncs.pfnAllocString(a1->field_8);
        a1->field_c = 1;
        return v1;
    }
    else if (!strcmp@GLIBC_2.0(a1->field_4, "duration"))
    {
        __strtod_internal@GLIBC_2.0(a1->field_8, 0, 0);
        a0->field_110 = (float)v2;
        a1->field_c = 1;
        return v2;
    }
    else if (!strcmp@GLIBC_2.0(a1->field_4, "radius"))
    {
        __strtod_internal@GLIBC_2.0(a1->field_8, 0, 0);
        a0->field_10c = (float)v3;
        a1->field_c = 1;
        return v3;
    }
    else if (!strcmp@GLIBC_2.0(a1->field_4, "refire"))
    {
        __strtod_internal@GLIBC_2.0(a1->field_8, 0, 0);
        a0->field_114 = (float)v4;
        a1->field_c = 1;
        return v4;
    }
    else if (!strcmp@GLIBC_2.0(a1->field_4, "attenuation"))
    {
        v5 = __strtol_internal@GLIBC_2.0(a1->field_8, 0, 10, 0);
        a0->field_0->field_184 = v5;
        a1->field_c = 1;
        return v6;
    }
    else if (!strcmp@GLIBC_2.0(a1->field_4, "volume"))
    {
        __strtod_internal@GLIBC_2.0(a1->field_8, 0, 0);
        a0->field_11c = (float)(v7 * 0.1);
        a1->field_c = 1;
        return v7 * 0.1;
    }
    else if (!strcmp@GLIBC_2.0(a1->field_4, "listener"))
    {
        a0->field_124 = g_engfuncs.pfnAllocString(a1->field_8);
        a1->field_c = 1;
        return v8;
    }
    else
    {
        CBaseToggle::KeyValue(a0, a1);
        return v9;
    }
}

