// InitChargeSprite__11CSpiritBomb @0x121520 size=306
typedef struct st_521520_3 {
    char padding_0[128];
    struct st_521520_4 *field_80;
    char padding_84[80];
    struct st_521520_4 *field_d4;
} st_521520_3;

typedef struct st_521520_0 {
    char padding_0[264];
    unsigned int field_108;
    char padding_10c[4];
    unsigned int field_110;
    unsigned int field_114;
    char padding_118[48];
    unsigned int field_148;
    unsigned int field_14c;
    unsigned int field_150;
    unsigned int field_154;
    unsigned int field_158;
    unsigned int field_15c;
    char padding_160[52];
    unsigned int field_194;
} st_521520_0;

typedef struct st_521520_4 {
    struct st_521520_1 *field_0;
} st_521520_4;

typedef struct st_521520_1 {
    char padding_0[520];
    unsigned int field_208;
} st_521520_1;

typedef struct st_521520_5 {
    unsigned int field_0;
} st_521520_5;

extern st_521520_5 *g_6168dc;

int InitChargeSprite__11CSpiritBomb(st_521520_3 *a0)
{
    st_521520_0 **v1;  // esi
    st_521520_3 *v2;  // eax
    unsigned int v3;  // edi
    unsigned int v4;  // eax
    st_521520_0 **v5;  // edx
    double v6;  // mm7
    st_521520_3 *v7;  // edx
    int v0;  // [bp-0x24]

    v1 = sub_48c010("sprites/spiritbomb.spr", *(int *)a0->field_80 + 8, 1);
    v2 = a0;
    v2->field_d4 = v1;
    v3 = *(int *)(*(int *)v2->field_80 + 520);
    if (v3)
    {
        v4 = g_6168dc(v3);
        *v1->field_110 = v4;
        *v1->field_114 = 1;
        *v1->field_194 = v3;
        *v1->field_108 = 12;
    }
    v5 = a0->field_d4;
    *v5->field_148 = 5;
    v0 = 0xff;
    v6 = (double)v0;
    *(float *)&*v5->field_150 = (float)v6;
    *(float *)&*v5->field_154 = (float)v6;
    *(float *)&*v5->field_158 = (float)v6;
    v0 = 254;
    *(float *)&*v5->field_14c = (float)v0;
    *v5->field_15c = 19;
    v7 = a0;
    *(float *)(*(int *)v7->field_d4 + 324) = 0.010499999858438969f;
    *(float *)(*(int *)v7->field_d4 + 312) = 10.0f;
    return sub_48df90(v7->field_d4);
}

