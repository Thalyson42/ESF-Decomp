// FindCover__12CBaseMonsterG6VectorT1ff @0xd7b30 size=932
typedef struct st_4d7b30_1 {
    char padding_0[404];
    struct st_4d7b30_2 *field_194;
} st_4d7b30_1;

typedef struct st_4d7b30_2 {
    unsigned int field_0;
} st_4d7b30_2;

typedef struct st_4d7b30_0 {
    unsigned int field_0;
    char padding_4[4];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[500];
    int field_208;
} st_4d7b30_0;

typedef struct st_4d7b30_3 {
    struct st_4d7b30_0 *field_0;
    char padding_4[92];
    struct st_4d7b30_1 *field_60;
    char padding_64[508];
    int field_260;
} st_4d7b30_3;

typedef struct st_4d7b30_4 {
    char padding_0[152];
    unsigned int field_98;
} st_4d7b30_4;

extern st_4d7b30_2 *g_6168b4;
extern st_4d7b30_4 *gpGlobals;
extern unsigned int WorldGraph;
extern unsigned int g_617164;
extern unsigned int g_61716c;
extern unsigned int g_617178;
extern unsigned int g_619228;

unsigned int FindCover__12CBaseMonsterG6VectorT1ff(st_4d7b30_3 *a0, float *a1, float *a2, float a3, float a4)
{
    double v16;  // mm7
    float *v17;  // edx
    float *v18;  // edi
    unsigned int *v19;  // edx
    float v20;  // 112
    float v21;  // 112
    float v22;  // 112
    double v23;  // mm7
    double v24;  // mm6
    float *v25;  // edx
    float v0;  // [bp-0xb0]
    char *v1;  // [bp-0xac]
    int v2;  // [bp-0xa8]
    int v3;  // [bp-0xa4]
    int v4;  // [bp-0xa0]
    int v5;  // [bp-0x9c]
    unsigned int v6;  // [bp-0x98]
    float v7;  // [bp-0x94]
    float v8;  // [bp-0x90]
    float v9;  // [bp-0x8c]
    float v10;  // [bp-0x7c]
    char v11;  // [bp-0x64]
    float v12;  // [bp-0x54]
    float v13;  // [bp-0x24]
    float v14;  // [bp-0x20]
    float v15;  // [bp-0x1c]

    if (a4 == 0.0f)
        a4 = 784.0f;
    v16 = 0.5 * a4;
    if (v16 < a3)
        a3 = (float)v16;
    if (!WorldGraph || !g_617164)
    {
        g_6168b4(2, "Graph not ready for findcover!\n");
    }
    else
    {
        v4 = sub_488f40(&WorldGraph, &a0->field_0->field_8, a0);
        v3 = sub_488f40(&WorldGraph, a1, a0);
        v5 = sub_488e90(&WorldGraph, a0);
        if (v4 == -0x1)
        {
            g_6168b4(2, "FindCover() - %s has no nearest node!\n", a0->field_0->field_0 + gpGlobals->field_98);
        }
        else
        {
            if (v3 == -0x1)
                v3 = v4;
            v17 = a2;
            v7 = *a1 + *v17;
            v8 = a1[1] + v17[1];
            v9 = a1[2] + v17[2];
            v13 = v7;
            v14 = v8;
            v15 = v9;
            v6 = 0;
            if ((int)v6 < (int)g_617178)
            {
                v1 = &v7;
                do
                {
                    v2 = (v6 + g_619228) % g_617178;
                    v18 = g_61716c + v2 * 88;
                    g_619228 = v2 + 1;
                    v19 = &a0->field_0->field_8;
                    v20 = a0->field_0->field_8 - *v18;
                    v7 = v20;
                    v21 = *(float *)&v19[1] - v18[1];
                    v8 = v21;
                    v22 = *(float *)&v19[2] - v18[2];
                    v9 = v22;
                    v23 = v20 * v20 + v21 * v21 + v22 * v22;
                    v24 = sqrt(v23);
                    if (isnan(v24))
                        sub_487dc0(*(unsigned int *)&v23);
                    else
                        v23 = v24;
                    v10 = (float)v23;
                    if (v10 >= a3)
                    {
                        if (v10 >= a4)
                            continue;
                        v25 = a2;
                        v7 = *v18 + *v25;
                        v8 = v18[1] + v25[1];
                        v9 = v18[2] + v25[2];
                        sub_488820(v1, &v13, 1, 1, a0->field_0->field_208, &v11);
                        if (1.0 == v12)
                            continue;
                        if (v4 != v3)
                        {
                            sub_489980(&WorldGraph, v4, v2, v5, a0->field_260);
                            v0 = v12;
                            sub_489980(&WorldGraph, v3, v2, v5, a0->field_260);
                            if (v12 < v0)
                                continue;
                        }
                        if (a0->field_60->field_194(a0, v18) && sub_4893b0(a0, 4, 0, v18))
                            return 1;
                    }
                } while ((v6 += 1, (int)v6 < (int)g_617178));
            }
        }
    }
    return 0;
}

