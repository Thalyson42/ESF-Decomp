// AngleVectors @0x18d530 size=362
typedef struct st_58d530_0 {
    float field_0;
    float field_4;
    unsigned int field_8;
} st_58d530_0;

float AngleVectors(float *a0, unsigned int *a1, float *a2, st_58d530_0 *a3)
{
    float v9;  // 128
    float v10;  // 128
    float v11;  // 128
    float v12;  // 128
    double v13;  // mm5
    double v14;  // mm4
    double v15;  // mm3
    float v16;  // 120
    double v17;  // mm4
    float v0;  // [bp-0x44]
    float v1;  // [bp-0x3c]
    float v2;  // [bp-0x34]
    float v3;  // [bp-0x28]
    float v4;  // [bp-0x24]
    float v5;  // [bp-0x20]
    float v6;  // [bp-0x1c]
    float v7;  // [bp-0x18]
    float v8;  // [bp-0x8]

    v8 = (float)(0.017453292519943295 * a0[1]);
    v9 = v8;
    v2 = v9;
    sub_48aeb0(*(unsigned int *)&v2, *(unsigned int *)((void*)&v2 + 4));
    v5 = v9;
    sub_48a9e0(*(unsigned int *)&v2, *(unsigned int *)((void*)&v2 + 4));
    v3 = v9;
    v8 = (float)(0.017453292519943295 * *a0);
    v10 = v8;
    v1 = v10;
    sub_48aeb0(*(unsigned int *)&v1, *(unsigned int *)((void*)&v1 + 4));
    v6 = v10;
    sub_48a9e0(*(unsigned int *)&v1, *(unsigned int *)((void*)&v1 + 4));
    v4 = v10;
    v8 = (float)(0.017453292519943295 * a0[2]);
    v11 = v8;
    v0 = v11;
    sub_48aeb0(*(unsigned int *)&v0, *(unsigned int *)((void*)&v0 + 4));
    v7 = v11;
    sub_48a9e0(*(unsigned int *)&v0, *(unsigned int *)((void*)&v0 + 4));
    v8 = v11;
    v12 = v8;
    if (a1)
    {
        *(float *)a1 = v4 * v3;
        *(float *)&a1[1] = v4 * v5;
        *(float *)&a1[2] = -v6;
    }
    if (a2)
    {
        v13 = v7 * -1.0;
        v14 = v6 * v13;
        v15 = -1.0 * v12;
        *a2 = (float)(v3 * v14 + -v5 * v15);
        a2[1] = (float)(v14 * v5 + v15 * v3);
        a2[2] = (float)(v13 * v4);
    }
    if (!a3)
        return v12;
    v16 = v6 * v12;
    v17 = -v7;
    a3->field_0 = (float)(v3 * v16 + -v5 * v17);
    a3->field_4 = (float)(v16 * v5 + v17 * v3);
    *(float *)&a3->field_8 = v12 * v4;
    return v12 * v4;
}

