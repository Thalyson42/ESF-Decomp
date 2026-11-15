// CheckLocalMove__12CBaseMonsterRC6VectorT1P11CBaseEntityPf @0xd5b70 size=548
typedef struct st_4d5b70_2 {
    char padding_0[421];
    char field_1a5;
    char padding_1a6[98];
    unsigned int field_208;
} st_4d5b70_2;

typedef struct st_4d5b70_0 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    float field_10;
    char padding_14[400];
    char field_1a4;
    char padding_1a5[99];
    unsigned int field_208;
} st_4d5b70_0;

typedef struct st_4d5b70_3 {
    char padding_0[116];
    unsigned int field_74;
} st_4d5b70_3;

typedef struct st_4d5b70_1 {
    unsigned int field_0;
} st_4d5b70_1;

extern st_4d5b70_1 *g_616828;
extern st_4d5b70_1 *g_61682c;
extern st_4d5b70_3 *gpGlobals;

unsigned int CheckLocalMove__12CBaseMonsterRC6VectorT1P11CBaseEntityPf(st_4d5b70_0 **a0, float *a1, float *a2, st_4d5b70_2 **a3, float *a4)
{
    st_4d5b70_0 *v9;  // edx
    float *v10;  // edx
    double v19;  // mm7
    float *v11;  // ecx
    float v12;  // 112
    float v13;  // 112
    double v14;  // mm7
    double v15;  // mm6
    unsigned int v16;  // edi
    unsigned int v17;  // 128
    float v0;  // [bp-0x60]
    float v1;  // [bp-0x5c]
    float v2;  // [bp-0x58]
    float v3;  // [bp-0x44]
    float v4;  // [bp-0x40]
    float v5;  // [bp-0x3c]
    unsigned int v6;  // [bp-0x24]
    unsigned int v7;  // [bp-0x20]
    float v8;  // [bp-0x1c]

    v9 = *a0;
    v6 = v9->field_8;
    v7 = v9->field_c;
    v8 = v9->field_10;
    v10 = a2;
    v3 = *v10 - *a1;
    v4 = v10[1] - a1[1];
    v5 = v10[2] - a1[2];
    sub_48c2d0(&v3);
    v2 = v5;
    v11 = a2;
    v12 = *v11 - *a1;
    v3 = v12;
    v13 = v11[1] - a1[1];
    v4 = v13;
    v5 = v11[2] - a1[2];
    v14 = v12 * v12 + v13 * v13;
    v15 = sqrt(v14);
    if (isnan(v15))
        sub_487dc0(*(unsigned int *)&v14);
    else
        v14 = v15;
    v1 = (float)v14;
    v16 = 2;
    sub_48db50(*a0, a1);
    if (!(*a0->field_1a4 & 3))
        g_616828(*a0->field_208);
    v0 = 0;
    if (v0 < v1)
    {
        do
        {
            v17 = 0;
            if ((isunordered(v1 - 1.0, v0 + 16.0) ? 0x44 : v1 - 1.0 == v0 + 16.0 ? 63 : v1 - 1.0 < v0 + 16.0 ? 0 : 0xff) < 64)
                v17 = __double_as_longlong((double)(v1 - v0) - 1.0);
            if (!g_61682c(*a0->field_208, v2, v17, 2))
            {
                if (a4)
                    *a4 = v0;
                v16 = 0;
                if (a3)
                {
                    v16 = (*a3->field_208 == gpGlobals->field_74) * 2;
                    break;
                }
            }
        } while ((v19 = v0 + 16.0, v0 = (float)v19, v19 < v1));
    }
    if (v16 == 2 && !(*a0->field_1a4 & 3) && (!a3 || *a3->field_1a5 & 2) && fabs(a2[2] - *a0->field_10) > 64.0)
        v16 = 1;
    sub_48db50(*a0, &v6);
    return v16;
}

