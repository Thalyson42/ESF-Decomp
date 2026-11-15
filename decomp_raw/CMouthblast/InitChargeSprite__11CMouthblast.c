// InitChargeSprite__11CMouthblast @0xdb330 size=317
typedef struct st_4db330_0 {
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
} st_4db330_0;

typedef struct st_4db330_4 {
    struct st_4db330_1 *field_0;
} st_4db330_4;

typedef struct st_4db330_1 {
    char padding_0[520];
    unsigned int field_208;
} st_4db330_1;

typedef struct st_4db330_3 {
    char padding_0[128];
    struct st_4db330_4 *field_80;
    char padding_84[372];
    unsigned int field_1f8;
    char padding_1fc[16];
    struct st_4db330_4 *field_20c;
} st_4db330_3;

typedef struct st_4db330_5 {
    unsigned int field_0;
} st_4db330_5;

extern st_4db330_5 *g_6168dc;

int InitChargeSprite__11CMouthblast(st_4db330_3 *a0)
{
    st_4db330_0 **v2;  // esi
    st_4db330_3 *v3;  // eax
    unsigned int v4;  // edi
    unsigned int v5;  // eax
    st_4db330_0 **v6;  // edx
    double v7;  // mm7
    st_4db330_3 *v8;  // edx
    unsigned int v0;  // [bp-0x28]
    int v1;  // [bp-0x24]

    v2 = sub_48c010("sprites/mouthblastcharge.spr", *(int *)a0->field_80 + 8, 1);
    v3 = a0;
    v3->field_20c = v2;
    v4 = *(int *)(*(int *)v3->field_80 + 520);
    v0 = a0->field_1f8;
    if (v4)
    {
        v5 = g_6168dc(v4);
        *v2->field_110 = v5;
        *v2->field_114 = v0;
        *v2->field_194 = v4;
        *v2->field_108 = 12;
    }
    v6 = a0->field_20c;
    *v6->field_148 = 5;
    v1 = 0xff;
    v7 = (double)v1;
    *(float *)&*v6->field_150 = (float)v7;
    *(float *)&*v6->field_154 = (float)v7;
    *(float *)&*v6->field_158 = (float)v7;
    v1 = 254;
    *(float *)&*v6->field_14c = (float)v1;
    *v6->field_15c = 19;
    v8 = a0;
    *(float *)(*(int *)v8->field_20c + 324) = 0.10000000149011612f;
    *(float *)(*(int *)v8->field_20c + 312) = 10.0f;
    return sub_48df90(v8->field_20c);
}

