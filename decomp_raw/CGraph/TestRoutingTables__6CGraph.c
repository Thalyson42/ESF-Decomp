// TestRoutingTables__6CGraph @0xe58e0 size=1263
typedef struct st_4e58e0_0 {
    unsigned int field_0;
    char field_1;
    char padding_2[22];
    int field_18;
} st_4e58e0_0;

typedef struct st_4e58e0_1 {
    char padding_0[8];
    unsigned int field_8;
} st_4e58e0_1;

typedef struct st_4e58e0_2 {
    unsigned int field_0;
} st_4e58e0_2;

extern st_4e58e0_2 *g_6168b4;

st_4e58e0_0 * TestRoutingTables__6CGraph(float idx)
{
    st_4e58e0_0 *v17;  // eax
    st_4e58e0_1 *v18;  // esi
    unsigned int v19;  // ecx
    unsigned int v20;  // edi
    unsigned int v21;  // ecx
    unsigned int v22;  // edx
    unsigned int v23;  // ecx
    unsigned int v24;  // edi
    unsigned int v25;  // ecx
    unsigned int v26;  // edx
    unsigned int v0;  // [bp-0x54]
    int v1;  // [bp-0x50]
    float v2;  // [bp-0x4c]
    unsigned int v3;  // [bp-0x48]
    unsigned int v4;  // [bp-0x44]
    int iter;  // [bp-0x40]
    float v6;  // [bp-0x3c]
    int v7;  // [bp-0x38]
    int v8;  // [bp-0x34]
    st_4e58e0_0 *v9;  // [bp-0x30]
    st_4e58e0_0 *v10;  // [bp-0x2c]
    int v11;  // [bp-0x28]
    int j;  // [bp-0x24]
    int i;  // [bp-0x20]
    st_4e58e0_0 *v14;  // [bp-0x1c]
    unsigned int *v15;  // [bp-0x18]

    v15 = sub_48c340(*(int *)(*(unsigned int *)&idx + 24) * 4);
    v17 = sub_48c340(*(int *)(*(unsigned int *)&idx + 24) * 4);
    v14 = v17;
    if (v15)
    {
        if (v17)
        {
            i = 0;
            do
            {
                j = 0;
                do
                {
                    if (!j)
                    {
                        v11 = 0;
                    }
                    else if (j == 1)
                    {
                        v11 = 832;
                    }
                    v10 = NULL;
                    if (v10 < *(int *)(*(unsigned int *)&idx + 24))
                    {
                        do
                        {
                            v9 = NULL;
                            v17 = (st_4e58e0_0 *)idx;
                            if (v9 < *(int *)&v17->padding_2[19])
                            {
                                do
                                {
                                    *(unsigned int *)(*(unsigned int *)&idx + 8) = 0;
                                    v18 = (st_4e58e0_1 *)idx;
                                    v8 = sub_48ad80(v18, v15, v10, v9, i, v11);
                                    v18->field_8 = 1;
                                    v7 = sub_48ad80(idx, v14, v10, v9, i, v11);
                                    if (v7 == 10)
                                        continue;
                                    v6 = 0;
                                    iter = 0;
                                    while (iter < v8 - 1)
                                    {
                                        v19 = v15[iter];
                                        if (v19 != v15[1 + iter])
                                        {
                                            v4 = 0;
                                            v20 = *(int *)(*(unsigned int *)&idx + 12);
                                            if (NULL < *(int *)(*(int *)(*(unsigned int *)&idx + 12) + v19 * 88 + 32))
                                            {
                                                v3 = *(int *)(*(unsigned int *)&idx + 16);
                                                do
                                                {
                                                    v21 = v19 * 88;
                                                    v22 = v20;
                                                    if (*(int *)(v3 + (v4 + *(int *)(v22 + v21 + 36)) * 24 + 4) == v15[1 + iter])
                                                    {
                                                        v6 += *(float *)(v3 + (v4 + *(int *)(v22 + v21 + 36)) * 24 + 20);
                                                        iter += 1;
                                                    }
                                                } while ((v4 += 1, v19 = v15[iter], v20 = *(int *)(*(unsigned int *)&idx + 12), (int)v4 < *(int *)(v20 + v19 * 88 + 32)));
                                            }
                                            g_6168b4(2, "No link.\n");
                                            iter += 1;
                                        }
                                        else
                                        {
                                            iter += 1;
                                        }
                                    }
                                    v2 = 0;
                                    iter = 0;
                                    while (iter < v7 - 1)
                                    {
                                        v23 = (&v14->field_0)[iter];
                                        if (v23 != *(int *)&(&v14->field_1)[4 * iter])
                                        {
                                            v1 = 0;
                                            v24 = *(int *)(*(unsigned int *)&idx + 12);
                                            if (NULL < *(int *)(*(int *)(*(unsigned int *)&idx + 12) + v23 * 88 + 32))
                                            {
                                                v0 = *(int *)(*(unsigned int *)&idx + 16);
                                                do
                                                {
                                                    v25 = v23 * 88;
                                                    v26 = v24;
                                                    if (*(int *)(v0 + (v1 + *(int *)(v26 + v25 + 36)) * 24 + 4) == *(int *)&(&v14->field_1)[4 * iter])
                                                    {
                                                        v2 += *(float *)(v0 + (v1 + *(int *)(v26 + v25 + 36)) * 24 + 20);
                                                        iter += 1;
                                                    }
                                                } while ((v1 += 1, v23 = (&v14->field_0)[iter], v24 = *(int *)(*(unsigned int *)&idx + 12), v1 < *(int *)(v24 + v23 * 88 + 32)));
                                            }
                                            g_6168b4(2, "No link.\n");
                                            iter += 1;
                                        }
                                        else
                                        {
                                            iter += 1;
                                        }
                                    }
                                    if (fabs(v6 - v2) > 0.1)
                                    {
                                        g_6168b4(2, "Routing is inconsistent!!!\n");
                                        g_6168b4(2, "(%d to %d |%d/%d)1:", v10, v9, i, j);
                                        iter = 0;
                                        if (iter < v8)
                                        {
                                            do
                                            {
                                                g_6168b4(2, "%d ", v15[iter]);
                                                iter += 1;
                                            } while (iter < v8);
                                        }
                                        g_6168b4(2, "\n(%d to %d |%d/%d)2:", v10, v9, i, j);
                                        iter = 0;
                                        if (iter < v7)
                                        {
                                            do
                                            {
                                                g_6168b4(2, "%d ", (&v14->field_0)[iter]);
                                                iter += 1;
                                            } while (iter < v7);
                                        }
                                        g_6168b4(2, "\n");
                                        *(unsigned int *)(*(unsigned int *)&idx + 8) = 0;
                                        sub_48ad80(idx, v15, v10, v9, i, v11);
                                        *(unsigned int *)(*(unsigned int *)&idx + 8) = 1;
                                        v17 = sub_48ad80(idx, v14, v10, v9, i, v11);
                                        goto LABEL_4e5d9e;
                                    }
                                } while ((v9 = (char *)&v9->field_0 + 1, v17 = v9, v17 < *(int *)(*(unsigned int *)&idx + 24)));
                            }
                        } while ((v10 = (char *)&v10->field_0 + 1, v10 < *(int *)(*(unsigned int *)&idx + 24)));
                    }
                    j += 1;
                } while (j <= 1);
                i += 1;
            } while (i <= 3);
        }
LABEL_4e5d9e:
        if (v15)
            v17 = sub_48d4e0(v15);
    }
    if (v14)
        v17 = sub_48d4e0(v14);
    return v17;
}

