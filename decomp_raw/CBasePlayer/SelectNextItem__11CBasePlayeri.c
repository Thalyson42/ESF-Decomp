// SelectNextItem__11CBasePlayeri @0xfb970 size=284
typedef struct st_4fb970_2 {
    char padding_0[96];
    struct st_4fb970_0 *field_60;
    char padding_64[32];
    struct st_4fb970_2 *field_84;
} st_4fb970_2;

typedef struct st_4fb970_3 {
    char padding_0[1912];
    unsigned int field_778;
    char padding_77c[8];
    unsigned int field_784;
    char padding_788[440];
    struct st_4fb970_2 *field_940;
    char padding_944[36];
    struct st_4fb970_2 *field_968;
} st_4fb970_3;

typedef struct st_4fb970_0 {
    char padding_0[252];
    struct st_4fb970_1 *field_fc;
    struct st_4fb970_1 *field_100;
    struct st_4fb970_1 *field_104;
    struct st_4fb970_1 *field_108;
} st_4fb970_0;

typedef struct st_4fb970_1 {
    unsigned int field_0;
} st_4fb970_1;

st_4fb970_2 ** SelectNextItem__11CBasePlayeri(st_4fb970_3 *a0, unsigned int idx)
{
    st_4fb970_2 **v0;  // eax
    st_4fb970_2 **v1;  // eax
    st_4fb970_2 *node;  // esi
    st_4fb970_2 *iter;  // edx

    if (a0->field_968)
    {
        v0 = a0->field_968->field_60->field_100(a0->field_968);
        if (!v0)
            return v0;
    }
    v1 = &a0->field_940;
    node = v1[idx];
    if (!node)
        return v1;
    if (node == a0->field_968)
    {
        node = node->field_84;
        if (!node)
            return v1;
        iter = node;
        if (node->field_84)
        {
            do
            {
                iter = iter->field_84;
            } while (iter->field_84);
        }
        iter->field_84 = a0->field_968;
        a0->field_968->field_84 = NULL;
        v1 = &a0->field_940;
        v1[idx] = node;
    }
    if (a0->field_968)
    {
        v1 = a0->field_968->field_60->field_104(a0->field_968, 0);
        a0->field_778 = 0;
        a0->field_784 = 0;
    }
    a0->field_968 = node;
    if (!node)
        return v1;
    node->field_60->field_fc(node);
    return a0->field_968->field_60->field_108(a0->field_968);
}

