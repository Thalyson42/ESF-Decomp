// GetAnimationEvent__FPvP9entvars_sP14MonsterEvent_tffi @0x8f3b0 size=345
typedef struct st_48f3b0_2 {
    int field_0;
    char padding_4[160];
    int field_a4;
    unsigned int field_a8;
} st_48f3b0_2;

typedef struct st_48f3b0_1 {
    char padding_0[296];
    int field_128;
} st_48f3b0_1;

typedef struct st_48f3b0_0 {
    char padding_0[36];
    char field_24;
    char padding_25[11];
    int field_30;
    unsigned int field_34;
    int field_38;
} st_48f3b0_0;

double GetAnimationEvent__FPvP9entvars_sP14MonsterEvent_tffi(st_48f3b0_2 *a0, st_48f3b0_1 *a1, unsigned int *a2, float a3, float a4, int a5)
{
    double v2;  // mm7
    int iter;  // ecx
    st_48f3b0_0 *v4;  // esi
    st_48f3b0_2 *v5;  // edi
    double v6;  // mm5
    double v7;  // mm6
    unsigned int v8;  // edx
    unsigned int v9;  // eax
    unsigned int v0;  // [bp-0x18]
    float v1;  // [bp-0x8]

    v2 = a3;
    iter = a5;
    if (a0 && a1->field_128 < a0->field_a4 && a2)
    {
        v4 = (char *)a0 + a0->field_a8 + 176 * a1->field_128;
        v5 = (char *)a0 + v4->field_34;
        if (v4->field_30 && iter <= v4->field_30)
        {
            if (v4->field_38 > 1)
            {
                v0 = v4->field_38 - 1;
                v6 = (double)(int)v0 * 0.00390625;
                v1 = (float)(v2 * v6);
                v2 = v1;
                v1 = (float)(a4 * v6);
                v7 = v1;
            }
            else
            {
                v2 = 0.0;
                v7 = 1.0;
            }
            while (iter < v4->field_30)
            {
                v8 = iter * 76;
                if (*(int *)&v5->padding_4[v8] <= 4999)
                {
                    if ((double)*(int *)((char *)v5 + v8) < v2 || (double)*(int *)((char *)v5 + v8) >= v7)
                    {
                        if (v4->field_24 & 1)
                        {
                            v0 = v4->field_38 - 1;
                            if (((char)((0x3000 | CmpF(__double_as_longlong((double)(int)v0), __double_as_longlong(v7)) * 0x100 & 0x4500 & 0x4700) >> 8) & 69) - 1 >= 64)
                            {
                                iter += 1;
                                continue;
                            }
                            else if (v7 - (double)v4->field_38 + 1.0 <= (double)(&v5->field_0)[19 * iter])
                            {
                                iter += 1;
                                continue;
                            }
                        }
                        else
                        {
                            iter += 1;
                            continue;
                        }
                    }
                    v9 = iter * 76;
                    *a2 = *(int *)&v5->padding_4[v9];
                    a2[1] = &v5->padding_4[8 + v9];
                    return v2;
                }
                iter += 1;
            }
        }
    }
    return v2;
}

