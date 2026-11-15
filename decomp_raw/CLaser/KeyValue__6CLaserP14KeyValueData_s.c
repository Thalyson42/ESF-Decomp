// KeyValue__6CLaserP14KeyValueData_s @0xb2aa0 size=1747
typedef struct st_4b2aa0_0 {
    char padding_0[4];
    int field_4;
    int field_8;
    unsigned int field_c;
} st_4b2aa0_0;

typedef struct st_4b2aa0_2 {
    char padding_0[184];
    unsigned int field_b8;
    char padding_bc[88];
    unsigned int field_114;
    char padding_118[24];
    float field_130;
    float field_134;
    char padding_138[12];
    float field_144;
    char padding_148[140];
    unsigned int field_1d4;
    char padding_1d8[8];
    float field_1e0;
} st_4b2aa0_2;

typedef struct st_4b2aa0_3 {
    struct st_4b2aa0_2 *field_0;
    char padding_4[100];
    unsigned int field_68;
} st_4b2aa0_3;

typedef struct st_4b2aa0_1 {
    unsigned int field_0;
} st_4b2aa0_1;

extern st_4b2aa0_1 *g_engfuncs.pfnAllocString;

double KeyValue__6CLaserP14KeyValueData_s(st_4b2aa0_3 *a0, st_4b2aa0_0 *a1)
{
    unsigned int v4;  // eax
    double v5;  // mm7
    double v6;  // mm7
    unsigned int v7;  // eax
    double v8;  // mm7
    unsigned int v9;  // eax
    double v10;  // mm7
    double v11;  // mm7
    double v12;  // mm7
    double v13;  // mm7
    int v0;  // [bp-0x2c]
    int v1;  // [bp-0xc]
    unsigned short v2;  // [bp-0x8]
    unsigned short v3;  // [bp-0x6]

    if (!strcmp@GLIBC_2.0(a1->field_4, "LaserTarget"))
    {
        v4 = g_engfuncs.pfnAllocString(a1->field_8);
        a0->field_0->field_1d4 = v4;
        a1->field_c = 1;
        return v5;
    }
    else if (!strcmp@GLIBC_2.0(a1->field_4, "width"))
    {
        __strtod_internal@GLIBC_2.0(a1->field_8, 0, 0);
        v3 = __fnstcw();
        v2 = v3 | 0xc00;
        v1 = (int)v6;
        v0 = v1;
        a0->field_0->field_144 = (float)v0;
        a1->field_c = 1;
        return (double)v0;
    }
    else if (!strcmp@GLIBC_2.0(a1->field_4, "NoiseAmplitude"))
    {
        v7 = __strtol_internal@GLIBC_2.0(a1->field_8, 0, 10, 0);
        a0->field_0->field_114 = v7;
        a1->field_c = 1;
        return v8;
    }
    else if (!strcmp@GLIBC_2.0(a1->field_4, "TextureScroll"))
    {
        v0 = __strtol_internal@GLIBC_2.0(a1->field_8, 0, 10, 0);
        a0->field_0->field_134 = (float)v0;
        a1->field_c = 1;
        return (double)v0;
    }
    else if (!strcmp@GLIBC_2.0(a1->field_4, "texture"))
    {
        v9 = g_engfuncs.pfnAllocString(a1->field_8);
        a0->field_0->field_b8 = v9;
        a1->field_c = 1;
        return v10;
    }
    else if (!strcmp@GLIBC_2.0(a1->field_4, "EndSprite"))
    {
        a0->field_68 = g_engfuncs.pfnAllocString(a1->field_8);
        a1->field_c = 1;
        return v11;
    }
    else if (!strcmp@GLIBC_2.0(a1->field_4, "framestart"))
    {
        v1 = __strtol_internal@GLIBC_2.0(a1->field_8, 0, 10, 0);
        a0->field_0->field_130 = (float)v1;
        a1->field_c = 1;
        return (double)v1;
    }
    else if (!strcmp@GLIBC_2.0(a1->field_4, "damage"))
    {
        __strtod_internal@GLIBC_2.0(a1->field_8, 0, 0);
        a0->field_0->field_1e0 = (float)v12;
        a1->field_c = 1;
        return v12;
    }
    else
    {
        a1->field_c = 0;
        return v13;
    }
}

