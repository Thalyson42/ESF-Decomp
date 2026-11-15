// find_fde @0x1962ec size=145
typedef struct st_5962ec_0 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
} st_5962ec_0;

typedef struct st_5962ec_1 {
    unsigned int field_0;
    unsigned int field_4;
    char padding_8[4];
    struct st_5962ec_2 *field_c;
    unsigned int field_10;
    struct st_5962ec_1 *field_14;
} st_5962ec_1;

typedef struct st_5962ec_2 {
    struct st_5962ec_0 *field_0;
} st_5962ec_2;

typedef struct st_5962ec_3 {
    char padding_0[624610];
    struct st_5962ec_1 *field_987e2;
} st_5962ec_3;

unsigned int * find_fde(unsigned int a0)
{
    st_5962ec_3 *v4;  // ebx
    st_5962ec_1 *iter;  // esi
    unsigned int v6;  // edi
    unsigned int idx;  // ecx
    unsigned int v8;  // eax
    int v0;  // [bp-0x1c]
    int v1;  // [bp-0x18]
    int v2;  // [bp-0x14]
    unsigned int i;  // [bp-0x8]

    sub_5962e8(v0, v1, v2);
    iter = *(int *)&(v4->padding_0)[1];
    while (1)
    {
        if (!iter)
            return NULL;
        if (!iter->field_0)
            frame_init(iter);
        if (a0 >= iter->field_0 && a0 < iter->field_4)
            break;
        iter = iter->field_14;
    }
    if (!iter)
        return NULL;
    i = 0;
    v6 = iter->field_10;
    if (i >= iter->field_10)
        return NULL;
    do
    {
        idx = i + v6 >> 1;
        v8 = *(int *)&iter->field_c[idx];
        if (a0 < (unsigned int)*(int *)(v8 + 8))
        {
            v6 = idx;
        }
        else if (a0 >= (unsigned int)(*(int *)(v8 + 8) + *(int *)(v8 + 12)))
        {
            i = idx + 1;
        }
        else
        {
            return v8;
        }
    } while (i < v6);
    return NULL;
}

