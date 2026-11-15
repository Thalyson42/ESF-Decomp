// find_exception_handler @0x194e4c size=205
typedef struct st_594e4c_1 {
    unsigned int field_0;
} st_594e4c_1;

typedef struct st_594e4c_0 {
    char padding_0[4];
    unsigned int field_4;
} st_594e4c_0;

unsigned int find_exception_handler(st_594e4c_0 *a0, unsigned int *a1, st_594e4c_1 **a2, unsigned int a3, unsigned int *a4)
{
    int v4;  // edx
    unsigned int *v5;  // ecx
    int v6;  // edx
    unsigned int v7;  // edi
    unsigned int v8;  // eax
    unsigned int *iter;  // esi
    int v0;  // [bp-0x1c]
    int v1;  // [bp-0x18]
    int v2;  // [bp-0x14]
    unsigned int v3;  // [bp-0x8]

    sub_594e48(v0, v1, v2);
    v3 = 0;
    *a4 = 1;
    if (!a1)
        return v3;
    v4 = 0;
    v5 = a1 + 2;
    if (a3)
    {
        v6 = (int)(a0 - v5) >> 4;
        v7 = a0->field_4 - 1;
        if (v5[4 * v6] == 0xffffffff)
            return v3;
        v4 = v6 + 1;
    }
    else
    {
        v7 = (char *)a0 - 1;
    }
    v8 = v4 * 16;
    if (*(int *)((char *)v5 + v8) == 0xffffffff)
        return v3;
    iter = (char *)v5 + v8;
    while (1)
    {
        if (*iter <= v7 && iter[1] > v7)
        {
            if (iter[3])
            {
                if (*a2 && (*a2)(a2, iter[3], a1))
                    break;
            }
            else
            {
                if (!v3)
                    v3 = iter[2];
            }
        }
        iter += 4;
        if (*iter == 0xffffffff)
            return v3;
    }
    if (!v3)
        v3 = iter[2];
    *a4 = 0;
    return v3;
}

