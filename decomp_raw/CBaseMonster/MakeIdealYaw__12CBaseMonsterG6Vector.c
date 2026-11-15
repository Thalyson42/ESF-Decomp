// MakeIdealYaw__12CBaseMonsterG6Vector @0xd8400 size=158
typedef struct st_4d8400_1 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[152];
    float field_ac;
} st_4d8400_1;

typedef struct st_4d8400_0 {
    struct st_4d8400_1 *field_0;
    char padding_4[552];
    unsigned int field_22c;
} st_4d8400_0;

unsigned int * MakeIdealYaw__12CBaseMonsterG6Vector(double a0, st_4d8400_0 *a1, float *a2)
{
    double v6;  // mm7
    unsigned int *v7;  // edx
    double v8;  // mm7
    double v9;  // mm6
    double v10;  // mm5
    double v11;  // mm7
    float *v12;  // eax
    float v0;  // [bp-0x44]
    float v1;  // [bp-0x40]
    float v2;  // [bp-0x3c]
    float v3;  // [bp-0x24]
    float v4;  // [bp-0x20]
    float v5;  // [bp-0x1c]

    if (a1->field_22c == 11)
    {
        v6 = -a2[1];
        goto LABEL_4d843c;
    }
    else if (a1->field_22c == 12)
    {
        v6 = a2[1];
LABEL_4d843c:
        v3 = (float)v6;
        v4 = *a2;
        v7 = &a1->field_0->field_8;
        v8 = v3 - a1->field_0->field_8;
        v9 = v4 - *(float *)&v7[1];
        v10 = v5;
    }
    else
    {
        v7 = &a1->field_0->field_8;
        v8 = *a2 - a1->field_0->field_8;
        v9 = a2[1] - *(float *)&v7[1];
        v10 = a2[2];
    }
    v11 = v10 - *(float *)&v7[2];
    v0 = (float)v8;
    v1 = (float)v9;
    v2 = (float)v11;
    sub_48c2d0(&v0);
    v12 = a1->field_0;
    v12[43] = (float)v11;
    return v12;
}

