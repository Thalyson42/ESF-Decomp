// InitChargeSprite__12CGenericBeam @0xc5b30 size=387
typedef struct st_4c5b30_6 {
    struct st_4c5b30_2 *field_0;
    char padding_4[1888];
    struct st_4c5b30_5 *field_764;
} st_4c5b30_6;

typedef struct st_4c5b30_7 {
    char padding_0[264];
    unsigned int field_108;
    char padding_10c[4];
    unsigned int field_110;
    unsigned int field_114;
    char padding_118[48];
    unsigned int field_148;
    float field_14c;
    float field_150;
    float field_154;
    float field_158;
    unsigned int field_15c;
    char padding_160[52];
    unsigned int field_194;
} st_4c5b30_7;

typedef struct st_4c5b30_1 {
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
} st_4c5b30_1;

typedef struct st_4c5b30_9 {
    struct st_4c5b30_7 *field_0;
} st_4c5b30_9;

typedef struct st_4c5b30_4 {
    unsigned int field_0;
} st_4c5b30_4;

typedef struct st_4c5b30_2 {
    char padding_0[520];
    unsigned int field_208;
} st_4c5b30_2;

typedef struct st_4c5b30_8 {
    char padding_0[128];
    struct st_4c5b30_6 *field_80;
    char padding_84[392];
    struct st_4c5b30_9 *field_20c;
} st_4c5b30_8;

typedef struct st_4c5b30_3 {
    char padding_0[56];
    struct st_4c5b30_4 *field_38;
} st_4c5b30_3;

typedef struct st_4c5b30_5 {
    char padding_0[4];
    struct st_4c5b30_3 *field_4;
} st_4c5b30_5;

typedef struct st_4c5b30_0 {
    int field_0;
    unsigned int field_4;
    unsigned int field_8;
    unsigned int field_c;
} st_4c5b30_0;

extern st_4c5b30_0 g_pAuraColorString;
extern st_4c5b30_4 *g_6168dc;

int InitChargeSprite__12CGenericBeam(st_4c5b30_8 *a0)
{
    unsigned int v3;  // eax
    st_4c5b30_1 **v4;  // esi
    st_4c5b30_8 *v5;  // eax
    unsigned int v6;  // edi
    unsigned int v7;  // eax
    st_4c5b30_1 **v8;  // edx
    double v9;  // mm7
    st_4c5b30_8 *v10;  // edx
    int v0;  // [bp-0x224]
    char v1;  // [bp-0x204]
    char v2;  // [bp-0x104]

    v3 = a0->field_80->field_764->field_4->field_38(a0->field_80->field_764);
    sub_48e110(&v2, (&g_pAuraColorString.field_0)[v3]);
    sub_48d990(&v1, "sprites/%scharge.spr", &v2);
    v4 = sub_48c010(&v1, &a0->field_80->field_0->padding_0[8], 1);
    v5 = a0;
    v5->field_20c = v4;
    v6 = v5->field_80->field_0->field_208;
    if (v6)
    {
        v7 = g_6168dc(v6);
        *v4->field_110 = v7;
        *v4->field_114 = 1;
        *v4->field_194 = v6;
        *v4->field_108 = 12;
    }
    v8 = a0->field_20c;
    *v8->field_148 = 5;
    v0 = 0xff;
    v9 = (double)v0;
    *(float *)&*v8->field_150 = (float)v9;
    *(float *)&*v8->field_154 = (float)v9;
    *(float *)&*v8->field_158 = (float)v9;
    v0 = 254;
    *(float *)&*v8->field_14c = (float)v0;
    *v8->field_15c = 19;
    v10 = a0;
    *(float *)(*(int *)v10->field_20c + 324) = 0.10000000149011612f;
    *(float *)(*(int *)v10->field_20c + 312) = 10.0f;
    return sub_48df90(v10->field_20c);
}

