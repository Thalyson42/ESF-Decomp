// AngleVectorsTranspose @0x18d6a0 size=349
typedef struct st_58d6a0_1 {
    unsigned int field_0;
    unsigned int field_4;
    float field_8;
} st_58d6a0_1;

typedef struct st_58d6a0_0 {
    unsigned int field_0;
    float field_4;
    float field_8;
} st_58d6a0_0;

float AngleVectorsTranspose(float *a0, st_58d6a0_0 *a1, st_58d6a0_1 *a2, unsigned int *a3)
{
    float v10;  // 128
    float v11;  // 128
    float v12;  // 128
    double v13;  // mm5
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
    if (a1)
    {
        *(float *)&a1->field_0 = v5 * v4;
        v13 = -v6;
        a1->field_4 = (float)(v8 * v7 * v4 + v9 * v13);
        a1->field_8 = (float)(v13 * -v8 + v7 * v9 * v4);
    }
    if (a2)
    {
        *(float *)&a2->field_0 = v5 * v6;
        *(float *)&a2->field_4 = v8 * v7 * v6 + v4 * v9;
        a2->field_8 = (float)(v7 * v9 * v6 + -v8 * v4);
    }
    if (!a3)
        return v9;
    *(float *)a3 = -v7;
    *(float *)&a3[1] = v8 * v5;
    *(float *)&a3[2] = v9 * v5;
    return v9 * v5;
}

