// KeyValue__6CLightP14KeyValueData_s @0xcdbf0 size=673
typedef struct st_4cdbf0_0 {
    char padding_0[4];
    int field_4;
    int field_8;
    unsigned int field_c;
} st_4cdbf0_0;

typedef struct st_4cdbf0_1 {
    char padding_0[80];
    unsigned int field_50;
} st_4cdbf0_1;

typedef struct st_4cdbf0_2 {
    char padding_0[80];
    float field_50;
} st_4cdbf0_2;

typedef struct st_4cdbf0_3 {
    unsigned int field_0;
} st_4cdbf0_3;

extern st_4cdbf0_3 *g_engfuncs.pfnAllocString;

st_4cdbf0_1 * KeyValue__6CLightP14KeyValueData_s(st_4cdbf0_2 **a0, st_4cdbf0_0 *a1)
{
    st_4cdbf0_1 *v0;  // eax
    st_4cdbf0_2 *v1;  // eax
    double v2;  // mm7
    st_4cdbf0_1 *v3;  // eax
    st_4cdbf0_1 *v4;  // eax

    if (!strcmp@GLIBC_2.0(a1->field_4, "style"))
    {
        v0 = __strtol_internal@GLIBC_2.0(a1->field_8, 0, 10, 0);
        a0[25] = v0;
        a1->field_c = 1;
        return v0;
    }
    else if (!strcmp@GLIBC_2.0(a1->field_4, "pitch"))
    {
        __strtod_internal@GLIBC_2.0(a1->field_8, 0, 0);
        v1 = *a0;
        v1->field_50 = (float)v2;
        a1->field_c = 1;
        return v1;
    }
    else
    {
        v3 = strcmp@GLIBC_2.0(a1->field_4, "pattern");
        if (v3)
        {
            a1->field_c = 0;
            return v3;
        }
        v4 = g_engfuncs.pfnAllocString(a1->field_8);
        a0[26] = v4;
        a1->field_c = 1;
        return v4;
    }
}

