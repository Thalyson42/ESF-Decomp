// end_fde_sort @0x195f1c size=489
typedef struct st_595f1c_1 {
    unsigned int field_0;
    unsigned int field_4;
    struct st_595f1c_2 *field_8;
    unsigned int field_c;
} st_595f1c_1;

typedef struct st_595f1c_2 {
    struct st_595f1c_0 *field_0;
} st_595f1c_2;

typedef struct st_595f1c_3 {
    struct st_595f1c_2 *field_0;
    unsigned int field_4;
} st_595f1c_3;

typedef struct st_595f1c_0 {
    char padding_0[8];
    unsigned int field_8;
} st_595f1c_0;

int end_fde_sort(st_595f1c_1 *a0, unsigned int a1)
{
    st_595f1c_3 *v12;  // esi
    st_595f1c_0 **v13;  // edi
    unsigned int index;  // edx
    unsigned int v15;  // ecx
    unsigned int v16;  // esi
    st_595f1c_0 *v17;  // edx
    unsigned int idx;  // edx
    unsigned int v19;  // esi
    int v0;  // [bp-0x3c]
    int v1;  // [bp-0x38]
    int v2;  // [bp-0x34]
    int node;  // [bp-0x28], Other Possible Types: unsigned int
    int iter;  // [bp-0x24], Other Possible Types: unsigned int
    st_595f1c_3 *v5;  // [bp-0x20]
    st_595f1c_0 *v6;  // [bp-0x1c]
    st_595f1c_0 *v7;  // [bp-0x18]
    unsigned int v8;  // [bp-0x14]
    st_595f1c_0 *v9;  // [bp-0x10]
    unsigned int i;  // [bp-0xc]
    unsigned int idx1;  // [bp-0x8]

    sub_595f18(v0, v1, v2);
    if (a0->field_4 != a1)
        abort@GLIBC_2.0();
    v12 = &a0->field_8;
    fde_split(a0, v12);
    v5 = v12;
    if (a0->field_c + a0->field_4 != a0->field_4)
        abort@GLIBC_2.0();
    v13 = a0->field_8;
    idx1 = v5->field_4;
    i = idx1;
    if (idx1)
    {
        do
        {
            index = i - 1;
            i = index;
            while (1)
            {
                v15 = index * 2;
                if (v15 + 1 >= idx1)
                    break;
                v6 = v13[1 + 2 * index];
                v16 = v13[index];
                if (v15 + 2 < idx1 && (v9 = v13[2 + 2 * index], node = v13[2 + 2 * index]->field_8, iter = v13[2 + 2 * index]->field_8, iter -= v6->field_8, iter > 0 && (node -= *(int *)(v16 + 8), node > 0)))
                {
                    v13[index] = v9;
                    v13[2 + 2 * index] = v16;
                    index = index * 2 + 2;
                }
                else
                {
                    if ((int)(v6->field_8 - *(int *)(v16 + 8)) <= 0)
                        break;
                    v13[index] = v6;
                    v13[1 + 2 * index] = v16;
                    index = index * 2 + 1;
                }
            }
        } while (i);
    }
    while (idx1 > 1)
    {
        idx1 -= 1;
        v17 = *v13;
        *v13 = v13[idx1];
        v13[idx1] = v17;
        idx = 0;
        if (idx1 > 1)
        {
            do
            {
                v8 = idx * 2 + 2;
                v6 = v13[1 + 2 * idx];
                v19 = v13[idx];
                if (v8 < idx1 && (v7 = v13[2 + 2 * idx], node = v13[2 + 2 * idx]->field_8, iter = v13[2 + 2 * idx]->field_8, iter -= v6->field_8, iter > 0 && (node -= *(int *)(v19 + 8), node > 0)))
                {
                    v13[idx] = v7;
                    v13[2 + 2 * idx] = v19;
                    idx = v8;
                    continue;
                }
                else
                {
                    if ((int)(v6->field_8 - *(int *)(v19 + 8)) <= 0)
                        break;
                    v13[idx] = v6;
                    v13[1 + 2 * idx] = v19;
                    idx = idx * 2 + 1;
                }
            } while (idx * 2 + 1 < idx1);
        }
    }
    fde_merge(a0, v5);
    free@GLIBC_2.0(a0->field_8);
    return a0->field_0;
}

