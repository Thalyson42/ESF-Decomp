// UpdatePlayerStats__18CHalfLifeMultiplay @0xdeb30 size=226
typedef struct st_4deb30_1 {
    char padding_0[160];
    struct st_4deb30_2 *field_a0;
} st_4deb30_1;

typedef struct st_4deb30_5 {
    char padding_0[96];
    struct st_4deb30_1 *field_60;
    char padding_64[1764];
    int field_748;
    char padding_74c[24];
    struct st_4deb30_4 *field_764;
} st_4deb30_5;

typedef struct st_4deb30_2 {
    unsigned int field_0;
} st_4deb30_2;

typedef struct st_4deb30_3 {
    char padding_0[52];
    struct st_4deb30_2 *field_34;
} st_4deb30_3;

typedef struct st_4deb30_4 {
    char padding_0[4];
    struct st_4deb30_3 *field_4;
} st_4deb30_4;

typedef struct st_4deb30_0 {
    char padding_0[144];
    int field_90;
} st_4deb30_0;

extern st_4deb30_0 *gpGlobals;

unsigned int * UpdatePlayerStats__18CHalfLifeMultiplay(unsigned int *a0)
{
    int iter;  // edi
    st_4deb30_5 *v4;  // esi
    int v0;  // [bp-0x18]
    int v1;  // [bp-0x14]
    int v2;  // [bp-0x10]

    v2 = 0;
    v1 = 0;
    v0 = 0;
    iter = 1;
    while (iter <= gpGlobals->field_90)
    {
        v4 = sub_48a500(iter);
        if (!v4)
        {
            iter += 1;
        }
        else if (!v4->field_60->field_a0(v4))
        {
            iter += 1;
        }
        else if (v4->field_748 <= 0)
        {
            iter += 1;
        }
        else if ((int)v4->field_764->field_4->field_34(v4->field_764) >= 0)
        {
            v2 += 1;
            v1 += v4->field_748;
            v0 += sub_48ced0(v4);
            iter += 1;
        }
        else
        {
            iter += 1;
        }
    }
    if (v2 <= 0)
    {
        *a0 = 0;
        a0[1] = 0;
        return a0;
    }
    *a0 = v1 / v2;
    a0[1] = v0 / v2;
    return v0 / v2;
}

