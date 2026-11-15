// InitChargeSprite__11CFinalFlash @0xbd5c0 size=316
typedef struct st_4bd5c0_0 {
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
} st_4bd5c0_0;

typedef struct st_4bd5c0_4 {
    struct st_4bd5c0_1 *field_0;
} st_4bd5c0_4;

typedef struct st_4bd5c0_1 {
    char padding_0[520];
    unsigned int field_208;
} st_4bd5c0_1;

typedef struct st_4bd5c0_3 {
    char padding_0[128];
    struct st_4bd5c0_4 *field_80;
    char padding_84[392];
    struct st_4bd5c0_4 *field_20c;
} st_4bd5c0_3;

typedef struct st_4bd5c0_5 {
    unsigned int field_0;
} st_4bd5c0_5;

extern st_4bd5c0_5 *g_6168dc;

int InitChargeSprite__11CFinalFlash(st_4bd5c0_3 *a0)
{
    st_4bd5c0_0 **v3;  // esi
    st_4bd5c0_3 *v4;  // eax
    unsigned int v5;  // edi
    unsigned int v6;  // eax
    st_4bd5c0_0 **v7;  // edx
    double v8;  // mm7
    st_4bd5c0_3 *v9;  // edx
    unsigned int v0;  // [bp-0x24], Other Possible Types: int
    unsigned int v1;  // [bp-0x20]
    unsigned int v2;  // [bp-0x1c]

    v0 = 0;
    v1 = 0;
    v2 = 0;
    v3 = sub_48c010("sprites/finalflashcharge.spr", &v0, 1);
    v4 = a0;
    v4->field_20c = v3;
    v5 = *(int *)(*(int *)v4->field_80 + 520);
    if (v5)
    {
        v6 = g_6168dc(v5);
        *v3->field_110 = v6;
        *v3->field_114 = 2;
        *v3->field_194 = v5;
        *v3->field_108 = 12;
    }
    v7 = a0->field_20c;
    *v7->field_148 = 5;
    v0 = 0xff;
    v8 = (double)v0;
    *(float *)&*v7->field_150 = (float)v8;
    *(float *)&*v7->field_154 = (float)v8;
    *(float *)&*v7->field_158 = (float)v8;
    v0 = 254;
    *(float *)&*v7->field_14c = (float)v0;
    *v7->field_15c = 19;
    v9 = a0;
    *(float *)(*(int *)v9->field_20c + 324) = 0.009999999776482582f;
    *(float *)(*(int *)v9->field_20c + 312) = 10.0f;
    return sub_48df90(v9->field_20c);
}

