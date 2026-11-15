// BuildRegionTables__6CGraph @0xe4b60 size=1782
typedef struct st_4e4b60_12 {
    char padding_0[2108];
    unsigned int field_83c;
} st_4e4b60_12;

typedef struct st_4e4b60_10 {
    char padding_0[3132];
    unsigned int field_c3c;
} st_4e4b60_10;

typedef struct st_4e4b60_0 {
    char padding_0[24];
    int field_18;
    char padding_1c[8];
    unsigned int field_24;
} st_4e4b60_0;

typedef struct st_4e4b60_5 {
    float field_0;
} st_4e4b60_5;

typedef struct st_4e4b60_9 {
    char padding_0[4156];
    unsigned int field_103c;
} st_4e4b60_9;

typedef struct st_4e4b60_8 {
    char padding_0[5180];
    unsigned int field_143c;
} st_4e4b60_8;

typedef struct st_4e4b60_11 {
    char padding_0[6204];
    unsigned int field_183c;
} st_4e4b60_11;

typedef struct st_4e4b60_2 {
    char padding_0[12];
    unsigned int field_c;
    char padding_10[6232];
    float field_1868;
} st_4e4b60_2;

typedef struct st_4e4b60_3 {
    char padding_0[12];
    unsigned int field_c;
    char padding_10[6236];
    float field_186c;
} st_4e4b60_3;

typedef struct st_4e4b60_4 {
    char padding_0[12];
    struct st_4e4b60_5 *field_c;
    char padding_10[6240];
    float field_1870;
} st_4e4b60_4;

typedef struct st_4e4b60_6 {
    char padding_0[12];
    unsigned int field_c;
    char padding_10[6244];
    float field_1874;
} st_4e4b60_6;

typedef struct st_4e4b60_7 {
    char padding_0[12];
    unsigned int field_c;
    char padding_10[6248];
    float field_1878;
} st_4e4b60_7;

typedef struct st_4e4b60_13 {
    char padding_0[1084];
    unsigned int field_43c;
} st_4e4b60_13;

typedef struct st_4e4b60_1 {
    unsigned int field_0;
} st_4e4b60_1;

extern st_4e4b60_1 *g_6168b4;

int BuildRegionTables__6CGraph(float idx)
{
    unsigned int v21;  // eax
    unsigned int v22;  // eax
    float *v31;  // eax
    float *v32;  // eax
    int v33;  // ecx
    unsigned int v34;  // eax
    st_4e4b60_0 *v35;  // ecx
    unsigned int k;  // eax
    unsigned int *v37;  // esi
    unsigned int v38;  // eax
    unsigned int v39;  // edi
    unsigned int v40;  // esi
    unsigned int *v23;  // ecx
    unsigned int v41;  // edx
    unsigned int *v42;  // edi
    unsigned int v43;  // eax
    unsigned int v44;  // esi
    unsigned int v45;  // ecx
    unsigned int v46;  // edx
    unsigned int v47;  // ecx
    unsigned int v48;  // esi
    unsigned int v49;  // edx
    unsigned int *v50;  // esi
    st_4e4b60_2 *v24;  // esi
    unsigned int v51;  // ecx
    unsigned int *v52;  // edi
    unsigned int v53;  // ecx
    int *v54;  // eax
    int *v55;  // edx
    st_4e4b60_8 *v56;  // eax
    int *v57;  // edx
    st_4e4b60_9 *v58;  // eax
    int *v59;  // edx
    st_4e4b60_10 *v60;  // eax
    st_4e4b60_3 *v25;  // esi
    int *v61;  // edx
    st_4e4b60_12 *v62;  // eax
    int *v63;  // edx
    st_4e4b60_13 *v64;  // eax
    st_4e4b60_4 *v26;  // esi
    st_4e4b60_6 *v27;  // esi
    st_4e4b60_7 *v28;  // esi
    unsigned int v29;  // esi
    float *v30;  // ecx
    unsigned int *v0;  // [bp-0x54]
    st_4e4b60_11 *v1;  // [bp-0x50]
    unsigned int v2;  // [bp-0x4c]
    unsigned int v3;  // [bp-0x48]
    unsigned int v4;  // [bp-0x44]
    int v5;  // [bp-0x38]
    unsigned int *v6;  // [bp-0x34]
    unsigned int l;  // [bp-0x30]
    int v8;  // [bp-0x2c]
    st_4e4b60_10 *v9;  // [bp-0x28]
    st_4e4b60_11 *v10;  // [bp-0x24]
    int node;  // [bp-0x20], Other Possible Types: unsigned int
    int v12;  // [bp-0x1c]
    int v13;  // [bp-0x18]
    int v14;  // [bp-0x14]
    int iter;  // [bp-0x10], Other Possible Types: unsigned int
    int v16;  // [bp-0xc]
    int v17;  // [bp-0xc]
    unsigned short v18;  // [bp-0x8]
    unsigned short v19;  // [bp-0x6]

    if (*(int *)(*(unsigned int *)&idx + 36))
        sub_48cf10(*(int *)(*(unsigned int *)&idx + 36));
    v21 = sub_48ccc0(16, *(int *)(*(unsigned int *)&idx + 24));
    *(unsigned int *)(*(unsigned int *)&idx + 36) = v21;
    if (!v21)
        return g_6168b4(2, "Couldn't allocated node ordering array.\n");
    iter = 0;
    do
    {
        v22 = iter * 4;
        *(float *)(v22 + *(unsigned int *)&idx + 6244) = 1000000000.0f;
        *(float *)(v22 + *(unsigned int *)&idx + 6256) = -1000000000.0f;
        iter += 1;
    } while (iter <= 2);
    iter = 0;
    if ((int)iter < *(int *)(*(unsigned int *)&idx + 24))
    {
        v23 = *(int *)(*(unsigned int *)&idx + 12);
        do
        {
            if (*(float *)&v23[22 * iter] < *(float *)(*(unsigned int *)&idx + 6244))
                *(float *)(*(unsigned int *)&idx + 6244) = *(float *)&v23[22 * iter];
            v24 = (st_4e4b60_2 *)idx;
            if (*(float *)(v24->field_c + iter * 88 + 4) < v24->field_1868)
                v24->field_1868 = *(float *)(v24->field_c + iter * 88 + 4);
            v25 = (st_4e4b60_3 *)idx;
            if (*(float *)(v25->field_c + iter * 88 + 8) < v25->field_186c)
                v25->field_186c = *(float *)(v25->field_c + iter * 88 + 8);
            v26 = (st_4e4b60_4 *)idx;
            if (*(float *)&v26->field_c[22 * iter] > v26->field_1870)
                v26->field_1870 = *(float *)&v26->field_c[22 * iter];
            v27 = (st_4e4b60_6 *)idx;
            if (*(float *)(v27->field_c + iter * 88 + 4) > v27->field_1874)
                v27->field_1874 = *(float *)(v27->field_c + iter * 88 + 4);
            v28 = (st_4e4b60_7 *)idx;
            if (*(float *)(v28->field_c + iter * 88 + 8) > v28->field_1878)
                v28->field_1878 = *(float *)(v28->field_c + iter * 88 + 8);
            iter += 1;
        } while ((int)iter < *(int *)(*(unsigned int *)&idx + 24));
    }
    iter = 0;
    if ((int)iter < *(int *)(*(unsigned int *)&idx + 24))
    {
        do
        {
            v29 = iter * 88;
            v19 = __fnstcw();
            v18 = v19 | 0xc00;
            v17 = (int)*(float *)(*(int *)(*(unsigned int *)&idx + 12) + v29);
            v30 = (float *)idx;
            v19 = __fnstcw();
            v18 = v19 | 0xc00;
            v14 = (int)v30[1561];
            v19 = __fnstcw();
            v18 = v19 | 0xc00;
            v16 = (int)v30[1564];
            *(char *)(*(int *)(*(unsigned int *)&idx + 12) + v29 + 24) = (v17 - v14) * 0x100 / (v16 - v14 + 1);
            v19 = __fnstcw();
            v18 = v19 | 0xc00;
            v16 = (int)*(float *)(*(int *)(*(unsigned int *)&idx + 12) + v29 + 4);
            v31 = (float *)idx;
            v19 = __fnstcw();
            v18 = v19 | 0xc00;
            v13 = (int)v31[1562];
            v19 = __fnstcw();
            v18 = v19 | 0xc00;
            v17 = (int)v31[1565];
            *(char *)(*(int *)(*(unsigned int *)&idx + 12) + v29 + 25) = (v16 - v13) * 0x100 / (v17 - v13 + 1);
            v19 = __fnstcw();
            v18 = v19 | 0xc00;
            v16 = (int)*(float *)(*(int *)(*(unsigned int *)&idx + 12) + v29 + 8);
            v32 = (float *)idx;
            v19 = __fnstcw();
            v18 = v19 | 0xc00;
            v12 = (int)v32[1563];
        } while ((v19 = __fnstcw(), v18 = v19 | 0xc00, v17 = (int)v32[1566], *(char *)(*(int *)(*(unsigned int *)&idx + 12) + v29 + 26) = (v16 - v12) * 0x100 / (v17 - v12 + 1), iter += 1, (int)iter < *(int *)(*(unsigned int *)&idx + 24)));
    }
    iter = 0;
    v10 = *(unsigned int *)&idx + 40;
    v9 = *(unsigned int *)&idx + 3112;
    do
    {
        node = 0;
        do
        {
            v33 = node;
            v34 = iter * 0x400 + v33 * 4;
            *(unsigned int *)&v10->padding_0[v34] = 0xff;
            *(unsigned int *)&v9->padding_0[v34] = 0;
            node = v33 + 1;
        } while (node <= 0xff);
        node = 0;
        if ((int)node < *(int *)(*(unsigned int *)&idx + 24))
        {
            do
            {
                v35 = (st_4e4b60_0 *)idx;
                *(unsigned int *)(iter * 4 + node * 16 + v35->field_24) = node;
                node += 1;
            } while ((int)node < v35->field_18);
        }
        node = 0;
        for (k = *(int *)(*(unsigned int *)&idx + 24); (int)node < (int)(k - 1); k = *(int *)(*(unsigned int *)&idx + 24))
        {
            v37 = *(int *)(*(unsigned int *)&idx + 12);
            v0 = v37;
            v38 = *(int *)(node * 16 + *(int *)(*(unsigned int *)&idx + 36) + iter * 4) * 88;
            v39 = *((char *)v37 + v38 + 24);
            v40 = *((char *)v37 + v38 + 25);
            v41 = *((char *)v0 + v38 + 26);
            if (iter == 1)
            {
                v8 = v40 * 0x10000 + v41 * 0x100 + v39;
            }
            else if (iter <= 1)
            {
                if (!iter)
                    v8 = v39 * 0x10000 + v40 * 0x100 + v41;
            }
            else
            {
                if (iter == 2)
                    v8 = v41 * 0x10000 + v39 * 0x100 + v40;
            }
            l = node + 1;
            if ((int)l < *(int *)(*(unsigned int *)&idx + 24))
            {
                v6 = iter * 4;
                do
                {
                    v42 = *(int *)(*(unsigned int *)&idx + 12);
                    v43 = *(int *)((char *)&v6[4 * l] + *(int *)(*(unsigned int *)&idx + 36)) * 88;
                    v44 = *((char *)v42 + v43 + 24);
                    v45 = *((char *)v42 + v43 + 25);
                    v46 = *((char *)v42 + v43 + 26);
                    if (iter == 1)
                    {
                        v5 = v45 * 0x10000 + v46 * 0x100 + v44;
                    }
                    else if (iter <= 1)
                    {
                        if (!iter)
                            v5 = v44 * 0x10000 + v45 * 0x100 + v46;
                    }
                    else
                    {
                        if (iter == 2)
                            v5 = v46 * 0x10000 + v44 * 0x100 + v45;
                    }
                    if (v5 < v8)
                    {
                        v47 = node * 16 + *(int *)(*(unsigned int *)&idx + 36);
                        v48 = *(int *)((char *)v6 + v47);
                        v49 = l * 16;
                        *(int *)((char *)v6 + v47) = *(int *)((char *)v6 + *(int *)(*(unsigned int *)&idx + 36) + v49);
                        *(unsigned int *)((char *)v6 + v49 + *(int *)(*(unsigned int *)&idx + 36)) = v48;
                    }
                    l += 1;
                } while ((int)l < *(int *)(*(unsigned int *)&idx + 24));
            }
            node += 1;
        }
        iter += 1;
    } while (iter <= 2);
    iter = 0;
    if ((int)iter >= *(int *)(*(unsigned int *)&idx + 24))
        return sub_48d0e0(*(unsigned int *)&idx + 6268, 0, 0x800);
    v1 = *(unsigned int *)&idx + 40;
    do
    {
        v50 = *(int *)(*(unsigned int *)&idx + 36);
        v51 = iter * 16;
        v3 = v51;
        v52 = *(int *)(*(unsigned int *)&idx + 12);
        v4 = (char)v52[6 + 22 * *(int *)((char *)v50 + v51)];
        v2 = *((char *)&v52[6 + 22 * *(int *)((char *)v50 + v51 + 4)] + 1);
        v53 = *((char *)&v52[6 + 22 * *(int *)((char *)v50 + v3 + 8)] + 2);
        v54 = v4 * 4;
        if ((int)iter < *(int *)(v54 + v1))
            *(unsigned int *)(v54 + v1) = iter;
        v55 = v2 * 4;
        v56 = *(unsigned int *)&idx + 1064;
        if ((int)iter < *(int *)(v55 + v56))
            *(unsigned int *)(v55 + v56) = iter;
        v57 = v53 * 4;
        v58 = *(unsigned int *)&idx + 2088;
        if ((int)iter < *(int *)(v57 + v58))
            *(unsigned int *)(v57 + v58) = iter;
        v59 = v4 * 4;
        v60 = *(unsigned int *)&idx + 3112;
        if (*(int *)(v59 + v60) < (int)iter)
            *(unsigned int *)(v59 + v60) = iter;
        v61 = v2 * 4;
        v62 = *(unsigned int *)&idx + 4136;
        if (*(int *)(v61 + v62) < (int)iter)
            *(unsigned int *)(v61 + v62) = iter;
        v63 = v53 * 4;
        v64 = *(unsigned int *)&idx + 5160;
        if (*(int *)(v63 + v64) < (int)iter)
            *(unsigned int *)(v63 + v64) = iter;
        iter += 1;
    } while ((int)iter < *(int *)(*(unsigned int *)&idx + 24));
    return sub_48d0e0(*(unsigned int *)&idx + 6268, 0, 0x800);
}

