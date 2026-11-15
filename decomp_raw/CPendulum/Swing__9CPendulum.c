// Swing__9CPendulum @0x93170 size=464
typedef struct st_493170_2 {
    char padding_0[436];
    unsigned int field_1b4;
} st_493170_2;

typedef struct st_493170_1 {
    char padding_0[504];
    unsigned int field_1f8;
} st_493170_1;

typedef struct st_493170_0 {
    float field_0;
} st_493170_0;

extern unsigned int g_vecZero;
extern unsigned int g_616790;
extern unsigned int g_616794;
extern st_493170_0 *gpGlobals;

int Swing__9CPendulum(double a0, float idx)
{
    float v4;  // 128
    double v5;  // mm0
    st_493170_1 *v14;  // ecx
    st_493170_1 *v15;  // edx
    double v16;  // mm0
    st_493170_1 *v6;  // eax
    double v7;  // mm7
    st_493170_1 *v8;  // edx
    double v9;  // mm7
    st_493170_1 *v10;  // edx
    unsigned int v11;  // 128
    st_493170_2 *v12;  // eax
    st_493170_1 *v13;  // edx
    float v0;  // [bp-0x24]
    float v1;  // [bp-0x20]
    float v2;  // [bp-0x1c]

    sub_4881d0(*(int *)(*(int *)idx + 416), *(int *)idx + 80, *(unsigned int *)&idx + 124);
    v4 = *(float *)gpGlobals - *(float *)(*(unsigned int *)&idx + 108);
    *(float *)(*(unsigned int *)&idx + 108) = *(float *)gpGlobals;
    if (0.0 < a0)
    {
        v5 = v4;
        if (0.0 >= *(float *)(*(unsigned int *)&idx + 100))
            goto LABEL_4931e2;
        v6 = *(int *)idx;
        v7 = *(float *)&v6->field_1f8 - v5 * *(float *)(*(unsigned int *)&idx + 100);
    }
    else
    {
        v5 = v4;
LABEL_4931e2:
        v6 = *(int *)idx;
        v7 = v5 * *(float *)(*(unsigned int *)&idx + 100) + *(float *)&v6->field_1f8;
    }
    *(float *)&v6->field_1f8 = (float)v7;
    v8 = *(int *)idx;
    if (*(float *)(*(int *)idx + 504) > *(float *)(*(unsigned int *)&idx + 116))
    {
        v9 = *(float *)(*(unsigned int *)&idx + 116);
LABEL_493224:
        *(float *)&v8->field_1f8 = (float)v9;
    }
    else
    {
        v8 = *(int *)idx;
        v9 = -*(float *)(*(unsigned int *)&idx + 116);
        if (v9 > *(float *)&v8->field_1f8)
            goto LABEL_493224;
    }
    v10 = *(int *)idx;
    v11 = *&v10->field_1f8;
    v12 = &v10->padding_0[0x44];
    v0 = __int_as_float(v11) * *(float *)&v10->padding_0[0x44];
    v1 = __int_as_float(v11) * *(float *)&v12->padding_0[4];
    v2 = __int_as_float(v11) * *(float *)&v12->padding_0[8];
    *(float *)&v10->padding_0[92] = v0;
    *(float *)&v10->padding_0[96] = v1;
    *(float *)&v10->padding_0[100] = v2;
    *(float *)(*(int *)idx + 260) = (float)(0.1 + *(float *)(*(int *)idx + 0x100));
    if (*(float *)(*(unsigned int *)&idx + 112) != 0.0f)
    {
        *(float *)(*(unsigned int *)&idx + 120) = (float)(*(float *)(*(unsigned int *)&idx + 120) - v5 * *(float *)(*(unsigned int *)&idx + 112) * *(float *)(*(unsigned int *)&idx + 120));
        if (30.0 > *(float *)(*(unsigned int *)&idx + 120))
        {
            v13 = *(int *)idx;
            *(int *)&v13->padding_0[80] = *(int *)(*(unsigned int *)&idx + 124);
            *(int *)&v13->padding_0[84] = *(int *)(*(unsigned int *)&idx + 128);
            *(int *)&v13->padding_0[88] = *(int *)(*(unsigned int *)&idx + 132);
            *(unsigned int *)(*(int *)idx + 504) = 0;
            *(unsigned int *)(*(unsigned int *)&idx + 12) = 0;
            *(unsigned int *)(*(unsigned int *)&idx + 16) = 0;
            v14 = *(int *)idx;
            *(unsigned int *)&v14->padding_0[92] = g_vecZero;
            *(unsigned int *)&v14->padding_0[96] = g_616790;
            *(unsigned int *)&v14->padding_0[100] = g_616794;
        }
        else
        {
            v15 = *(int *)idx;
            if (*(float *)(*(int *)idx + 504) > *(float *)(*(unsigned int *)&idx + 120))
            {
                v16 = *(float *)(*(unsigned int *)&idx + 120);
            }
            else
            {
                v15 = *(int *)idx;
                v16 = -*(float *)(*(unsigned int *)&idx + 120);
                if (v16 <= *(float *)&v15->field_1f8)
                    goto LABEL_493333;
            }
            *(float *)&v15->field_1f8 = (float)v16;
        }
    }
    else
    {
LABEL_493333:
    }
    return g_616794;
}

