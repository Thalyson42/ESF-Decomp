// InitTrigger__12CBaseTrigger @0x12b9c0 size=236
typedef struct st_52b9c0_4 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    char padding_c[92];
    unsigned int field_68;
    char padding_6c[76];
    unsigned int field_b8;
    unsigned int field_bc;
    char padding_c0[8];
    char field_c8;
    char padding_c9[239];
    unsigned int field_1b8;
} st_52b9c0_4;

typedef struct st_52b9c0_1 {
    char padding_0[80];
    float field_50;
    float field_54;
    float field_58;
    char padding_5c[92];
    unsigned int field_b8;
    char padding_bc[76];
    unsigned int field_108;
    unsigned int field_10c;
    char padding_110[8];
    char field_118;
    char padding_119[239];
    unsigned int field_208;
} st_52b9c0_1;

typedef struct st_52b9c0_0 {
    char padding_0[80];
    unsigned int field_50;
    unsigned int field_54;
    unsigned int field_58;
    char padding_5c[92];
    unsigned int field_b8;
    char padding_bc[76];
    unsigned int field_108;
    unsigned int field_10c;
    char padding_110[8];
    char field_118;
    char padding_119[239];
    unsigned int field_208;
} st_52b9c0_0;

typedef struct st_52b9c0_2 {
    char padding_0[152];
    unsigned int field_98;
} st_52b9c0_2;

typedef struct st_52b9c0_3 {
    unsigned int field_0;
} st_52b9c0_3;

extern unsigned int g_vecZero;
extern unsigned int g_vecZero+4;
extern unsigned int g_vecZero+8;
extern st_52b9c0_3 *g_engfuncs.pfnSetModel;
extern st_52b9c0_3 *g_engfuncs.pfnCVarGetFloat;
extern st_52b9c0_2 *gpGlobals;

st_52b9c0_0 * InitTrigger__12CBaseTrigger(double a0, st_52b9c0_1 **a1)
{
    st_52b9c0_4 *v0;  // ecx
    unsigned int v1;  // esi
    st_52b9c0_1 *v2;  // eax

    v0 = &*a1->field_50;
    v1 = 0;
    if (*(float *)&g_vecZero == *a1->field_50 && *(float *)&g_vecZero+4 == *(float *)&v0->field_4)
        v1 = *(float *)&g_vecZero+8 == *(float *)&v0->field_8;
    if (!v1)
        SetMovedir(*a1);
    *a1->field_10c = 1;
    *a1->field_108 = 0;
    g_engfuncs.pfnSetModel(*a1->field_208, *a1->field_b8 + gpGlobals->field_98);
    g_engfuncs.pfnCVarGetFloat("showtriggers");
    if (a0 == 0.0)
    {
        v2 = *a1;
        v2->field_118 = v2->field_118 | 128;
    }
    return v2;
}

