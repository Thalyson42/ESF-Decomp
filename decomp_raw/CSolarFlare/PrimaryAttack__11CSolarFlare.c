// PrimaryAttack__11CSolarFlare @0x11a480 size=445
typedef struct st_51a480_4 {
    char padding_0[492];
    unsigned int field_1ec;
} st_51a480_4;

typedef struct st_51a480_3 {
    char padding_0[504];
    unsigned int field_1f8;
} st_51a480_3;

typedef struct st_51a480_5 {
    char padding_0[600];
    unsigned int field_258;
} st_51a480_5;

typedef struct st_51a480_1 {
    char padding_0[608];
    unsigned int field_260;
} st_51a480_1;

typedef struct st_51a480_2 {
    struct st_51a480_1 *field_0;
    char padding_4[832];
    unsigned int field_344;
} st_51a480_2;

typedef struct st_51a480_0 {
    char padding_0[40];
    float field_28;
    float field_2c;
    float field_30;
} st_51a480_0;

extern st_51a480_0 *gpGlobals;

unsigned int PrimaryAttack__11CSolarFlare(float idx)
{
    float v12;  // 128
    int v13;  // ecx
    double v22;  // mm4
    st_51a480_5 *v23;  // edx
    unsigned int v24;  // eax
    st_51a480_1 *v14;  // eax
    st_51a480_4 *v15;  // ecx
    st_51a480_3 *v16;  // edx
    double v17;  // mm7
    st_51a480_2 *v18;  // ecx
    double v19;  // mm6
    unsigned int *v20;  // edx
    double v21;  // mm4
    float v0;  // [bp-0x34]
    float v1;  // [bp-0x30]
    float v2;  // [bp-0x2c]
    float v3;  // [bp-0x28]
    float v4;  // [bp-0x24]
    float v5;  // [bp-0x20]
    float v6;  // [bp-0x1c]
    float v7;  // [bp-0x18]
    int v8;  // [bp-0xc]
    unsigned short v9;  // [bp-0x8]
    unsigned short v10;  // [bp-0x6]

    if (*(int *)(*(unsigned int *)&idx + 196))
        return v24;
    v12 = *(float *)(*(int *)*(int *)(*(unsigned int *)&idx + 128) + 608);
    if (v12 <= 500.0f)
        return v24;
    v13 = 750;
    if (v12 < 750.0f)
    {
        v10 = __fnstcw();
        v9 = v10 | 0xc00;
        v13 = (int)v12;
    }
    v8 = v13;
    v1 = (float)((double)v8 / 750.0);
    sub_48c980(*(int *)(*(unsigned int *)&idx + 128), v13);
    sub_48d680(*(int *)(*(unsigned int *)&idx + 128), 5);
    sub_48cc70(idx);
    v14 = *(int *)*(int *)(*(unsigned int *)&idx + 128);
    v15 = &v14->padding_0[116];
    v16 = &v14->padding_0[104];
    v2 = *(float *)&v14->padding_0[116] + *(float *)&v14->padding_0[104];
    v3 = *(float *)&v15->padding_0[4] + *(float *)&v16->padding_0[4];
    v4 = *(float *)&v15->padding_0[8] + *(float *)&v16->padding_0[8];
    sub_48a800(&v2);
    v17 = v1 * 325.0;
    v18 = *(int *)(*(unsigned int *)&idx + 128);
    v0 = 0.5f;
    v19 = 0.5 * v17 + 40.0;
    v20 = &gpGlobals->field_28;
    v21 = v19 * gpGlobals->field_28;
    v5 = (float)v21;
    v22 = v19 * *(float *)&v20[1];
    v6 = (float)v22;
    v7 = (float)(v19 * *(float *)&v20[2]);
    v23 = &v18->field_0->padding_0[8];
    v2 = (float)(v21 + *(float *)&v18->field_0->padding_0[8]);
    v3 = (float)(v22 + *(float *)&v23->padding_0[4]);
    v4 = *(float *)&v23->padding_0[8] + v7;
    sub_48ab00(&v2, v18->field_0, v18->field_0, 0, (float)v17, 0, 2);
    if (*(int *)(*(int *)(*(unsigned int *)&idx + 128) + 836))
        return v24;
    v2 = 255.0f;
    v3 = 255.0f;
    v4 = 255.0f;
    v24 = sub_48df50(*(int *)(*(unsigned int *)&idx + 128), &v2, 0x3f800000, v0, 0xff, 0);
    return v24;
}

