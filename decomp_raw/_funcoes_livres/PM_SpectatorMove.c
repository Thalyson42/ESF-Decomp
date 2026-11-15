// PM_SpectatorMove @0x191ad0 size=842
typedef struct st_591ad0_3 {
    char padding_0[4];
    unsigned int field_4;
    char padding_8[4];
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[8];
    unsigned int field_1c;
} st_591ad0_3;

typedef struct st_591ad0_2 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    char padding_c[404];
    unsigned int field_1a0;
    unsigned int field_1a4;
    char padding_1a8[72];
    unsigned int field_1f0;
    char padding_1f4[80];
    unsigned int field_244;
    char padding_248[283076];
    unsigned int field_4540c;
    unsigned int field_45410;
    unsigned int field_45414;
    char padding_45418[41084];
    struct st_591ad0_3 *field_4f494;
} st_591ad0_2;

typedef struct st_591ad0_1 {
    char padding_0[4];
    float field_4;
    char padding_8[4];
    float field_c;
    float field_10;
    char padding_14[8];
    float field_1c;
} st_591ad0_1;

typedef struct st_591ad0_0 {
    char padding_0[16];
    float field_10;
    char field_14;
    char padding_15[11];
    char field_20;
    char padding_21[23];
    unsigned int field_38;
    unsigned int field_3c;
    unsigned int field_40;
    unsigned int field_44;
    unsigned int field_48;
    unsigned int field_4c;
    char padding_50[12];
    float field_5c;
    float field_60;
    float field_64;
    char padding_68[404];
    unsigned int field_1fc;
    int field_200;
    char padding_204[72];
    int field_24c;
    char padding_250[80];
    int field_2a0;
    char padding_2a4[283076];
    float field_45468;
    float field_4546c;
    float field_45470;
    char padding_45474[41084];
    struct st_591ad0_1 *field_4f4f0;
} st_591ad0_0;

extern float vec3_origin;
extern float vec3_origin+4;
extern float vec3_origin+8;
extern st_591ad0_0 *pmove;

double PM_SpectatorMove(void)
{
    double v11;  // mm0
    double v12;  // mm5
    float *v21;  // eax
    st_591ad0_2 *v22;  // edx
    double v23;  // mm7
    int v24;  // ecx
    unsigned int v25;  // eax
    double v26;  // mm7
    double v13;  // mm0
    double v14;  // mm0
    double v15;  // mm7
    int idx;  // ecx
    double v17;  // mm0
    double v18;  // mm7
    double v19;  // mm0
    int j;  // ecx
    float v0;  // [bp-0x5c]
    float v1;  // [bp-0x58]
    float v2;  // [bp-0x48]
    float v3;  // [bp-0x44]
    float v4;  // [bp-0x40]
    float v5;  // [bp-0x3c]
    char v6;  // [bp-0x24]
    float v7;  // [bp-0x24]
    float v8;  // [bp-0x20]
    float v9;  // [bp-0x1c]

    if (pmove->field_1fc == 3)
    {
        Length(&pmove->field_5c);
        if (1.0 > v11)
        {
            pmove->field_5c = vec3_origin;
            pmove->field_60 = vec3_origin+4;
            pmove->field_64 = vec3_origin+8;
        }
        else
        {
            v2 = (float)(1.5 * pmove->field_4f4f0->field_1c);
            v12 = v11;
            if (v12 < pmove->field_4f4f0->field_4)
                v13 = pmove->field_4f4f0->field_4;
            v14 = v12;
            v15 = v14 - (0.0 + v2 * v13 * pmove->field_10);
            if (0.0 > v15)
                v15 = 0.0;
            VectorScale(&pmove->field_5c, (float)(v15 / v14), &pmove->field_5c);
        }
        v1 = pmove->field_45468;
        v0 = pmove->field_4546c;
        VectorNormalize(&pmove->field_14);
        VectorNormalize(&pmove->field_20);
        idx = 0;
        do
        {
            (&v7)[idx] = v1 * *(float *)&(&pmove->field_14)[4 * idx] + v0 * *(float *)&(&pmove->field_20)[4 * idx];
            idx += 1;
        } while (idx <= 2);
        v17 = v9 + pmove->field_45470;
        v9 = (float)v17;
        v3 = v7;
        v4 = v8;
        v5 = (float)v17;
        VectorNormalize(&v3);
        if (v17 > pmove->field_4f4f0->field_c)
        {
            VectorScale(&v6, (float)(pmove->field_4f4f0->field_c / v17), &v6);
            v17 = pmove->field_4f4f0->field_c;
        }
        v18 = v17 - (pmove->field_5c * v3 + pmove->field_60 * v4 + pmove->field_64 * v5);
        if (0.0 >= v18)
            return v18;
        v19 = v17 * pmove->field_4f4f0->field_10 * pmove->field_10;
        if (v18 < v19)
            v19 = v18;
        j = 0;
        do
        {
            v21 = j * 4;
            v22 = &pmove->field_5c;
            v23 = v19 * *(float *)(v21 + &v3) + *(float *)(v21 + v22);
            *(float *)(v21 + v22) = (float)v23;
            j += 1;
        } while (j <= 2);
        VectorMA(&pmove->field_38, pmove->field_10, &pmove->field_5c, &pmove->field_38);
        return v23;
    }
    else if (pmove->field_200 > 0)
    {
        v24 = 0;
        if (0 < pmove->field_24c && pmove->field_2a0 != pmove->field_200)
        {
            do
            {
                v24 += 1;
            } while (v24 < pmove->field_24c && (&pmove->field_2a0)[56 * v24] != pmove->field_200);
        }
        if (v24 == pmove->field_24c)
            return vec3_origin+8;
        v25 = v24 * 224;
        *(float *)&pmove->field_44 = *(float *)&pmove->padding_2a4[v25];
        *(float *)&pmove->field_48 = *(float *)&pmove->padding_2a4[4 + v25];
        *(float *)&pmove->field_4c = *(float *)&pmove->padding_2a4[8 + v25];
        *(float *)&pmove->field_38 = *(float *)&pmove->padding_250[36 + v25];
        *(float *)&pmove->field_3c = *(float *)&pmove->padding_250[40 + v25];
        *(float *)&pmove->field_40 = *(float *)&pmove->padding_250[44 + v25];
        pmove->field_5c = vec3_origin;
        pmove->field_60 = vec3_origin+4;
        pmove->field_64 = vec3_origin+8;
        return vec3_origin+8;
    }
    else
    {
        return v26;
    }
}

