// RouteSimplify__12CBaseMonsterP11CBaseEntity @0xd4a90 size=1313
typedef struct st_4d4a90_3 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
} st_4d4a90_3;

typedef struct st_4d4a90_0 {
    char padding_0[288];
    struct st_4d4a90_1 *field_120;
} st_4d4a90_0;

typedef struct st_4d4a90_1 {
    unsigned int field_0;
} st_4d4a90_1;

typedef struct st_4d4a90_2 {
    struct st_4d4a90_3 *field_0;
    char padding_4[92];
    struct st_4d4a90_0 *field_60;
    char padding_64[304];
    unsigned int field_194;
    unsigned int field_198;
    unsigned int field_19c;
    unsigned int field_1a0;
    char padding_1a4[116];
    int field_218;
} st_4d4a90_2;

st_4d4a90_2 * RouteSimplify__12CBaseMonsterP11CBaseEntity(st_4d4a90_2 *a0, unsigned int a1)
{
    unsigned int v26;  // eax
    unsigned int i;  // eax
    unsigned int *v36;  // ecx
    st_4d4a90_2 *v37;  // eax
    st_4d4a90_2 *v38;  // eax
    unsigned int v39;  // ecx
    unsigned int *v40;  // edx
    unsigned int *v41;  // eax
    st_4d4a90_2 *v42;  // edx
    unsigned int *v43;  // eax
    unsigned int *v44;  // edx
    void* v45;  // edx
    unsigned int *v46;  // ecx
    void* v47;  // edx
    float *v48;  // edx
    unsigned int *v49;  // ecx
    st_4d4a90_2 *v50;  // eax
    unsigned int *v51;  // edx
    unsigned int *v52;  // ecx
    st_4d4a90_2 *v53;  // eax
    int v54;  // esi
    unsigned int v55;  // eax
    st_4d4a90_2 *iter;  // eax
    int j;  // edi
    unsigned int v57;  // edx
    st_4d4a90_2 *v58;  // ecx
    unsigned int *v59;  // edx
    unsigned int v30;  // edi
    unsigned int v31;  // edx
    unsigned int v32;  // edx
    int node;  // esi
    unsigned int *v34;  // edx
    int v35;  // edi
    int idx;  // [bp-0x1c0]
    unsigned int *v1;  // [bp-0x1b4]
    unsigned int v2;  // [bp-0x1b0]
    char *v3;  // [bp-0x1ac]
    int iter1;  // [bp-0x1a8]
    float v5;  // [bp-0x1a4]
    float v6;  // [bp-0x1a0]
    float v7;  // [bp-0x19c]
    float v8;  // [bp-0x198]
    float v9;  // [bp-0x194]
    float v10;  // [bp-0x190]
    float v11;  // [bp-0x184]
    float v12;  // [bp-0x180]
    float v13;  // [bp-0x17c]
    float v14;  // [bp-0x164]
    float v15;  // [bp-0x160]
    float v16;  // [bp-0x15c]
    float v17;  // [bp-0x144]
    float v18;  // [bp-0x140]
    float v19;  // [bp-0x13c]
    unsigned int v20;  // [bp-0x118]
    char v21;  // [bp-0x114]
    float v22;  // [bp-0x24]
    float v23;  // [bp-0x20]
    float v24;  // [bp-0x1c]
    char v25;  // [bp-0x4]

    v26 = 15;
    do
    {
        i = v26;
        v26 = i - 1;
    } while (i >= 1);
    iter1 = 0;
    iter = a0;
    v30 = iter->field_218;
    if ((int)v30 <= 7)
    {
        v31 = v30 * 16;
        iter = &iter->field_1a0;
        if (*(int *)(v31 + (char *)iter))
        {
            iter1 += 1;
            if (*(v31 + (char *)iter) >= 0)
            {
                do
                {
                    v30 += 1;
                } while ((int)v30 <= 7 && (v32 = v30 * 16, iter = &a0->field_1a0, *(int *)(v32 + (char *)iter) && (iter1 += 1, *(v32 + (char *)iter) >= 0)));
            }
        }
    }
    if (iter1 <= 1)
        return iter;
    node = 0;
    v34 = a0->field_0;
    *(unsigned int *)&v22 = v34[2];
    *(unsigned int *)&v23 = v34[3];
    *(unsigned int *)&v24 = v34[4];
    v35 = 0;
    if (0 < iter1 - 1)
    {
        v1 = &v20;
        do
        {
            if (!sub_48aff0((&a0->field_1a0)[4 * a0->field_218 + 4 * v35]))
            {
                v36 = &(&v25)[16 * node];
                v37 = &(&a0->field_0)[4 * a0->field_218 + 4 * v35];
                *(unsigned int *)((char *)v36 - 288) = v37->field_194;
                *(unsigned int *)((char *)v36 - 284) = v37->field_198;
                *(unsigned int *)((char *)v36 - 280) = v37->field_19c;
                *(unsigned int *)((char *)v36 - 276) = v37->field_1a0;
                node += 1;
            }
            else
            {
                v3 = &v22;
                if (a0->field_60->field_120(a0, &v22, &(&a0->field_0)[4 * a0->field_218 + 4 * v35 + 105], a1, 0) == 2)
                    continue;
                v38 = a0;
                v39 = (v35 + v38->field_218) * 16;
                v40 = &v38->padding_1a4[v39];
                v41 = (char *)v38 + v39 + 404;
                v5 = *(float *)v40 + *(float *)v41;
                v6 = *(float *)&v40[1] + *(float *)&v41[1];
                v7 = *(float *)&v40[2] + *(float *)&v41[2];
                v11 = (float)(0.5 * v5);
                v12 = (float)(0.5 * v6);
                v13 = (float)(0.5 * v7);
                v17 = v11;
                v18 = v12;
                v19 = v13;
                v42 = a0;
                v43 = (char *)v42 + v39 + 404;
                v8 = *(float *)v43 + v22;
                v9 = *(float *)&v43[1] + v23;
                v10 = *(float *)&v43[2] + v24;
                v5 = (float)(0.5 * v8);
                v6 = (float)(0.5 * v9);
                v7 = (float)(0.5 * v10);
                v14 = v5;
                v15 = v6;
                v16 = v7;
                v2 = (*(int *)(v39 + (char *)v42 + 416) | 8) & 0xfffffe7f;
                if (v42->field_60->field_120(a0, v3, &v17, a1, 0) == 2)
                {
                    v44 = node * 16;
                    *(unsigned int *)(v44 + v1) = v2;
                    v45 = v44 + &v25;
                    *(float *)((char *)v45 - 288) = v17;
                    *(float *)((char *)v45 - 284) = v18;
                    *(float *)((char *)v45 - 280) = v19;
                }
                else if (a0->field_60->field_120(a0, &v14, &v17, a1, 0) == 2)
                {
                    v46 = node * 16;
                    *(unsigned int *)(v46 + v1) = v2;
                    v47 = &v25 + v46;
                    *(float *)((char *)v47 - 288) = v14;
                    *(float *)((char *)v47 - 284) = v15;
                    *(float *)((char *)v47 - 280) = v16;
                    idx = node + 1;
                    v1[4 * idx] = v2;
                    v48 = &v21 + v46;
                    *v48 = v17;
                    v48[1] = v18;
                    v48[2] = v19;
                    node = idx;
                }
                else
                {
                    v49 = &(&v25)[16 * node];
                    v50 = &(&a0->field_0)[4 * a0->field_218 + 4 * v35];
                    *(unsigned int *)((char *)v49 - 288) = v50->field_194;
                    *(unsigned int *)((char *)v49 - 284) = v50->field_198;
                    *(unsigned int *)((char *)v49 - 280) = v50->field_19c;
                    *(unsigned int *)((char *)v49 - 276) = v50->field_1a0;
                }
            }
            v51 = &(&v25)[16 * node];
            *(int *)&v22 = *(int *)((char *)v51 - 288);
            *(int *)&v23 = *(int *)((char *)v51 - 284);
            *(int *)&v24 = *(int *)((char *)v51 - 280);
            node += 1;
        } while ((v35 += 1, v35 < iter1 - 1));
    }
    v52 = &(&v25)[16 * node];
    v53 = &(&a0->field_0)[4 * a0->field_218 + 4 * v35];
    *(unsigned int *)((char *)v52 - 288) = v53->field_194;
    *(unsigned int *)((char *)v52 - 284) = v53->field_198;
    *(unsigned int *)((char *)v52 - 280) = v53->field_19c;
    *(unsigned int *)((char *)v52 - 276) = v53->field_1a0;
    v54 = node + 1;
    v55 = v54 * 16;
    *(unsigned int *)((char *)&v20 + v55) = 0;
    a0->field_218 = 0;
    j = 0;
    if (0 < v54)
    {
        do
        {
            v57 = j * 16;
            v58 = (char *)a0 + v57;
            v59 = &(&v25)[v57];
            v58->field_194 = *(int *)((char *)v59 - 288);
            v58->field_198 = *(int *)((char *)v59 - 284);
            v58->field_19c = *(int *)((char *)v59 - 280);
            v55 = *(int *)((char *)v59 - 276);
            v58->field_1a0 = v55;
            j += 1;
            if (j > 7)
                return v55;
        } while (j < v54);
    }
    if (j > 7)
        return v55;
    (&a0->field_1a0)[4 * j] = 0;
    return v55;
}

