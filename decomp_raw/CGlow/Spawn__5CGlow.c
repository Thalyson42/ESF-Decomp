// Spawn__5CGlow @0xb34d0 size=261
typedef struct st_4b34d0_0 {
    char padding_0[180];
    unsigned int field_b4;
    unsigned int field_b8;
    char padding_bc[72];
    float field_104;
    unsigned int field_108;
    unsigned int field_10c;
    char padding_110[8];
    unsigned int field_118;
    char padding_11c[20];
    unsigned int field_130;
    char padding_134[4];
    unsigned int field_138;
    char padding_13c[204];
    unsigned int field_208;
} st_4b34d0_0;

typedef struct st_4b34d0_1 {
    struct st_4b34d0_0 *field_0;
    char padding_4[96];
    unsigned int field_64;
    float field_68;
} st_4b34d0_1;

typedef struct st_4b34d0_2 {
    float field_0;
    char padding_4[148];
    unsigned int field_98;
} st_4b34d0_2;

typedef struct st_4b34d0_3 {
    unsigned int field_0;
} st_4b34d0_3;

extern st_4b34d0_3 *g_engfuncs;
extern st_4b34d0_3 *g_6167c8;
extern st_4b34d0_3 *g_6167d0;
extern st_4b34d0_2 *gpGlobals;

unsigned int * Spawn__5CGlow(st_4b34d0_1 *a0)
{
    int v0;  // [bp-0x8]

    a0->field_0->field_10c = 0;
    a0->field_0->field_108 = 0;
    a0->field_0->field_118 = 0;
    a0->field_0->field_130 = 0;
    g_engfuncs(a0->field_0->field_b8 + gpGlobals->field_98);
    g_6167c8(a0->field_0->field_208, a0->field_0->field_b8 + gpGlobals->field_98);
    v0 = g_6167d0(a0->field_0->field_b4);
    a0->field_68 = (float)((double)v0 - 1.0);
    if (1.0 < a0->field_68 && *(float *)&a0->field_0->field_138 != 0.0f)
        a0->field_0->field_104 = (float)(0.1 + gpGlobals->field_0);
    *(float *)&a0->field_64 = gpGlobals->field_0;
    return gpGlobals;
}

