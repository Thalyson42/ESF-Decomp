// RandomPoint__10CLightningR6Vector @0xb2200 size=614
typedef struct st_4b2200_2 {
    struct st_4b2200_1 *field_0;
    char padding_4[144];
    float field_94;
} st_4b2200_2;

typedef struct st_4b2200_1 {
    char padding_0[520];
    int field_208;
} st_4b2200_1;

typedef struct st_4b2200_0 {
    unsigned int field_0;
} st_4b2200_0;

extern st_4b2200_0 *g_61692c;

unsigned int RandomPoint__10CLightningR6Vector(st_4b2200_2 *a0, float *a1)
{
    double v24;  // mm7
    st_4b2200_2 *v32;  // edx
    double v33;  // mm0
    double v34;  // mm6
    double v35;  // mm6
    float v36;  // 120
    float v37;  // 120
    float v38;  // 120
    double v39;  // mm0
    double v40;  // mm7
    st_4b2200_2 *v41;  // edx
    unsigned int v42;  // eax
    double v25;  // mm0
    float v26;  // 128
    double v27;  // mm7
    double v28;  // mm0
    double v29;  // mm7
    double v30;  // mm0
    double v31;  // mm0
    char *v0;  // [bp-0xc4]
    float v1;  // [bp-0xc0]
    float v2;  // [bp-0xbc]
    int v3;  // [bp-0xb8]
    float v4;  // [bp-0xa4]
    float v5;  // [bp-0xa0]
    float v6;  // [bp-0x9c]
    float v7;  // [bp-0x8c]
    float v8;  // [bp-0x84]
    char v9;  // [bp-0x84]
    float v10;  // [bp-0x80]
    float v11;  // [bp-0x7c]
    char v12;  // [bp-0x64]
    float v13;  // [bp-0x58]
    float v14;  // [bp-0x54]
    float v15;  // [bp-0x50]
    float v16;  // [bp-0x4c]
    float v17;  // [bp-0x48]
    float v18;  // [bp-0x44]
    float v19;  // [bp-0x40]
    float v20;  // [bp-0x3c]
    float v21;  // [bp-0x24]
    float v22;  // [bp-0x20]
    float v23;  // [bp-0x1c]

    v3 = 0;
    v0 = &v9;
    while (1)
    {
        g_61692c(0xbf800000, 0x3f800000);
        v2 = (float)v24;
        g_61692c(0xbf800000, 0x3f800000);
        v1 = (float)v24;
        g_61692c(0xbf800000, 0x3f800000);
        v21 = v2;
        v26 = v1;
        v22 = v26;
        v27 = v25;
        v23 = (float)v27;
        v28 = v2 * v21 + v26 * v26 + v27 * v27;
        v29 = sqrt(v28);
        if (isnan(v29))
            sub_487dc0(*(unsigned int *)&v28);
        else
            v28 = v29;
        v13 = (float)v28;
        v30 = v13;
        if (v30 == 0.0)
        {
            v18 = 0.0f;
            v19 = 0.0f;
            v20 = 1.0;
        }
        else
        {
            v31 = 1.0 / v30;
            v18 = (float)(v31 * v21);
            v19 = (float)(v31 * v22);
            v20 = (float)(v31 * v23);
        }
        v21 = v18;
        v22 = v19;
        v23 = v20;
        v32 = a0;
        v33 = v32->field_94;
        v34 = v33 * v21;
        v4 = (float)v34;
        v35 = v33 * v22;
        v5 = (float)v35;
        v6 = (float)(v33 * v23);
        v8 = (float)(v34 + *a1);
        v10 = (float)(v35 + a1[1]);
        v11 = a1[2] + v6;
        sub_487b80(a1, v0, 1, v32->field_0->field_208, &v12);
        v36 = v15 - *a1;
        v4 = v36;
        v37 = v16 - a1[1];
        v5 = v37;
        v38 = v17 - a1[2];
        v6 = v38;
        v39 = v36 * v36 + v37 * v37 + v38 * v38;
        v40 = sqrt(v39);
        if (isnan(v40))
            sub_487dc0(*(unsigned int *)&v39);
        else
            v39 = v40;
        v7 = (float)v39;
        v25 = v7;
        v41 = a0;
        v24 = 0.1 * v41->field_94;
        if (v24 <= v25)
        {
            v25 = v14;
            v24 = 1.0;
            if (v25 != 1.0)
            {
                v42 = sub_487e40(v41, a1, &v15);
                return v42;
            }
        }
        v3 += 1;
        if (v3 > 9)
            return v42;
    }
}

