// KeyValue__10CLightningP14KeyValueData_s @0xb0600 size=2547
typedef struct st_4b0600_3 {
    struct st_4b0600_2 *field_0;
    char padding_4[100];
    struct st_4b0600_2 *field_68;
    struct st_4b0600_2 *field_6c;
    float field_70;
    struct st_4b0600_2 *field_74;
    struct st_4b0600_2 *field_78;
    char padding_7c[4];
    struct st_4b0600_2 *field_80;
    float field_84;
    char padding_88[4];
    struct st_4b0600_2 *field_8c;
    struct st_4b0600_2 *field_90;
    float field_94;
} st_4b0600_3;

typedef struct st_4b0600_0 {
    char padding_0[4];
    int field_4;
    int field_8;
    unsigned int field_c;
} st_4b0600_0;

typedef struct st_4b0600_2 {
    char padding_0[480];
    float field_1e0;
} st_4b0600_2;

typedef struct st_4b0600_4 {
    char padding_0[480];
    unsigned int field_1e0;
} st_4b0600_4;

typedef struct st_4b0600_1 {
    unsigned int field_0;
} st_4b0600_1;

extern st_4b0600_1 *g_engfuncs.pfnAllocString;

st_4b0600_4 * KeyValue__10CLightningP14KeyValueData_s(st_4b0600_3 *a0, st_4b0600_0 *a1)
{
    st_4b0600_4 *v0;  // eax
    st_4b0600_4 *v1;  // eax
    st_4b0600_4 *v10;  // eax
    st_4b0600_4 *v11;  // eax
    double v12;  // mm7
    st_4b0600_4 *v13;  // eax
    st_4b0600_2 *v14;  // eax
    double v15;  // mm7
    st_4b0600_4 *v2;  // eax
    double v3;  // mm7
    st_4b0600_4 *v4;  // eax
    st_4b0600_4 *v5;  // eax
    st_4b0600_4 *v6;  // eax
    st_4b0600_4 *v7;  // eax
    double v8;  // mm7
    st_4b0600_4 *v9;  // eax

    if (!strcmp@GLIBC_2.0(a1->field_4, "LightningStart"))
    {
        v0 = g_engfuncs.pfnAllocString(a1->field_8);
        a0->field_68 = v0;
        a1->field_c = 1;
        return v0;
    }
    else if (!strcmp@GLIBC_2.0(a1->field_4, "LightningEnd"))
    {
        v1 = g_engfuncs.pfnAllocString(a1->field_8);
        a0->field_6c = v1;
        a1->field_c = 1;
        return v1;
    }
    else if (!strcmp@GLIBC_2.0(a1->field_4, "life"))
    {
        v2 = __strtod_internal@GLIBC_2.0(a1->field_8, 0, 0);
        a0->field_70 = (float)v3;
        a1->field_c = 1;
        return v2;
    }
    else if (!strcmp@GLIBC_2.0(a1->field_4, "BoltWidth"))
    {
        v4 = __strtol_internal@GLIBC_2.0(a1->field_8, 0, 10, 0);
        a0->field_74 = v4;
        a1->field_c = 1;
        return v4;
    }
    else if (!strcmp@GLIBC_2.0(a1->field_4, "NoiseAmplitude"))
    {
        v5 = __strtol_internal@GLIBC_2.0(a1->field_8, 0, 10, 0);
        a0->field_78 = v5;
        a1->field_c = 1;
        return v5;
    }
    else if (!strcmp@GLIBC_2.0(a1->field_4, "TextureScroll"))
    {
        v6 = __strtol_internal@GLIBC_2.0(a1->field_8, 0, 10, 0);
        a0->field_80 = v6;
        a1->field_c = 1;
        return v6;
    }
    else if (!strcmp@GLIBC_2.0(a1->field_4, "StrikeTime"))
    {
        v7 = __strtod_internal@GLIBC_2.0(a1->field_8, 0, 0);
        a0->field_84 = (float)v8;
        a1->field_c = 1;
        return v7;
    }
    else if (!strcmp@GLIBC_2.0(a1->field_4, "texture"))
    {
        v9 = g_engfuncs.pfnAllocString(a1->field_8);
        a0->field_8c = v9;
        a1->field_c = 1;
        return v9;
    }
    else if (!strcmp@GLIBC_2.0(a1->field_4, "framestart"))
    {
        v10 = __strtol_internal@GLIBC_2.0(a1->field_8, 0, 10, 0);
        a0->field_90 = v10;
        a1->field_c = 1;
        return v10;
    }
    else if (!strcmp@GLIBC_2.0(a1->field_4, "Radius"))
    {
        v11 = __strtod_internal@GLIBC_2.0(a1->field_8, 0, 0);
        a0->field_94 = (float)v12;
        a1->field_c = 1;
        return v11;
    }
    else
    {
        v13 = strcmp@GLIBC_2.0(a1->field_4, "damage");
        if (v13)
        {
            a1->field_c = 0;
            return v13;
        }
        __strtod_internal@GLIBC_2.0(a1->field_8, 0, 0);
        v14 = a0->field_0;
        v14->field_1e0 = (float)v15;
        a1->field_c = 1;
        return v14;
    }
}

