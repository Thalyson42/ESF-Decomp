// AngleMatrix @0x18d800 size=342
typedef struct st_58d800_0 {
    unsigned int field_0;
    float field_4;
    float field_8;
    unsigned int field_c;
    unsigned int field_10;
    unsigned int field_14;
    float field_18;
    unsigned int field_1c;
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
    unsigned int field_2c;
} st_58d800_0;

float AngleMatrix(float *a0, st_58d800_0 *a1)
{
    float v10;  // 128
    float v11;  // 128
    float v12;  // 128
    float v13;  // 120
    double v14;  // mm4
    float v15;  // 112
    double v16;  // mm3
    float v0;  // [bp-0x4c]
    float v1;  // [bp-0x44]
    float v2;  // [bp-0x3c]
    double v3;  // [bp-0x34]
    float v4;  // [bp-0x28]
    float v5;  // [bp-0x24]
    float v6;  // [bp-0x20]
    float v7;  // [bp-0x1c]
    float v8;  // [bp-0x18]
    float v9;  // [bp-0x8]

    v3 = 0.017453292519943295;
    v9 = (float)(0.017453292519943295 * a0[1]);
    v10 = v9;
    v2 = v10;
    sin(*(unsigned int *)&v2, *(unsigned int *)((void*)&v2 + 4));
    v6 = v10;
    cos(*(unsigned int *)&v2, *(unsigned int *)((void*)&v2 + 4));
    v4 = v10;
    v9 = (float)(v3 * *a0);
    v11 = v9;
    v1 = v11;
    sin(*(unsigned int *)&v1, *(unsigned int *)((void*)&v1 + 4));
    v7 = v11;
    cos(*(unsigned int *)&v1, *(unsigned int *)((void*)&v1 + 4));
    v5 = v11;
    v9 = (float)(v3 * a0[2]);
    v12 = v9;
    v0 = v12;
    sin(*(unsigned int *)&v0, *(unsigned int *)((void*)&v0 + 4));
    v8 = v12;
    cos(*(unsigned int *)&v0, *(unsigned int *)((void*)&v0 + 4));
    v9 = v12;
    *(float *)&a1->field_0 = v5 * v4;
    *(float *)&a1->field_10 = v5 * v6;
    *(float *)&a1->field_20 = -v7;
    v13 = v8 * v7;
    v14 = -v6;
    a1->field_4 = (float)(v4 * v13 + v9 * v14);
    *(float *)&a1->field_14 = v13 * v6 + v4 * v9;
    *(float *)&a1->field_24 = v8 * v5;
    v15 = v7 * v9;
    v16 = -v8;
    a1->field_8 = (float)(v14 * v16 + v4 * v15);
    a1->field_18 = (float)(v16 * v4 + v15 * v6);
    *(float *)&a1->field_28 = v9 * v5;
    a1->field_c = 0;
    a1->field_1c = 0;
    a1->field_2c = 0;
    return v9 * v5;
}

