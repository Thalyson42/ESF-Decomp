// SetBoundingBox__9CEnvModel @0xb9270 size=288
typedef struct st_4b9270_1 {
    struct st_4b9270_0 *field_0;
    char padding_4[680];
    float field_2ac;
    float field_2b0;
    float field_2b4;
    float field_2b8;
} st_4b9270_1;

typedef struct st_4b9270_0 {
    char padding_0[84];
    float field_54;
} st_4b9270_0;

int SetBoundingBox__9CEnvModel(double a0, double a1, st_4b9270_1 *a2)
{
    float v10;  // 128
    double v11;  // mm7
    float v12;  // 128
    double v13;  // mm6
    double v14;  // mm5
    double v15;  // mm4
    float v16;  // 96
    float v0;  // [bp-0x6c]
    double v1;  // [bp-0x64]
    float v2;  // [bp-0x58]
    float v3;  // [bp-0x54]
    float v4;  // [bp-0x50]
    float v5;  // [bp-0x4c]
    float v6;  // [bp-0x34]
    float v7;  // [bp-0x30]
    float v8;  // [bp-0x2c]
    float v9;  // [bp-0x8]

    v9 = (float)((a2->field_0->field_54 + a2->field_0->field_54) * 3.141592653589793 / 360.0 + 1.5707963267948966);
    v10 = v9;
    v1 = -(a2->field_2ac - a2->field_2b0);
    v0 = v10;
    sub_48a9e0(*(unsigned int *)&v0, *(unsigned int *)((void*)&v0 + 4));
    v11 = v10 * v1;
    v2 = (float)v11;
    sub_48aeb0(*(unsigned int *)&v0, *(unsigned int *)((void*)&v0 + 4));
    v9 = (float)(v11 * v1);
    v12 = v9;
    v13 = a2->field_2b0;
    if (v2 + v13 <= v13)
        v13 += v2;
    v14 = a2->field_2b0;
    if (v12 + v14 <= v14)
        v14 += v12;
    v15 = a2->field_2b0;
    if (v2 + v15 >= v15)
        v15 += v2;
    v16 = a2->field_2b0;
    v6 = (float)v15;
    v7 = (float)(v12 + v16 < v16 ? v16 : v12 + v16);
    v8 = a2->field_2b4;
    v3 = (float)v13;
    v4 = (float)v14;
    v5 = a2->field_2b8;
    return sub_48a0d0(a2->field_0, &v3, &v6);
}

