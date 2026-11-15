// Spawn__13CButtonTarget @0x98db0 size=135
typedef struct st_498db0_0 {
    char padding_0[184];
    unsigned int field_b8;
    char padding_bc[76];
    unsigned int field_108;
    unsigned int field_10c;
    char padding_110[32];
    unsigned int field_130;
    char padding_134[56];
    unsigned int field_16c;
    char padding_170[48];
    char field_1a0;
    char padding_1a1[103];
    unsigned int field_208;
} st_498db0_0;

typedef struct st_498db0_1 {
    char padding_0[152];
    unsigned int field_98;
} st_498db0_1;

typedef struct st_498db0_2 {
    unsigned int field_0;
} st_498db0_2;

extern st_498db0_2 *g_6167c8;
extern st_498db0_1 *gpGlobals;

st_498db0_0 * Spawn__13CButtonTarget(st_498db0_0 **a0)
{
    st_498db0_0 *v0;  // eax

    *a0->field_108 = 7;
    *a0->field_10c = 4;
    g_6167c8(*a0->field_208, *a0->field_b8 + gpGlobals->field_98);
    *a0->field_16c = 0x3f800000;
    v0 = *a0;
    if (v0->field_1a0 & 2)
        v0->field_130 = 0x3f800000;
    return v0;
}

