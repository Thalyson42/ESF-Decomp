// KeyValue__12CChangeLevelP14KeyValueData_s @0x12d560 size=618
typedef struct st_52d560_0 {
    char padding_0[4];
    int field_4;
    struct st_52d560_1 *field_8;
    unsigned int field_c;
} st_52d560_0;

typedef struct st_52d560_3 {
    char padding_0[260];
    char field_104;
    char padding_105[31];
    char field_124;
    char padding_125[31];
    struct st_52d560_3 *field_144;
    float field_148;
} st_52d560_3;

typedef struct st_52d560_4 {
    char padding_0[260];
    char field_104;
    char padding_105[31];
    char field_124;
    char padding_125[31];
    struct st_52d560_4 *field_144;
    unsigned int field_148;
} st_52d560_4;

typedef struct st_52d560_5 {
    char padding_0[32];
    struct st_52d560_4 *field_20;
} st_52d560_5;

typedef struct st_52d560_1 {
    char field_0;
} st_52d560_1;

typedef struct st_52d560_2 {
    unsigned int field_0;
} st_52d560_2;

extern st_52d560_2 *g_engfuncs.pfnAlertMessage;
extern st_52d560_2 *g_engfuncs.pfnAllocString;

st_52d560_3 * KeyValue__12CChangeLevelP14KeyValueData_s(st_52d560_3 *a0, st_52d560_0 *a1)
{
    char *v1;  // edx
    unsigned int v2;  // ecx
    char *v3;  // edi
    st_52d560_5 *v4;  // eax
    char *v5;  // edx
    unsigned int v6;  // ecx
    char *v7;  // edi
    st_52d560_3 *v8;  // eax
    st_52d560_3 *v9;  // eax
    double v10;  // mm7
    char *v0;  // [bp-0x28]

    if (!strcmp@GLIBC_2.0(a1->field_4, "map"))
    {
        v1 = a1->field_8;
        v2 = 0xffffffff;
        do
        {
            v3 = v1;
        } while (v2 && (v2 -= 1, v1 = v3 + 1, *v3));
        if (~v2 - 1 > 31)
            g_engfuncs.pfnAlertMessage(4, "Map name '%s' too long (32 chars)\n", a1->field_8);
        v0 = a1->field_8;
        v4 = &a0->field_104;
    }
    else if (!strcmp@GLIBC_2.0(a1->field_4, "landmark"))
    {
        v5 = a1->field_8;
        v6 = 0xffffffff;
        do
        {
            v7 = v5;
        } while (v6 && (v6 -= 1, v5 = v7 + 1, *v7));
        if (~v6 - 1 > 31)
            g_engfuncs.pfnAlertMessage(4, "Landmark name '%s' too long (32 chars)\n", a1->field_8);
        v0 = a1->field_8;
        v4 = &a0->field_124;
    }
    else if (!strcmp@GLIBC_2.0(a1->field_4, "changetarget"))
    {
        v9 = g_engfuncs.pfnAllocString(a1->field_8);
        a0->field_144 = v9;
        a1->field_c = 1;
        return v9;
    }
    else if (!strcmp@GLIBC_2.0(a1->field_4, "changedelay"))
    {
        __strtod_internal@GLIBC_2.0(a1->field_8, 0, 0);
        a0->field_148 = (float)v10;
        a1->field_c = 1;
        return a0;
    }
    else
    {
        return CBaseTrigger::KeyValue(a0, a1);
    }
    v8 = strcpy@GLIBC_2.0(v4);
    a1->field_c = 1;
    return v8;
}

