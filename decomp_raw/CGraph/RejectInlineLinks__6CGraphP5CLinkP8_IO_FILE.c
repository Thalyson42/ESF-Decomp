// RejectInlineLinks__6CGraphP5CLinkP8_IO_FILE @0xe13e0 size=1073
typedef struct st_4e13e0_0 {
    char padding_0[12];
    unsigned int field_c;
    char padding_10[8];
    int field_18;
} st_4e13e0_0;

typedef struct st_4e13e0_1 {
    float field_0;
    float field_4;
    float field_8;
    char padding_c[20];
    int field_20;
    unsigned int field_24;
} st_4e13e0_1;

int RejectInlineLinks__6CGraphP5CLinkP8_IO_FILE(st_4e13e0_0 *a0, unsigned int a1, int a2)
{
    float *v24;  // edx
    st_4e13e0_1 *v25;  // eax
    st_4e13e0_1 *v34;  // eax
    double v35;  // mm7
    double v36;  // mm6
    double v37;  // mm7
    double v38;  // mm6
    double v39;  // mm7
    double v40;  // mm7
    unsigned int *iter;  // edi
    unsigned int *k;  // esi
    unsigned int v43;  // ecx
    double v26;  // mm7
    double v27;  // mm6
    double v28;  // mm7
    double v29;  // mm6
    double v30;  // mm7
    double v31;  // mm7
    st_4e13e0_1 *v32;  // edx
    float *v33;  // edx
    float v0;  // [bp-0x84]
    float v1;  // [bp-0x80]
    st_4e13e0_1 *v2;  // [bp-0x7c]
    int v3;  // [bp-0x78]
    int v4;  // [bp-0x74]
    int v5;  // [bp-0x70]
    int node;  // [bp-0x6c]
    int i;  // [bp-0x68]
    float v8;  // [bp-0x64]
    float v9;  // [bp-0x60]
    float v10;  // [bp-0x5c]
    float v11;  // [bp-0x58]
    float v12;  // [bp-0x54]
    float v13;  // [bp-0x50]
    float v14;  // [bp-0x4c]
    float v15;  // [bp-0x48]
    float v16;  // [bp-0x44]
    float v17;  // [bp-0x40]
    float v18;  // [bp-0x3c]
    float v19;  // [bp-0x38]
    float v20;  // [bp-0x24]
    float v21;  // [bp-0x20]
    float v22;  // [bp-0x1c]
    float v23;  // [bp-0x18]

    if (a2)
    {
        sub_488d60(a2, "----------------------------------------------------------------------------\n");
        sub_488d60(a2, "InLine Rejection:\n");
        sub_488d60(a2, "----------------------------------------------------------------------------\n");
    }
    v4 = 0;
    i = 0;
    if (v4 >= a0->field_18)
        return v4;
    do
    {
        v2 = a0->field_c + i * 88;
        if (a2)
            sub_488d60(a2, "Node %3d:\n", i);
        node = 0;
        if (node < v2->field_20)
        {
            do
            {
                v24 = a0->field_c + *(int *)(a1 + (node + v2->field_24) * 24 + 4) * 88;
                v25 = v2;
                v20 = *v24 - v25->field_0;
                v21 = v24[1] - v25->field_4;
                v22 = v24[2] - v25->field_8;
                v18 = v20;
                v19 = v21;
                v16 = v18;
                v17 = v19;
                v26 = v16 * v16 + v17 * v17;
                v27 = sqrt(v26);
                if (isnan(v27))
                    sub_487dc0(*(unsigned int *)&v26);
                else
                    v26 = v27;
                v0 = (float)v26;
                v28 = v16 * v16 + v17 * v17;
                v29 = sqrt(v28);
                if (isnan(v29))
                    sub_487dc0(*(unsigned int *)&v28);
                else
                    v28 = v29;
                v23 = (float)v28;
                if (v23 == 0.0f)
                {
                    v30 = 0.0;
                    v14 = 0.0f;
                }
                else
                {
                    v31 = 1.0 / v23;
                    v30 = v31 * v17;
                    v14 = (float)(v31 * v16);
                }
                v15 = (float)v30;
                v16 = v14;
                v17 = v15;
                v32 = v2;
                *(float *)(a1 + (node + v32->field_24) * 24 + 20) = v0;
                v3 = 0;
                v5 = 0;
                if (v3 < v32->field_20)
                {
                    do
                    {
                        if (v5 != node)
                        {
                            v33 = a0->field_c + *(int *)(a1 + (v5 + v2->field_24) * 24 + 4) * 88;
                            v34 = v2;
                            v20 = *v33 - v34->field_0;
                            v21 = v33[1] - v34->field_4;
                            v22 = v33[2] - v34->field_8;
                            v12 = v20;
                            v13 = v21;
                            v10 = v12;
                            v11 = v13;
                            v35 = v10 * v10 + v11 * v11;
                            v36 = sqrt(v35);
                            if (isnan(v36))
                                sub_487dc0(*(unsigned int *)&v35);
                            else
                                v35 = v36;
                            v1 = (float)v35;
                            v37 = v10 * v10 + v11 * v11;
                            v38 = sqrt(v37);
                            if (isnan(v38))
                                sub_487dc0(*(unsigned int *)&v37);
                            else
                                v37 = v38;
                            v23 = (float)v37;
                            if (v23 == 0.0f)
                            {
                                v39 = 0.0;
                                v8 = 0.0f;
                            }
                            else
                            {
                                v40 = 1.0 / v23;
                                v39 = v40 * v11;
                                v8 = (float)(v40 * v10);
                            }
                            v9 = (float)v39;
                            v10 = v8;
                            v11 = v9;
                            if (v16 * v10 + v17 * v11 >= 0.998 && v1 < v0)
                            {
                                if (a2)
                                    sub_488d60(a2, "REJECTED NODE %3d through Node %3d, Dot = %8f\n", *(int *)(a1 + (node + v2->field_24) * 24 + 4), *(int *)(a1 + (v5 + v2->field_24) * 24 + 4), (unsigned int)(v16 * v10 + v17 * v11 >> 0));
                                iter = a1 + (node + v2->field_24) * 24;
                                k = a1 + (v2->field_24 + v2->field_20) * 24 - 24;
                                for (v43 = 6; v43; k += 1)
                                {
                                    v43 -= 1;
                                    *iter = *k;
                                    iter += 1;
                                }
                                v2->field_20 = v2->field_20 - 1;
                                node -= 1;
                                v4 += 1;
                                v3 = 1;
                            }
                        }
                    } while ((v5 += 1, v5 < v2->field_20 && !v3));
                }
                node += 1;
            } while (node < v2->field_20);
        }
        if (a2)
            sub_488d60(a2, "----------------------------------------------------------------------------\n\n");
        i += 1;
    } while (i < a0->field_18);
    return v4;
}

