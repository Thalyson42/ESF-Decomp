// PM_CheckWaterJump @0x192e40 size=649
typedef struct st_592e40_1 {
    unsigned int field_0;
} st_592e40_1;

typedef struct st_592e40_0 {
    char padding_0[20];
    float field_14;
    float field_18;
    char padding_1c[28];
    float field_38;
    float field_3c;
    float field_40;
    char padding_44[24];
    float field_5c;
    float field_60;
    float field_64;
    char field_68;
    char padding_69[80];
    char field_b9;
    char padding_ba[2];
    unsigned int field_bc;
    char padding_c0[8];
    char field_c8;
    char padding_c9[3];
    float field_cc;
    char padding_d0[324700];
    float field_4f52c;
    char padding_4f530[80];
    struct st_592e40_1 *field_4f580;
} st_592e40_0;

extern int vec3_origin;
extern st_592e40_0 *pmove;

double PM_CheckWaterJump(void)
{
    double v22;  // mm7
    char *v0;  // [bp-0x110]
    float v1;  // [bp-0x10c]
    char *v2;  // [bp-0x108]
    char *v3;  // [bp-0x104]
    float v4;  // [bp-0x100]
    unsigned int idx;  // [bp-0xfc]
    float v6;  // [bp-0xf8]
    char v7;  // [bp-0xe4]
    float v8;  // [bp-0xd4]
    char v9;  // [bp-0xc4]
    float v10;  // [bp-0xbc]
    float v11;  // [bp-0x84]
    float v12;  // [bp-0x80]
    float v13;  // [bp-0x7c]
    float v14;  // [bp-0x64]
    float v15;  // [bp-0x60]
    float v16;  // [bp-0x5c]
    char v17;  // [bp-0x44]
    float v18;  // [bp-0x24]
    float v19;  // [bp-0x20]
    float v20;  // [bp-0x1c]

    if (pmove->field_cc != 0.0)
    {
        return pmove->field_cc;
    }
    else if (-180.0 <= pmove->field_64)
    {
        v11 = pmove->field_5c;
        v12 = pmove->field_60;
        v13 = 0;
        sub_489290(&v11);
        v6 = pmove->field_60;
        v14 = pmove->field_14;
        v15 = pmove->field_18;
        v16 = 0;
        sub_489290(&v14);
        if (v6 != 0.0f && __float_as_int(v11 * v14) + __float_as_int(v12 * v15) + v13 * v16 < 0.0f)
            return 0.0;
        v18 = pmove->field_38;
        v19 = pmove->field_3c;
        v20 = pmove->field_40;
        v4 = 8.0f;
        v20 = (float)(8.0 + v20);
        v3 = &v17;
        v2 = &v14;
        v1 = 24.0f;
        sub_48c590(&v18, 24.0f, &v14, &v17);
        idx = pmove->field_bc;
        pmove->field_bc = 2;
        v0 = &v7;
        pmove->field_4f580(v0, &v18, v3, 0, 0xffffffff);
        v22 = 1.0;
        if (1.0 > v8)
        {
            v22 = fabs(v10);
            if (v22 < 0.10000000149011612)
            {
                v20 += (&pmove->field_4f52c)[3 * idx] - v4;
                sub_48c590(&v18, v1, v2, v3);
                sub_48c590(&vec3_origin, -50.0f, &v9, &pmove->field_68);
                pmove->field_4f580(v0, &v18, v3, 0, 0xffffffff);
                v22 = v8;
                if (v22 == 1.0)
                {
                    pmove->field_cc = 2000.0f;
                    v22 = 225.0;
                    pmove->field_64 = 225.0f;
                    pmove->field_c8 = pmove->field_c8 | 2;
                    pmove->field_b9 = pmove->field_b9 | 8;
                }
            }
        }
        pmove->field_bc = idx;
        return v22;
    }
    else
    {
        return -180.0;
    }
}

