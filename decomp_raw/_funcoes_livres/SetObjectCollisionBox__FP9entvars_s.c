// SetObjectCollisionBox__FP9entvars_s @0x9d510 size=436
typedef struct st_49d510_0 {
    char padding_0[8];
    float field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[60];
    unsigned int field_50;
    float field_54;
    float field_58;
    char padding_5c[104];
    unsigned int field_c4;
    float field_c8;
    float field_cc;
    unsigned int field_d0;
    float field_d4;
    struct st_49d510_1 *field_d8;
    float field_dc;
    unsigned int field_e0;
    unsigned int field_e4;
    float field_e8;
    unsigned int field_ec;
    unsigned int field_f0;
    char padding_f4[24];
    unsigned int field_10c;
} st_49d510_0;

typedef struct st_49d510_1 {
    unsigned int field_0;
} st_49d510_1;

unsigned int * SetObjectCollisionBox__FP9entvars_s(st_49d510_0 *a0)
{
    double v5;  // mm7
    int i;  // edx
    int idx;  // edx
    unsigned int *v8;  // eax
    unsigned int *v9;  // edx
    unsigned int *v10;  // eax
    unsigned int *v11;  // eax
    float v0;  // [bp-0x34]
    float v1;  // [bp-0x30]
    float v2;  // [bp-0x2c]
    unsigned int *v3;  // [bp-0x2c]
    unsigned int v4;  // [bp-0x8]

    if (a0->field_10c == 4)
    {
        if (*(float *)&a0->field_50 == 0.0f && a0->field_54 == 0.0f && a0->field_58 == 0.0f)
            goto LABEL_49d5e4;
        v5 = 0.0;
        i = 0;
        do
        {
            *(float *)&v4 = fabsf((&a0->field_dc)[i]);
            if (*(float *)&v4 > v5)
                v5 = *(float *)&v4;
            *(float *)&v4 = fabsf((&a0->field_e8)[i]);
            if (*(float *)&v4 > v5)
                v5 = *(float *)&v4;
            i += 1;
        } while (i <= 2);
        idx = 0;
        v8 = &a0->field_8;
        do
        {
            *(float *)&(&a0->field_c4)[idx] = (float)(*(float *)&v8[idx] - v5);
            *(float *)&(&a0->field_d0)[idx] = (float)(v5 + *(float *)&v8[idx]);
            idx += 1;
        } while (idx <= 2);
    }
    else
    {
LABEL_49d5e4:
        v9 = &a0->field_8;
        v10 = &a0->field_dc;
        v0 = a0->field_8 + a0->field_dc;
        v1 = *(float *)&v9[1] + *(float *)&v10[1];
        v2 = *(float *)&v9[2] + *(float *)&v10[2];
        *(float *)&a0->field_c4 = v0;
        a0->field_c8 = v1;
        a0->field_cc = v2;
        v11 = &a0->field_e8;
        v0 = a0->field_8 + a0->field_e8;
        v1 = *(float *)&v9[1] + *(float *)&v11[1];
        v3 = (unsigned int *)(*(float *)&v9[2] + *(float *)&v11[2]);
        *(float *)&a0->field_d0 = v0;
        a0->field_d4 = v1;
        v8 = v3;
        a0->field_d8 = v8;
    }
    *(float *)&a0->field_c4 = (float)(*(float *)&a0->field_c4 - 1.0);
    a0->field_c8 = (float)(a0->field_c8 - 1.0);
    a0->field_cc = (float)(a0->field_cc - 1.0);
    *(float *)&a0->field_d0 = (float)(*(float *)&a0->field_d0 + 1.0);
    a0->field_d4 = (float)(a0->field_d4 + 1.0);
    *(float *)&a0->field_d8 = (float)(1.0 + *(float *)&a0->field_d8);
    return v8;
}

