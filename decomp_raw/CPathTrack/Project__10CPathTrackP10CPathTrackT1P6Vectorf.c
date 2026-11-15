// Project__10CPathTrackP10CPathTrackT1P6Vectorf @0xe7000 size=318
typedef struct st_4e7000_0 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
} st_4e7000_0;

float Project__10CPathTrackP10CPathTrackT1P6Vectorf(unsigned int a0, st_4e7000_0 **a1, st_4e7000_0 **a2, float *a3, float a4)
{
    unsigned int *v12;  // esi
    unsigned int *v13;  // edx
    float v22;  // mm7
    float v14;  // 112
    float v15;  // 112
    float v16;  // 112
    double v17;  // mm7
    double v18;  // mm6
    double v19;  // mm7
    unsigned int *v20;  // edx
    float v21;  // mm7
    float v0;  // [bp-0x64]
    float v1;  // [bp-0x60]
    float v2;  // [bp-0x5c]
    float v3;  // [bp-0x58]
    float v4;  // [bp-0x54]
    float v5;  // [bp-0x50]
    float v6;  // [bp-0x44]
    float v7;  // [bp-0x40]
    float v8;  // [bp-0x3c]
    float v9;  // [bp-0x24]
    float v10;  // [bp-0x20]
    float v11;  // [bp-0x1c]

    if (!a1)
    {
        return v22;
    }
    else if (a2)
    {
        v12 = &*a2->field_8;
        v13 = &*a1->field_8;
        v14 = *a2->field_8 - *a1->field_8;
        v9 = v14;
        v15 = *(float *)&v12[1] - *(float *)&v13[1];
        v10 = v15;
        v16 = *(float *)&v12[2] - *(float *)&v13[2];
        v11 = v16;
        v17 = v14 * v14 + v15 * v15 + v16 * v16;
        v18 = sqrt(v17);
        if (isnan(v18))
            sqrt(*(unsigned int *)&v17);
        else
            v17 = v18;
        v3 = (float)v17;
        if (v3 == 0.0f)
        {
            v6 = 0.0f;
            v7 = 0.0f;
            v8 = 1.0;
        }
        else
        {
            v19 = 1.0 / v3;
            v6 = (float)(v19 * v9);
            v7 = (float)(v19 * v10);
            v8 = (float)(v19 * v11);
        }
        v9 = v6;
        v10 = v7;
        v11 = v8;
        v3 = a4 * v9;
        v4 = a4 * v10;
        v5 = a4 * v11;
        v20 = &*a2->field_8;
        v0 = *a2->field_8 + v3;
        v1 = *(float *)&v20[1] + v4;
        v2 = *(float *)&v20[2] + v5;
        *a3 = v0;
        a3[1] = v1;
        a3[2] = v2;
        return v2;
    }
    else
    {
        return v21;
    }
}

