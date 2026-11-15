// BeamInit__5CBeamPCci @0xafc90 size=220
typedef struct st_4afc90_0 {
    char padding_0[180];
    unsigned int field_b4;
    unsigned int field_b8;
    char padding_bc[84];
    unsigned int field_110;
    unsigned int field_114;
    char padding_118[16];
    unsigned int field_128;
    char padding_12c[4];
    unsigned int field_130;
    unsigned int field_134;
    char padding_138[12];
    unsigned int field_144;
    unsigned int field_148;
    unsigned int field_14c;
    unsigned int field_150;
    unsigned int field_154;
    unsigned int field_158;
    char padding_15c[75];
    char field_1a7;
} st_4afc90_0;

typedef struct st_4afc90_1 {
    char padding_0[180];
    unsigned int field_b4;
    unsigned int field_b8;
    char padding_bc[84];
    unsigned int field_110;
    unsigned int field_114;
    char padding_118[16];
    unsigned int field_128;
    char padding_12c[4];
    unsigned int field_130;
    unsigned int field_134;
    char padding_138[12];
    float field_144;
    unsigned int field_148;
    float field_14c;
    float field_150;
    float field_154;
    float field_158;
    char padding_15c[75];
    char field_1a7;
} st_4afc90_1;

typedef struct st_4afc90_2 {
    char padding_0[152];
    unsigned int field_98;
} st_4afc90_2;

typedef struct st_4afc90_3 {
    unsigned int field_0;
} st_4afc90_3;

extern st_4afc90_3 *g_engfuncs;
extern st_4afc90_2 *gpGlobals;

st_4afc90_0 * BeamInit__5CBeamPCci(st_4afc90_1 **a0, unsigned int a1, int a2)
{
    double v1;  // mm7
    unsigned int v2;  // eax
    st_4afc90_1 *v3;  // eax
    int v0;  // [bp-0x24]

    *a0->field_1a7 = *a0->field_1a7 | 32;
    v0 = 0xff;
    v1 = (double)v0;
    *a0->field_150 = (float)v1;
    *a0->field_154 = (float)v1;
    *a0->field_158 = (float)v1;
    *a0->field_14c = (float)v1;
    *a0->field_114 = 0;
    *a0->field_130 = 0;
    *a0->field_134 = 0;
    *a0->field_b8 = a1 - gpGlobals->field_98;
    v2 = g_engfuncs(a1);
    *a0->field_b4 = v2;
    *a0->field_144 = (float)a2;
    *a0->field_110 = 0;
    *a0->field_128 = 0;
    v3 = *a0;
    v3->field_148 = 0;
    return v3;
}

