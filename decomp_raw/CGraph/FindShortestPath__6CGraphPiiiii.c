// FindShortestPath__6CGraphPiiiii @0xdf990 size=1139
typedef struct st_4df990_0 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[4];
    int field_18;
} st_4df990_0;

typedef struct st_4df990_1 {
    char padding_0[32];
    int field_20;
} st_4df990_1;

typedef struct st_4df990_2 {
    unsigned int field_0;
} st_4df990_2;

extern char _GLOBAL_OFFSET_TABLE_;
extern st_4df990_2 *g_engfuncs.pfnAlertMessage;

int FindShortestPath__6CGraphPiiiii(st_4df990_0 *a0, int *a1, int j, int a3, int a4, int a5)
{
    int iter;  // edi
    int v14;  // esi
    float v23;  // 128
    unsigned int v24;  // edx
    unsigned int v25;  // eax
    int v26;  // esi
    int v27;  // esi
    int v29;  // 4104
    unsigned int v30;  // edx
    int v15;  // eax
    unsigned int v16;  // eax
    int v17;  // ecx
    int v18;  // esi
    unsigned int v19;  // ecx
    unsigned int v20;  // edi
    unsigned int v21;  // edx
    unsigned int v22;  // ecx
    int v0;  // [bp-0x3a4]
    unsigned int v1;  // [bp-0x380]
    unsigned int v2;  // [bp-0x378]
    unsigned int v3;  // [bp-0x374]
    unsigned int v4;  // [bp-0x370]
    unsigned int v5;  // [bp-0x36c]
    st_4df990_1 *v6;  // [bp-0x368]
    int node;  // [bp-0x364]
    int v8;  // [bp-0x360]
    unsigned int v9;  // [bp-0x35c]
    float v10;  // [bp-0x358]
    char v11;  // [bp-0x358]
    char v12;  // [bp-0x344], Other Possible Types: unsigned int

    if (!a0->field_0 || !a0->field_4)
    {
        v30 = "Graph not ready!\n";
        goto LABEL_4df9eb;
    }
    else
    {
        if (j < 0 || j > a0->field_18)
        {
            v0 = j;
            v30 = "Can't build a path, iStart is %d!\n";
LABEL_4df9eb:
            g_engfuncs.pfnAlertMessage(2, v30);
        }
        else if (j == a3)
        {
            *a1 = a3;
            a1[1] = a3;
            return 2;
        }
        else if (a0->field_8)
        {
            v8 = (a5 & 832) != 0;
            *a1 = j;
            iter = 1;
            v14 = j;
            while (1)
            {
                if (v14 == a3)
                    return iter;
                v15 = CGraph::NextNodeInRoute(a0, v14, a3, a4, v8);
                if (v14 == v15)
                    break;
                if (iter > 9)
                    return iter;
                a1[iter] = v15;
                iter += 1;
                v14 = v15;
            }
        }
        else
        {
            __14CQueuePriority(&v12);
            if ((unsigned int)a4 <= 3)
            {
                goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&(&_GLOBAL_OFFSET_TABLE_)[4 * a4] - 1261596)]));
            }
            else
            {
                node = 0;
                if (node < a0->field_18)
                {
                    do
                    {
                        *(float *)(a0->field_c + node * 88 + 72) = -1.0f;
                        node += 1;
                    } while (node < a0->field_18);
                }
                v16 = j * 88;
                *(unsigned int *)(a0->field_c + v16 + 72) = 0;
                v17 = j;
                *(int *)(a0->field_c + v16 + 76) = v17;
                CQueuePriority::Insert(&v12, v17, 0);
                while (v12 && (v18 = CQueuePriority::Remove(&v12, &v11), v18 != a3))
                {
                    v6 = a0->field_c + v18 * 88;
                    node = 0;
                    if (node < v6->field_20)
                    {
                        v5 = v18 * 88;
                        v3 = v18 * 11;
                        do
                        {
                            v4 = a0->field_c;
                            v19 = v4;
                            v1 = a0->field_10;
                            v20 = *(int *)(a0->field_10 + (node + *(int *)(v19 + v5 + 36)) * 24 + 4);
                            v2 = node + *(int *)(v19 + v5 + 36);
                            v21 = v2 * 24;
                            if ((v9 & *(int *)(v1 + v21 + 16)) == v9 && (!*(int *)(v1 + v21 + 8) || (v2 = node + *(int *)(v4 + v5 + 36), CGraph::HandleLinkEnt(a0, v18, *(int *)(v1 + v2 * 24 + 8), a5, 1))))
                            {
                                v22 = a0->field_c;
                                v23 = v10 + *(float *)(a0->field_10 + (node + *(int *)(v22 + v3 * 8 + 36)) * 24 + 20);
                                v24 = v20 * 88;
                                if (-0.5 > *(float *)(v22 + v24 + 72) || *(float *)(v22 + v24 + 72) - 0.001 > v23)
                                {
                                    v25 = v20 * 88;
                                    *(float *)(a0->field_c + v25 + 72) = v23;
                                    *(int *)(a0->field_c + v25 + 76) = v18;
                                    CQueuePriority::Insert(&v12, v20, v23);
                                }
                            }
                        } while ((node += 1, node < v6->field_20));
                    }
                }
                if (-0.5 <= *(float *)(a0->field_c + a3 * 88 + 72))
                {
                    iter = 1;
                    if (a3 != j)
                    {
                        v26 = a3;
                        do
                        {
                            v27 = v26;
                            iter += 1;
                            v26 = *(int *)(a0->field_c + v27 * 88 + 76);
                        } while (*(int *)(a0->field_c + v27 * 88 + 76) != j);
                    }
                    node = iter - 1;
                    if (node < 0)
                        return iter;
                    do
                    {
                        a1[node] = a3;
                        a3 = *(int *)(a0->field_c + a3 * 88 + 76);
                        v29 = node;
                        node = v29 - 1;
                    } while (v29 - 1 >= 0);
                    return iter;
                }
            }
        }
        return 0;
    }
}

