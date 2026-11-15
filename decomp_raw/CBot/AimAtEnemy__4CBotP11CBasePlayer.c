// AimAtEnemy__4CBotP11CBasePlayer @0x153540 size=568
typedef struct st_553540_2 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[244];
    unsigned int field_108;
} st_553540_2;

typedef struct st_553540_1 {
    struct st_553540_2 *field_0;
    char padding_4[2552];
    char field_9fc;
    char padding_9fd[531];
    unsigned int field_c10;
    unsigned int field_c14;
    unsigned int field_c18;
} st_553540_1;

typedef struct st_553540_0 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[12];
    float field_20;
    float field_24;
    float field_28;
} st_553540_0;

typedef struct st_553540_3 {
    unsigned int field_0;
} st_553540_3;

extern st_553540_3 *g_engfuncs.pfnRandomFloat;

int AimAtEnemy__4CBotP11CBasePlayer(st_553540_1 *a0, st_553540_0 **a1)
{
    unsigned int *v20;  // edx
    unsigned int *v21;  // edx
    unsigned int v30;  // 128
    double v31;  // mm0
    unsigned int *v33;  // edx
    float v22;  // 112
    float v23;  // 112
    float v24;  // 112
    double v25;  // mm7
    double v26;  // mm6
    unsigned int *v27;  // edx
    double v28;  // mm7
    double v29;  // mm6
    float v0;  // [bp-0x88]
    int v1;  // [bp-0x80]
    float v2;  // [bp-0x68]
    char v3;  // [bp-0x64]
    float v4;  // [bp-0x64]
    unsigned int v5;  // [bp-0x60]
    float v6;  // [bp-0x60]
    float v7;  // [bp-0x5c]
    float v8;  // [bp-0x58]
    float v9;  // [bp-0x54], Other Possible Types: unsigned int
    float v10;  // [bp-0x50]
    float v11;  // [bp-0x44]
    float v12;  // [bp-0x40]
    float v13;  // [bp-0x3c]
    char v14;  // [bp-0x38], Other Possible Types: unsigned int
    unsigned int v15;  // [bp-0x34]
    unsigned int v16;  // [bp-0x30]
    float v17;  // [bp-0x24]
    float v18;  // [bp-0x20]
    float v19;  // [bp-0x1c]

    v20 = &*a1->field_8;
    v17 = *a1->field_8;
    v18 = *(float *)&v20[1];
    v19 = *(float *)&v20[2];
    v21 = &a0->field_0->field_8;
    v22 = v17 - *(float *)&a0->field_0->field_8;
    v11 = v22;
    v23 = v18 - *(float *)&v21[1];
    v12 = v23;
    v24 = v19 - *(float *)&v21[2];
    v13 = v24;
    v25 = v22 * v22 + v23 * v23 + v24 * v24;
    v26 = sqrt(v25);
    if (isnan(v26))
        sqrt(*(unsigned int *)&v25);
    else
        v25 = v26;
    v2 = (float)v25;
    v27 = &*a1->field_20;
    v28 = *a1->field_20 * *a1->field_20 + *(float *)&v27[1] * *(float *)&v27[1] + *(float *)&v27[2] * *(float *)&v27[2];
    v29 = sqrt(v28);
    if (isnan(v29))
        sqrt(*(unsigned int *)&v28);
    else
        v28 = v29;
    v8 = (float)v28;
    if (v8 + 35.0 < v2)
    {
        if (a0->field_9fc)
        {
            if (a0->field_9fc != 1)
                goto LABEL_5536e2;
            if (a0->field_0->field_108 == 11)
            {
                v0 = 0.800000011920929f;
                v30 = 0xa0000000;
            }
            else
            {
                v0 = 0.20000000298023224f;
                v30 = 0xa0000000;
            }
        }
        else if (a0->field_0->field_108 == 11)
        {
            v0 = 1.100000023841858f;
            v30 = 0x40000000;
        }
        else
        {
            v0 = 0.4000000059604645f;
            v30 = 0xa0000000;
        }
        g_engfuncs.pfnRandomFloat(v30);
LABEL_5536e2:
        if (0.0 < v31)
        {
            *(unsigned short *)&v1 = 1;
            PredictEntityPos(&v3, a1, (float)v31, v1);
            v8 = v4;
            v9 = v5;
            v10 = v7;
            CBot::GetAimAngles(&v14, a0, &v8);
            a0->field_c10 = v14;
            a0->field_c14 = v15;
            a0->field_c18 = v16;
            return v16;
        }
    }
    v33 = &*a1->field_8;
    v4 = *a1->field_8;
    v6 = *(float *)&v33[1];
    v7 = *(float *)&v33[2];
    v8 = *a1->field_8;
    v9 = *(float *)&v33[1];
    v10 = *(float *)&v33[2];
    CBot::GetAimAngles(&v14, a0, &v8);
    a0->field_c10 = v14;
    a0->field_c14 = v15;
    a0->field_c18 = v16;
    return v16;
}

