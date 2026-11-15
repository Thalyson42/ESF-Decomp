// fde_split @0x196ba4 size=252
typedef struct st_596ba4_2 {
    struct st_596ba4_0 *field_0;
} st_596ba4_2;

typedef struct st_596ba4_1 {
    struct st_596ba4_2 *field_0;
    unsigned int field_4;
} st_596ba4_1;

typedef struct st_596ba4_0 {
    char padding_0[8];
    unsigned int field_8;
} st_596ba4_0;

st_596ba4_1 * fde_split(st_596ba4_1 *a0, st_596ba4_1 *a1)
{
    unsigned int v7;  // edx
    unsigned int v8;  // edi
    unsigned int idx;  // ecx
    st_596ba4_0 **v10;  // esi
    unsigned int idx1;  // edi
    unsigned int index;  // ecx
    st_596ba4_0 **v13;  // edx
    char v0;  // [bp-0x3c]
    st_596ba4_0 **v1;  // [bp-0x20]
    unsigned int *v2;  // [bp-0x18]
    unsigned int v3;  // [bp-0x14]
    st_596ba4_0 **v4;  // [bp-0x10]
    unsigned int *v5;  // [bp-0xc]
    unsigned int v6;  // [bp-0x8]

    v7 = 0xffffffff;
    v8 = 0;
    v6 = a0->field_4;
    v5 = &(&v0)[-1 * ((a0->field_4 * 32 >> 3) + 15 & 0x3ffffff0)];
    if (0 < v6)
    {
        do
        {
            idx = v7;
            v2 = v8 * 4;
            v3 = v8 + 1;
            if (idx != 0xffffffff)
            {
                v10 = a0->field_0;
                if ((int)(v10[v8]->field_8 - v10[idx]->field_8) < 0)
                {
                    v4 = a1->field_0;
                    v1 = v10;
                    do
                    {
                        v4[a1->field_4] = v1[idx];
                        a1->field_4 = a1->field_4 + 1;
                        v1[idx] = 0;
                        idx = v5[idx];
                    } while (idx != 0xffffffff && (int)(v1[v8]->field_8 - v1[idx]->field_8) < 0);
                }
            }
        } while ((*(unsigned int *)(v2 + v5) = idx, v8 = v3, v7 = v8, v8 < v6));
    }
    idx1 = 0;
    index = 0;
    if (0 < v6)
    {
        v13 = a0->field_0;
        do
        {
            if (v13[idx1])
            {
                v13[index] = v13[idx1];
                index += 1;
            }
        } while ((idx1 += 1, idx1 < v6));
    }
    a0->field_4 = index;
    return a0;
}

