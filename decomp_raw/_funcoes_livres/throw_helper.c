// throw_helper @0x195054 size=864
typedef struct st_595054_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned int field_8;
    int field_c;
} st_595054_0;

typedef struct st_595054_1 {
    unsigned int field_0;
    unsigned int field_4;
    char padding_8[4];
    unsigned int field_c;
    char padding_10[74];
    unsigned short field_5a;
} st_595054_1;

unsigned int throw_helper(st_595054_0 *a0, int a1, st_595054_1 *a2, unsigned int *a3)
{
    unsigned int v22;  // ecx
    st_595054_1 *iter;  // edi
    st_595054_1 *v32;  // edi
    unsigned int v33;  // esi
    st_595054_1 *i;  // esi
    unsigned int v25;  // edx
    unsigned int *iter1;  // edi
    unsigned int v27;  // ecx
    st_595054_1 *iter2;  // esi
    unsigned int v29;  // ecx
    st_595054_1 *node;  // edi
    st_595054_1 *j;  // esi
    int v0;  // [bp-0x1dc]
    int v1;  // [bp-0x1d8]
    int v2;  // [bp-0x1d4]
    int v3;  // [bp-0x1bc]
    st_595054_1 *v4;  // [bp-0x1b8]
    unsigned int v5;  // [bp-0x1b4]
    unsigned int v6;  // [bp-0x1b0]
    unsigned int v7;  // [bp-0x1ac]
    unsigned int v8;  // [bp-0x1a8]
    unsigned int v9;  // [bp-0x1a4]
    int v10;  // [bp-0x1a0]
    int v11;  // [bp-0x1a0]
    unsigned int v12;  // [bp-0x19c]
    unsigned int v13;  // [bp-0x19c]
    unsigned int v14;  // [bp-0x198]
    st_595054_1 *v15;  // [bp-0x190]
    st_595054_1 *v16;  // [bp-0x18c]
    unsigned int v17;  // [bp-0x188]
    char v18;  // [bp-0x184]
    char v19;  // [bp-0x104]
    char v20;  // [bp-0x84]
    int k;  // [bp+0x8]

    sub_595050(v0, v1, v2);
    v16 = &v20;
    v15 = &v19;
    v17 = 0;
    v9 = 0;
    v7 = 0;
    v5 = a0->field_8;
    v8 = a0->field_c != 0;
    v22 = 28;
    iter = v16;
    for (i = a2; v22; i = &i->field_4)
    {
        v22 -= 1;
        iter->field_0 = i->field_0;
        iter = &iter->field_4;
    }
    v14 = 0;
    k = a1;
    while (1)
    {
        v4 = v16;
        v16 = next_stack_level(k, v4, v15);
        v15 = v4;
        if (!v16)
            break;
        v25 = v16->field_4;
        if (v8)
        {
            v8 = 0;
            v14 = find_exception_handler(a0->field_c, v25, v5, 1, &v17);
            a0->field_c = 0;
        }
        else
        {
            v14 = (!v25 ? old_find_exception_handler(k, v25) : find_exception_handler(k, v25, v5, 0, &v17));
        }
        if (v14)
        {
            if (!v17)
            {
                v9 = 0;
                break;
            }
            else if (!v7)
            {
                iter1 = &v18;
                v27 = 28;
                for (iter2 = v16; v27; iter2 = &iter2->field_4)
                {
                    v27 -= 1;
                    *iter1 = iter2->field_0;
                    iter1 += 1;
                }
                v12 = v14;
                v10 = k;
                v7 = 1;
                v9 = 1;
            }
        }
        k = *(int *)get_reg_addr(v16->field_5a, v16, v4) - 1;
    }
    if (v7)
    {
        v16 = &v18;
        v14 = v13;
        k = v11;
        if (v9)
            __unwinding_cleanup();
    }
    if (!v14)
        __terminate();
    a0->field_0 = v14;
    v6 = v16->field_c;
    if (k == a1)
    {
        v16 = a2;
    }
    else
    {
        v3 = k;
        k = a1;
        v29 = 28;
        node = v16;
        for (j = a2; v29; j = &j->field_4)
        {
            v29 -= 1;
            node->field_0 = j->field_0;
            node = &node->field_4;
        }
        if (k != v3)
        {
            do
            {
                v32 = v16;
                v16 = next_stack_level(k, v32, v15);
                v15 = v32;
                v33 = 0;
                do
                {
                    if (v33 != v16->field_5a && *(v33 + (char *)v16 + 92))
                        copy_reg(v33, v16, a2);
                } while ((v33 += 1, (int)v33 <= 16));
                k = *(int *)get_reg_addr(v16->field_5a, v16, v32) - 1;
            } while (k != v3);
        }
    }
    *a3 = v16->field_0 - a2->field_0 + v6;
    return v14;
}

