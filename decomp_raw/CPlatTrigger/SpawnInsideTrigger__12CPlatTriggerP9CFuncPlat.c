// SpawnInsideTrigger__12CPlatTriggerP9CFuncPlat @0xe8e40 size=345
typedef struct st_4e8e40_0 {
    struct st_4e8e40_1 *field_0;
    char padding_4[160];
    unsigned int field_a4;
    char padding_a8[8];
    unsigned int field_b0;
} st_4e8e40_0;

typedef struct st_4e8e40_1 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[200];
    unsigned int field_dc;
    unsigned int field_e0;
    unsigned int field_e4;
    unsigned int field_e8;
    unsigned int field_ec;
    unsigned int field_f0;
    unsigned int field_f4;
} st_4e8e40_1;

typedef struct st_4e8e40_3 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[244];
    unsigned int field_108;
    unsigned int field_10c;
} st_4e8e40_3;

typedef struct st_4e8e40_2 {
    struct st_4e8e40_3 *field_0;
    char padding_4[96];
    struct st_4e8e40_0 *field_64;
} st_4e8e40_2;

int SpawnInsideTrigger__12CPlatTriggerP9CFuncPlat(st_4e8e40_2 *a0, st_4e8e40_0 *a1)
{
    unsigned int *v9;  // ecx
    unsigned int *v10;  // edx
    st_4e8e40_0 *v11;  // ecx
    unsigned int *v12;  // edx
    unsigned int *v13;  // edx
    unsigned int *v14;  // edx
    unsigned int *v15;  // edx
    float v0;  // [bp-0x44]
    float v1;  // [bp-0x40]
    float v2;  // [bp-0x3c]
    float v3;  // [bp-0x38]
    float v4;  // [bp-0x34]
    float v5;  // [bp-0x30]
    float v6;  // [bp-0x24]
    float v7;  // [bp-0x20]
    float v8;  // [bp-0x1c]

    a0->field_64 = a1;
    a0->field_0->field_10c = 1;
    a0->field_0->field_108 = 0;
    v9 = a0->field_0;
    v10 = a1->field_0;
    v9[2] = v10[2];
    v9[3] = v10[3];
    v9[4] = v10[4];
    v11 = a0->field_64;
    v0 = 25.0f;
    v1 = 25.0f;
    v2 = 0;
    v12 = &v11->field_0->field_dc;
    v6 = (float)(*(float *)&v11->field_0->field_dc + 25.0);
    v7 = (float)(*(float *)&v12[1] + 25.0);
    v8 = *(float *)&v12[2] + v2;
    v3 = 25.0f;
    v4 = 25.0f;
    v5 = 8.0f;
    v13 = &v11->field_0->field_e8;
    v0 = *(float *)&v11->field_0->field_e8 + v3;
    v1 = *(float *)&v13[1] + v4;
    v2 = *(float *)&v13[2] + v5;
    v8 = (float)(v2 - (8.0 + *(float *)&v11->field_a4 - *(float *)&v11->field_b0));
    v14 = v11->field_0;
    if (50.0 >= *(float *)&v14[61])
    {
        v6 = (float)((*(float *)&v14[55] + *(float *)&v14[58]) * 0.5);
        v0 = (float)(1.0 + v6);
    }
    v15 = a0->field_64->field_0;
    if (50.0f >= *(float *)&v15[62])
    {
        v7 = (float)((*(float *)&v15[56] + *(float *)&v15[59]) * 0.5);
        v1 = (float)(1.0 + v7);
    }
    return UTIL_SetSize(a0->field_0, &v6, &v0);
}

