// Spawn__18CFuncTrainControls @0xecaa0 size=183
typedef struct st_4ecaa0_2 {
    float field_0;
    char padding_4[148];
    unsigned int field_98;
} st_4ecaa0_2;

typedef struct st_4ecaa0_1 {
    struct st_4ecaa0_0 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
} st_4ecaa0_1;

typedef struct st_4ecaa0_0 {
    char padding_0[8];
    char field_8;
    char padding_9[175];
    unsigned int field_b8;
    char padding_bc[32];
    char field_dc;
    char padding_dd[11];
    char field_e8;
    char padding_e9[27];
    unsigned int field_104;
    unsigned int field_108;
    unsigned int field_10c;
    char padding_110[248];
    unsigned int field_208;
} st_4ecaa0_0;

typedef struct st_4ecaa0_3 {
    unsigned int field_0;
} st_4ecaa0_3;

extern char Find__18CFuncTrainControls;
extern st_4ecaa0_3 *g_engfuncs.pfnSetModel;
extern st_4ecaa0_2 *gpGlobals;

short Spawn__18CFuncTrainControls(st_4ecaa0_1 *a0)
{
    st_4ecaa0_0 *v1;  // edx
    st_4ecaa0_2 *v3;  // eax
    st_4ecaa0_2 **v0;  // [bp-0x8]

    a0->field_0->field_10c = 0;
    a0->field_0->field_108 = 0;
    v0 = &gpGlobals;
    g_engfuncs.pfnSetModel(a0->field_0->field_208, a0->field_0->field_b8 + gpGlobals->field_98);
    v1 = a0->field_0;
    UTIL_SetSize(v1, &v1->field_dc, &v1->field_e8);
    a0->field_c = _INSERT(UTIL_SetOrigin(a0->field_0, &a0->field_0->field_8), 0, 0) | 0xffff0000;
    a0->field_10 = &Find__18CFuncTrainControls;
    v3 = *v0;
    *(float *)&a0->field_0->field_104 = v3->field_0;
    return (unsigned short)v3;
}

