// SetComboMoves__12CPlayerMelee @0x104290 size=410
typedef struct st_504290_3 {
    char padding_0[1892];
    struct st_504290_2 *field_764;
} st_504290_3;

typedef struct st_504290_5 {
    char padding_0[292];
    struct st_504290_3 *field_124;
    char padding_128[40];
    struct st_504290_4 *field_150;
} st_504290_5;

typedef struct st_504290_6 {
    char padding_0[4];
    unsigned int field_4;
    char padding_8[12];
    unsigned int field_14;
    unsigned int field_18;
    struct st_504290_6 *field_1c;
    struct st_504290_6 *field_20;
} st_504290_6;

typedef struct st_504290_1 {
    unsigned int field_0;
} st_504290_1;

typedef struct st_504290_0 {
    char padding_0[52];
    struct st_504290_1 *field_34;
} st_504290_0;

typedef struct st_504290_4 {
    int field_0;
    unsigned int field_4;
    char padding_8[68];
    struct st_504290_4 *field_4c;
} st_504290_4;

typedef struct st_504290_2 {
    char padding_0[4];
    struct st_504290_0 *field_4;
} st_504290_2;

unsigned int SetComboMoves__12CPlayerMelee(st_504290_5 *a0)
{
    unsigned int index;  // eax
    st_504290_6 *v9;  // eax
    st_504290_6 *node;  // esi
    unsigned int *v11;  // edi
    unsigned int v12;  // eax
    st_504290_6 *iter;  // esi
    unsigned int v0;  // [bp-0x1c]
    char v1;  // [bp-0x15]
    st_504290_6 *v2;  // [bp-0x14]
    unsigned int v3;  // [bp-0x10]
    unsigned int idx;  // [bp-0x10]
    st_504290_6 *v5;  // [bp-0xc]
    st_504290_6 *v6;  // [bp-0xc]
    int iter1;  // [bp-0x8]

    v5 = sub_48cc50(a0);
    if (!v5)
        return 0;
    v5 = v5;
    if (v5->field_1c)
    {
        do
        {
            v6 = v5;
            v5 = v6->field_1c;
        } while (v6->field_1c->field_1c);
    }
    index = a0->field_124->field_764->field_4->field_34(a0->field_124->field_764);
    v3 = (&a0->field_150)[index];
    if (!(&a0->field_150)[index])
        return 1;
    do
    {
        idx = v3;
        v2 = v5;
        if (v5)
        {
            do
            {
                v1 = 1;
                if (v2->field_18)
                {
                    v9 = v2->field_20;
                }
                else
                {
                    iter1 = 0;
                    v0 = idx + 12;
                    for (node = v2; iter1 < *(int *)idx; iter1 += 1)
                    {
                        if (node && !node->field_18 && !(v11 = iter1 * 8, *(int *)((char *)v11 + idx + 8) != node->field_4 || (v12 = sub_489cb0(a0, node), *(int *)((char *)v11 + v0) != sub_489cb0(a0, node))))
                        {
                            node = node->field_20;
                        }
                        else
                        {
                            v1 = 0;
                            break;
                        }
                    }
                    if (v1)
                    {
                        iter = v2;
                        for (iter1 = 0; iter1 < *(int *)idx; iter1 += 1)
                        {
                            iter->field_14 = *(int *)(idx + 4);
                            if (!iter1)
                            {
                                iter->field_18 = 1;
                            }
                            else if (iter1 == *(int *)idx - 1)
                            {
                                iter->field_18 = 3;
                            }
                            else
                            {
                                iter->field_18 = 2;
                            }
                            iter = iter->field_20;
                        }
                    }
                    v9 = v2->field_20;
                }
            } while ((v2 = v9, v2));
        }
    } while ((v3 = *(int *)(idx + 76), *(int *)(idx + 76)));
    return 1;
}

