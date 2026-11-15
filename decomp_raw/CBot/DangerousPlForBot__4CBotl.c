// DangerousPlForBot__4CBotl @0x174bc0 size=157
typedef struct st_574bc0_1 {
    char padding_0[1860];
    int field_744;
    char padding_748[700];
    struct st_574bc0_0 *field_a04;
} st_574bc0_1;

typedef struct st_574bc0_0 {
    char padding_0[52];
    unsigned int field_34;
} st_574bc0_0;

typedef struct st_574bc0_2 {
    unsigned int field_0;
} st_574bc0_2;

extern st_574bc0_2 *g_616928;

char DangerousPlForBot__4CBotl(st_574bc0_1 *a0, int a1)
{
    int v2;  // esi
    unsigned int v0;  // [bp-0x2c]
    unsigned int v1;  // [bp-0x28]

    if (a0->field_a04->field_34 == 2)
    {
        v1 = 250000;
        v0 = 100000;
    }
    else if (a0->field_a04->field_34 == 1)
    {
        v1 = 1000000;
        v0 = 550000;
    }
    else if (!a0->field_a04->field_34)
    {
        v1 = 1250000;
        v0 = 750000;
    }
    else
    {
        return a0->field_744 < a1;
    }
    v2 = a1 - g_616928(v0, v1);
    return a0->field_744 < v2;
}

