// KeyValue__6CWorldP14KeyValueData_s @0x13a980 size=739
typedef struct st_53a980_0 {
    char padding_0[4];
    int field_4;
    int field_8;
    unsigned int field_c;
} st_53a980_0;

typedef struct st_53a980_2 {
    char padding_0[324];
    float field_144;
    char padding_148[176];
    float field_1f8;
} st_53a980_2;

typedef struct st_53a980_1 {
    unsigned int field_0;
} st_53a980_1;

extern st_53a980_1 *g_engfuncs.pfnCVarSetFloat;
extern st_53a980_1 *g_engfuncs.pfnCVarSetString;

unsigned int * KeyValue__6CWorldP14KeyValueData_s(st_53a980_2 **a0, st_53a980_0 *a1)
{
    unsigned int *v0;  // eax
    double v1;  // mm7
    unsigned int *v2;  // eax
    float *v3;  // eax
    double v4;  // mm7

    if (!strcmp@GLIBC_2.0(a1->field_4, "skyname"))
    {
        v0 = g_engfuncs.pfnCVarSetString("sv_skyname", a1->field_8);
        a1->field_c = 1;
        return v0;
    }
    else if (!strcmp@GLIBC_2.0(a1->field_4, "WaveHeight"))
    {
        __strtod_internal@GLIBC_2.0(a1->field_8, 0, 0);
        *a0->field_144 = (float)(v1 * 0.125);
        a1->field_c = 1;
        return g_engfuncs.pfnCVarSetFloat("sv_wateramp", *a0->field_144);
    }
    else
    {
        v2 = strcmp@GLIBC_2.0(a1->field_4, "MaxRange");
        if (v2)
        {
            a1->field_c = 0;
            return v2;
        }
        __strtod_internal@GLIBC_2.0(a1->field_8, 0, 0);
        v3 = *a0;
        v3[126] = (float)v4;
        a1->field_c = 1;
        return v3;
    }
}

