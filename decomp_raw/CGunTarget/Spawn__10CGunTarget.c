// Spawn__10CGunTarget @0xede60 size=245
typedef struct st_4ede60_1 {
    char padding_0[8];
    char field_8;
    char padding_9[175];
    unsigned int field_b8;
    char padding_bc[68];
    unsigned int field_100;
    float field_104;
    unsigned int field_108;
    unsigned int field_10c;
    char padding_110[80];
    unsigned int field_160;
    char padding_164[8];
    unsigned int field_16c;
    char padding_170[48];
    char field_1a0;
    char padding_1a1[3];
    char field_1a4;
    char padding_1a5[11];
    unsigned int field_1b0;
    char padding_1b4[68];
    unsigned int field_1f8;
    char padding_1fc[12];
    unsigned int field_208;
} st_4ede60_1;

typedef struct st_4ede60_0 {
    char padding_0[8];
    char field_8;
    char padding_9[175];
    unsigned int field_b8;
    char padding_bc[68];
    unsigned int field_100;
    unsigned int field_104;
    unsigned int field_108;
    unsigned int field_10c;
    char padding_110[80];
    unsigned int field_160;
    char padding_164[8];
    unsigned int field_16c;
    char padding_170[48];
    char field_1a0;
    char padding_1a1[3];
    char field_1a4;
    char padding_1a5[11];
    unsigned int field_1b0;
    char padding_1b4[68];
    unsigned int field_1f8;
    char padding_1fc[12];
    unsigned int field_208;
} st_4ede60_0;

typedef struct st_4ede60_2 {
    struct st_4ede60_1 *field_0;
    char padding_4[8];
    struct st_4ede60_1 *field_c;
    unsigned int field_10;
    char padding_14[660];
    unsigned int field_2a8;
} st_4ede60_2;

typedef struct st_4ede60_3 {
    char padding_0[152];
    unsigned int field_98;
} st_4ede60_3;

typedef struct st_4ede60_4 {
    unsigned int field_0;
} st_4ede60_4;

extern char Start__10CGunTarget;
extern st_4ede60_4 *g_engfuncs.pfnSetModel;
extern st_4ede60_3 *gpGlobals;

st_4ede60_0 * Spawn__10CGunTarget(st_4ede60_2 *a0)
{
    st_4ede60_1 *v0;  // eax
    st_4ede60_1 *v1;  // ecx

    a0->field_0->field_10c = 4;
    a0->field_0->field_108 = 7;
    UTIL_SetOrigin(a0->field_0, &a0->field_0->field_8);
    g_engfuncs.pfnSetModel(a0->field_0->field_208, a0->field_0->field_b8 + gpGlobals->field_98);
    if (*(float *)&a0->field_0->field_1f8 == 0.0f)
        *(float *)&a0->field_0->field_1f8 = 100.0f;
    a0->field_0->field_16c = 0;
    a0->field_0->field_1a4 = a0->field_0->field_1a4 | 32;
    a0->field_2a8 = 0;
    v0 = a0->field_0;
    *(float *)&v0->field_1b0 = *(float *)&v0->field_160;
    v1 = a0->field_0;
    if (v1->field_1a0 & 1)
    {
        v0 = _INSERT(v0, 0, 0) | 0xffff0000;
        a0->field_c = v0;
        a0->field_10 = &Start__10CGunTarget;
        v1->field_104 = (float)(0.3 + *(float *)&v1->field_100);
    }
    return v0;
}

