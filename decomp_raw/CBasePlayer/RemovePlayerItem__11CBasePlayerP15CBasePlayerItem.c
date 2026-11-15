// RemovePlayerItem__11CBasePlayerP15CBasePlayerItem @0xfd180 size=253
typedef struct st_4fd180_2 {
    unsigned int field_0;
    char padding_4[92];
    struct st_4fd180_0 *field_60;
    char padding_64[32];
    struct st_4fd180_2 *field_84;
} st_4fd180_2;

typedef struct st_4fd180_4 {
    char padding_0[188];
    unsigned int field_bc;
    unsigned int field_c0;
} st_4fd180_4;

typedef struct st_4fd180_3 {
    struct st_4fd180_4 *field_0;
    char padding_4[2364];
    struct st_4fd180_2 *field_940;
    char padding_944[36];
    struct st_4fd180_2 *field_968;
    char padding_96c[4];
    struct st_4fd180_2 *field_970;
} st_4fd180_3;

typedef struct st_4fd180_0 {
    char padding_0[260];
    struct st_4fd180_1 *field_104;
    char padding_108[40];
    struct st_4fd180_1 *field_130;
} st_4fd180_0;

typedef struct st_4fd180_1 {
    unsigned int field_0;
} st_4fd180_1;

unsigned int RemovePlayerItem__11CBasePlayerP15CBasePlayerItem(st_4fd180_3 *a0, st_4fd180_2 *a1)
{
    st_4fd180_2 *iter;  // esi
    unsigned int idx;  // eax
    st_4fd180_2 **v0;  // [bp-0x8]

    if (a0->field_968 == a1)
    {
        a1->field_60->field_104(a1, 0);
        *(unsigned int *)(a1->field_0 + 260) = 0;
        *(unsigned int *)&a1->padding_4[8] = 0;
        *(unsigned int *)&a1->padding_4[12] = 0;
        a0->field_968 = NULL;
        a0->field_0->field_bc = 0;
        a0->field_0->field_c0 = 0;
    }
    else if (a0->field_970 == a1)
    {
        a0->field_970 = NULL;
    }
    v0 = &a0->field_940;
    iter = v0[a1->field_60->field_130(a1)];
    if (iter == a1)
    {
        idx = iter->field_60->field_130(iter);
        v0[idx] = iter->field_84;
    }
    else
    {
        while (1)
        {
            if (!iter)
                return 0;
            if (iter->field_84 == a1)
                break;
            iter = iter->field_84;
        }
        if (!iter)
            return 0;
        iter->field_84 = a1->field_84;
    }
    return 1;
}

