// Precache__7CSprite @0xb38a0 size=194
typedef struct st_4b38a0_1 {
    struct st_4b38a0_2 *field_0;
    char padding_4[280];
    struct st_4b38a0_2 *field_11c;
} st_4b38a0_1;

typedef struct st_4b38a0_0 {
    char padding_0[184];
    unsigned int field_b8;
    char padding_bc[76];
    unsigned int field_108;
    char padding_10c[4];
    unsigned int field_110;
    struct st_4b38a0_0 *field_114;
    char padding_118[124];
    unsigned int field_194;
} st_4b38a0_0;

typedef struct st_4b38a0_2 {
    unsigned int field_0;
} st_4b38a0_2;

typedef struct st_4b38a0_3 {
    char padding_0[152];
    unsigned int field_98;
} st_4b38a0_3;

extern st_4b38a0_1 g_engfuncs;
extern st_4b38a0_3 *gpGlobals;

st_4b38a0_0 * Precache__7CSprite(st_4b38a0_0 **a0)
{
    st_4b38a0_0 *v2;  // eax
    unsigned int v3;  // esi
    unsigned int v4;  // eax
    st_4b38a0_0 *v5;  // eax
    st_4b38a0_0 *v6;  // eax
    st_4b38a0_0 *v0;  // [bp-0xc]
    st_4b38a0_1 *v1;  // [bp-0x8]

    v1 = &g_engfuncs.field_0;
    v1->field_0(*a0->field_b8 + gpGlobals->field_98);
    v2 = *a0;
    if (!v2->field_194)
    {
        *a0->field_110 = 0;
        v6 = *a0;
        v6->field_114 = NULL;
        return v6;
    }
    v3 = v2->field_194;
    v0 = v2->field_114;
    if (!v3)
        return v2->field_114;
    v4 = v1->field_11c(v3);
    *a0->field_110 = v4;
    *a0->field_114 = v0;
    *a0->field_194 = v3;
    v5 = *a0;
    v5->field_108 = 12;
    return v5;
}

