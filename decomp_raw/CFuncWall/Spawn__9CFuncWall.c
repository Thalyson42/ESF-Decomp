// Spawn__9CFuncWall @0x90fb0 size=136
typedef struct st_490fb0_0 {
    char padding_0[80];
    unsigned int field_50;
    unsigned int field_54;
    unsigned int field_58;
    char padding_5c[92];
    unsigned int field_b8;
    char padding_bc[76];
    unsigned int field_108;
    unsigned int field_10c;
    char padding_110[151];
    char field_1a7;
    char padding_1a8[96];
    unsigned int field_208;
} st_490fb0_0;

typedef struct st_490fb0_1 {
    char padding_0[152];
    unsigned int field_98;
} st_490fb0_1;

typedef struct st_490fb0_2 {
    unsigned int field_0;
} st_490fb0_2;

extern unsigned int g_vecZero;
extern unsigned int g_vecZero+4;
extern unsigned int g_vecZero+8;
extern st_490fb0_2 *g_engfuncs.pfnSetModel;
extern st_490fb0_1 *gpGlobals;

st_490fb0_0 * Spawn__9CFuncWall(st_490fb0_0 **a0)
{
    st_490fb0_0 *v0;  // ecx
    st_490fb0_0 *v1;  // eax

    v0 = *a0;
    v0->field_50 = g_vecZero;
    v0->field_54 = g_vecZero+4;
    v0->field_58 = g_vecZero+8;
    *a0->field_108 = 7;
    *a0->field_10c = 4;
    g_engfuncs.pfnSetModel(*a0->field_208, *a0->field_b8 + gpGlobals->field_98);
    v1 = *a0;
    v1->field_1a7 = v1->field_1a7 | 2;
    return v1;
}

