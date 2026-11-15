// CreateGib__11CEnvShooter @0xb4c80 size=272
typedef struct st_4b4c80_1 {
    char padding_0[272];
    unsigned int field_110;
    unsigned int field_114;
    char padding_118[44];
    unsigned int field_144;
    unsigned int field_148;
    unsigned int field_14c;
    unsigned int field_150;
    unsigned int field_154;
    unsigned int field_158;
    unsigned int field_15c;
} st_4b4c80_1;

typedef struct st_4b4c80_2 {
    char padding_0[184];
    unsigned int field_b8;
    char padding_bc[84];
    unsigned int field_110;
    int field_114;
    char padding_118[44];
    float field_144;
    unsigned int field_148;
    float field_14c;
    unsigned int field_150;
    unsigned int field_154;
    unsigned int field_158;
    unsigned int field_15c;
} st_4b4c80_2;

typedef struct st_4b4c80_0 {
    struct st_4b4c80_1 *field_0;
    char padding_4[676];
    unsigned int field_2a8;
    char padding_2ac[4];
    unsigned int field_2b0;
} st_4b4c80_0;

typedef struct st_4b4c80_3 {
    struct st_4b4c80_2 *field_0;
    char padding_4[112];
    unsigned int field_74;
} st_4b4c80_3;

typedef struct st_4b4c80_4 {
    char padding_0[152];
    unsigned int field_98;
} st_4b4c80_4;

typedef struct st_4b4c80_5 {
    unsigned int field_0;
} st_4b4c80_5;

extern st_4b4c80_5 *g_engfuncs.pfnRandomLong;
extern st_4b4c80_4 *gpGlobals;

st_4b4c80_0 * CreateGib__11CEnvShooter(st_4b4c80_3 *a0)
{
    st_4b4c80_0 *v0;  // esi
    unsigned int v1;  // ecx
    unsigned int *v2;  // ecx
    st_4b4c80_2 *v3;  // edx

    v0 = GetClassPtr__H1Z4CGib_PX01_PX01(0);
    CGib::Spawn(v0, a0->field_0->field_b8 + gpGlobals->field_98);
    v1 = 0;
    if (a0->field_0->field_114 > 1)
        v1 = g_engfuncs.pfnRandomLong(0, a0->field_0->field_114 - 1);
    v0->field_0->field_114 = v1;
    v0->field_2a8 = 0xffffffff;
    v0->field_2b0 = a0->field_74;
    v0->field_0->field_148 = a0->field_0->field_148;
    *(float *)&v0->field_0->field_14c = a0->field_0->field_14c;
    v2 = v0->field_0;
    v3 = a0->field_0;
    v2[84] = v3->field_150;
    v2[0x55] = v3->field_154;
    v2[86] = v3->field_158;
    v0->field_0->field_15c = a0->field_0->field_15c;
    *(float *)&v0->field_0->field_144 = a0->field_0->field_144;
    v0->field_0->field_110 = a0->field_0->field_110;
    return v0;
}

