// BuildNearestRoute__12CBaseMonsterG6VectorT1ff @0xd7ee0 size=799
typedef struct st_4d7ee0_0 {
    unsigned int field_0;
    char padding_4[4];
    char field_8;
    char padding_9[363];
    unsigned int field_174;
    unsigned int field_178;
    unsigned int field_17c;
    char padding_180[136];
    int field_208;
} st_4d7ee0_0;

typedef struct st_4d7ee0_1 {
    struct st_4d7ee0_0 *field_0;
    char padding_4[540];
    unsigned int field_220;
    unsigned int field_224;
    unsigned int field_228;
} st_4d7ee0_1;

typedef struct st_4d7ee0_2 {
    char padding_0[152];
    unsigned int field_98;
} st_4d7ee0_2;

typedef struct st_4d7ee0_3 {
    unsigned int field_0;
} st_4d7ee0_3;

extern st_4d7ee0_3 *g_engfuncs.pfnAlertMessage;
extern st_4d7ee0_2 *gpGlobals;
extern unsigned int WorldGraph;
extern unsigned int WorldGraph+4;
extern unsigned int WorldGraph+12;
extern unsigned int WorldGraph+24;
extern unsigned int WorldGraph+8392;

unsigned int BuildNearestRoute__12CBaseMonsterG6VectorT1ff(st_4d7ee0_1 *a0, float *a1, float *a2, float a3, float a4)
{
    double v14;  // mm7
    float *v15;  // ecx
    st_4d7ee0_0 *v24;  // edx
    int v16;  // esi
    float *v17;  // edi
    float *v18;  // eax
    float v19;  // 112
    float v20;  // 112
    float v21;  // 112
    double v22;  // mm7
    double v23;  // mm6
    unsigned int *v0;  // [bp-0xa8]
    char *v1;  // [bp-0xa4]
    int v2;  // [bp-0xa0]
    int v3;  // [bp-0x9c]
    unsigned int v4;  // [bp-0x98]
    float v5;  // [bp-0x94]
    float v6;  // [bp-0x90]
    float v7;  // [bp-0x8c]
    float v8;  // [bp-0x7c]
    char v9;  // [bp-0x64]
    float v10;  // [bp-0x54]
    float v11;  // [bp-0x24]
    float v12;  // [bp-0x20]
    float v13;  // [bp-0x1c]

    if (a4 == 0.0f)
        a4 = 784.0f;
    v14 = 0.5 * a4;
    if (v14 < a3)
        a3 = (float)v14;
    if (!WorldGraph || !WorldGraph+4)
    {
        g_engfuncs.pfnAlertMessage(2, "Graph not ready for BuildNearestRoute!\n");
    }
    else
    {
        v2 = CGraph::FindNearestNode(&WorldGraph, &a0->field_0->field_8, a0);
        v3 = CGraph::HullIndex(&WorldGraph, a0);
        if (v2 == -0x1)
        {
            g_engfuncs.pfnAlertMessage(2, "BuildNearestRoute() - %s has no nearest node!\n", a0->field_0->field_0 + gpGlobals->field_98);
        }
        else
        {
            v15 = a1;
            v5 = *v15 + *a2;
            v6 = v15[1] + a2[1];
            v7 = v15[2] + a2[2];
            v11 = v5;
            v12 = v6;
            v13 = v7;
            v4 = 0;
            if ((int)v4 < (int)WorldGraph+24)
            {
                v1 = &v5;
                do
                {
                    v0 = &WorldGraph;
                    v16 = (v4 + WorldGraph+8392) % WorldGraph+24;
                    v17 = WorldGraph+12 + v16 * 88;
                    v0[2098] = v16 + 1;
                    if (CGraph::NextNodeInRoute(v0, v2, v16, v3, 0) != v2)
                    {
                        v18 = a1;
                        v19 = *v18 - *v17;
                        v5 = v19;
                        v20 = v18[1] - v17[1];
                        v6 = v20;
                        v21 = v18[2] - v17[2];
                        v7 = v21;
                        v22 = v19 * v19 + v20 * v20 + v21 * v21;
                        v23 = sqrt(v22);
                        if (isnan(v23))
                            sqrt(*(unsigned int *)&v22);
                        else
                            v22 = v23;
                        v8 = (float)v22;
                        if (v8 > a3 && v8 < a4)
                        {
                            v24 = a0->field_0;
                            v5 = *v17 + *(float *)&v24->field_174;
                            v6 = v17[1] + *(float *)&v24->field_178;
                            v7 = v17[2] + *(float *)&v24->field_17c;
                            UTIL_TraceLine(v1, &v11, 1, v24->field_208, &v9);
                            if (v10 == 1.0f && CBaseMonster::BuildRoute(a0, v17, 64, 0))
                            {
                                *(float *)&a0->field_220 = *v17;
                                *(float *)&a0->field_224 = v17[1];
                                *(float *)&a0->field_228 = v17[2];
                                return 1;
                            }
                        }
                    }
                } while ((v4 += 1, (int)v4 < (int)WorldGraph+24));
            }
        }
    }
    return 0;
}

