// SortNodes__6CGraph @0xe47a0 size=745
typedef struct st_4e47a0_1 {
    char padding_0[12];
    struct st_4e47a0_0 *field_c;
    struct st_4e47a0_2 *field_10;
    char padding_14[4];
    int field_18;
    int field_1c;
} st_4e47a0_1;

typedef struct st_4e47a0_2 {
    unsigned int field_0;
} st_4e47a0_2;

typedef struct st_4e47a0_0 {
    char padding_0[76];
    unsigned int field_4c;
} st_4e47a0_0;

typedef struct st_4e47a0_3 {
    float field_0;
    float field_4;
    float field_8;
    float field_c;
    float field_10;
    float field_14;
    char field_18;
    char field_19;
    char padding_1a[2];
    unsigned int field_1c;
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
    unsigned int field_2c;
    char field_30;
    char padding_31[23];
    float field_48;
    unsigned int field_4c;
    unsigned short field_50;
    unsigned short field_52;
    float field_54;
} st_4e47a0_3;

st_4e47a0_1 * SortNodes__6CGraph(st_4e47a0_1 *a0)
{
    st_4e47a0_1 *v23;  // edx
    st_4e47a0_1 *v24;  // esi
    unsigned int v33;  // eax
    unsigned int v34;  // eax
    unsigned int v35;  // ecx
    int v36;  // esi
    st_4e47a0_3 *v37;  // esi
    unsigned int *v38;  // eax
    char *iter;  // ecx
    unsigned int v40;  // edi
    char *v41;  // edx
    st_4e47a0_3 *v42;  // esi
    unsigned int v25;  // edi
    unsigned int k;  // edi
    unsigned int *node;  // edi
    unsigned int *iter1;  // ecx
    st_4e47a0_3 *v47;  // esi
    unsigned int v48;  // edx
    unsigned int *iter2;  // edi
    unsigned int *m;  // esi
    unsigned int v51;  // ecx
    unsigned int *v52;  // edi
    st_4e47a0_0 *v26;  // esi
    unsigned int *n;  // esi
    unsigned int v54;  // ecx
    unsigned int v27;  // ecx
    unsigned int j;  // eax
    int v29;  // edx
    st_4e47a0_0 *v30;  // ecx
    unsigned int v31;  // eax
    unsigned int v32;  // eax
    st_4e47a0_0 *v0;  // [bp-0x80]
    unsigned int v1;  // [bp-0x7c]
    unsigned int v2;  // [bp-0x78]
    unsigned int l;  // [bp-0x78]
    unsigned int v4;  // [bp-0x74]
    unsigned int v5;  // [bp-0x70]
    unsigned int i;  // [bp-0x6c], Other Possible Types: int
    unsigned int v7;  // [bp-0x68]
    unsigned long long v8;  // [bp-0x64]
    unsigned int v9;  // [bp-0x5c]
    unsigned int v10;  // [bp-0x58]
    unsigned int v11;  // [bp-0x54]
    unsigned int v12;  // [bp-0x50]
    char v13;  // [bp-0x4c]
    unsigned int v14;  // [bp-0x48]
    unsigned int v15;  // [bp-0x44]
    unsigned int v16;  // [bp-0x40]
    char v17;  // [bp-0x3c]
    float v18;  // [bp-0x1c]
    unsigned int v19;  // [bp-0x18]
    unsigned short v20;  // [bp-0x14]
    unsigned short v21;  // [bp-0x12]
    float v22;  // [bp-0x10]

    v23 = a0;
    v23->field_c->field_4c = 0;
    v7 = 1;
    i = 1;
    if (i < v23->field_18)
    {
        do
        {
            v24 = a0;
            *(unsigned int *)&v24->field_c->padding_0[88 * i + 76] = 0xffffffff;
            i += 1;
        } while (i < v24->field_18);
    }
    i = 0;
    if (i < a0->field_18)
    {
        do
        {
            v25 = 0;
            v0 = a0->field_c;
            v26 = a0->field_c;
            j = i * 5;
            for (v29 = i; (int)v25 < *(int *)&v26->padding_0[32 + 16 * j + 8 * v29]; j = i + i * 4)
            {
                v30 = v26;
                v31 = *(int *)&v30->padding_0[36 + 16 * v27 + 16 * i + 8 * i] + v25;
                v32 = (*(int *)&v30->padding_0[36 + 16 * v27 + 16 * i + 8 * i] + v25) * 3;
                v33 = (*(int *)&a0->field_10[1 + 6 * v31] + *(int *)&a0->field_10[1 + 2 * v32] * 10) * 8;
                if (*(int *)&v30->padding_0[v33 + 76] == 0xffffffff)
                {
                    *(unsigned int *)&v30->padding_0[v33 + 76] = v7;
                    v7 += 1;
                }
                v25 += 1;
                v26 = a0->field_c;
            }
            i += 1;
        } while (i < a0->field_18);
    }
    i = 0;
    if (i < a0->field_18)
    {
        do
        {
            v34 = i * 88;
            if (*(int *)&a0->field_c->padding_0[v34 + 76] == 0xffffffff)
            {
                *(unsigned int *)&a0->field_c->padding_0[v34 + 76] = v7;
                v7 += 1;
            }
        } while ((i += 1, i < a0->field_18));
    }
    for (i = 0; (int)i < a0->field_1c; i += 1)
    {
        v35 = i * 24;
        *(int *)((char *)a0->field_10 + v35) = *(int *)&a0->field_c->padding_0[88 * *(int *)((char *)a0->field_10 + v35) + 76];
        *(int *)((char *)a0->field_10 + v35 + 4) = *(int *)&a0->field_c->padding_0[88 * *(int *)((char *)a0->field_10 + v35 + 4) + 76];
    }
    i = 0;
    while (i < a0->field_18)
    {
        v36 = i;
        if (*(int *)&a0->field_c->padding_0[88 * v36 + 76] != v36)
        {
            v4 = v36 * 88;
            v1 = v36 * 88;
            while (1)
            {
                v5 = *(int *)&a0->field_c->padding_0[v4 + 76];
                v37 = (char *)a0->field_c + 88 * *(int *)&a0->field_c->padding_0[v4 + 76];
                v8 = CONCAT(*(unsigned int *)&v37->field_4, *(unsigned int *)&v37->field_0);
                *(float *)&v9 = v37->field_8;
                v38 = &v37->field_c;
                *(float *)&v10 = v37->field_c;
                *(float *)&v11 = *(float *)&v38[1];
                *(float *)&v12 = *(float *)&v38[2];
                iter = &v13;
                v40 = 2;
                v41 = &v37->field_18;
                v42 = v37;
                do
                {
                    k = v40;
                    *iter = *v41;
                    iter += 1;
                    v41 += 1;
                    v40 = k - 1;
                } while (k >= 1);
                v14 = v42->field_1c;
                v15 = v42->field_20;
                v16 = v42->field_24;
                node = &v17;
                v2 = 3;
                iter1 = &v42->field_28;
                v47 = v42;
                do
                {
                    l = v2;
                    v48 = iter1[1];
                    *node = *iter1;
                    node[1] = v48;
                    node += 2;
                    iter1 += 2;
                    v2 = l - 1;
                } while (l >= 1);
                v18 = v47->field_48;
                v19 = v47->field_4c;
                v20 = v47->field_50;
                v21 = v47->field_52;
                v22 = v47->field_54;
                iter2 = (char *)a0->field_c + 88 * v5;
                m = &a0->field_c->padding_0[v1];
                for (v51 = 22; v51; m += 1)
                {
                    v51 -= 1;
                    *iter2 = *m;
                    iter2 += 1;
                }
                v52 = &a0->field_c->padding_0[v1];
                n = &v8;
                for (v54 = 22; v54; n += 1)
                {
                    v54 -= 1;
                    *v52 = *n;
                    v52 += 1;
                }
                if (*(int *)&a0->field_c->padding_0[v1 + 76] == i)
                    break;
            }
            i += 1;
        }
        else
        {
            i += 1;
        }
    }
    return a0;
}

