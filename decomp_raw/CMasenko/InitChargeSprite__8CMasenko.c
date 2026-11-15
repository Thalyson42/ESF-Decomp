// InitChargeSprite__8CMasenko @0xd26f0 size=306
typedef struct st_4d26f0_0 {
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
} st_4d26f0_0;

typedef struct st_4d26f0_4 {
    struct st_4d26f0_1 *field_0;
} st_4d26f0_4;

typedef struct st_4d26f0_1 {
    char padding_0[520];
    unsigned int field_208;
} st_4d26f0_1;

typedef struct st_4d26f0_3 {
    char padding_0[128];
    struct st_4d26f0_4 *field_80;
    char padding_84[392];
    struct st_4d26f0_4 *field_20c;
} st_4d26f0_3;

typedef struct st_4d26f0_5 {
    unsigned int field_0;
} st_4d26f0_5;

extern st_4d26f0_5 *g_6168dc;

int InitChargeSprite__8CMasenko(st_4d26f0_3 *a0)
{
    st_4d26f0_0 **v1;  // esi
    st_4d26f0_3 *v2;  // eax
    unsigned int v3;  // edi
    unsigned int v4;  // eax
    st_4d26f0_0 **v5;  // edx
    double v6;  // mm7
    st_4d26f0_3 *v7;  // edx
    int v0;  // [bp-0x24]

    v1 = sub_48c010("sprites/masenkocharge.spr", *(int *)a0->field_80 + 8, 1);
    v2 = a0;
    v2->field_20c = v1;
    v3 = *(int *)(*(int *)v2->field_80 + 520);
    if (v3)
    {
        v4 = g_6168dc(v3);
        *v1->field_110 = v4;
        *v1->field_114 = 1;
        *v1->field_194 = v3;
        *v1->field_108 = 12;
    }
    v5 = a0->field_20c;
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
    *(float *)(*(int *)v7->field_20c + 324) = 0.10000000149011612f;
    *(float *)(*(int *)v7->field_20c + 312) = 10.0f;
    return sub_48df90(v7->field_20c);
}

