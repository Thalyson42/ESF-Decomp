// LookupActivity__FPvP9entvars_si @0x8eee0 size=161
typedef struct st_48eee0_0 {
    char padding_0[164];
    int field_a4;
    unsigned int field_a8;
} st_48eee0_0;

typedef struct st_48eee0_1 {
    unsigned int field_0;
} st_48eee0_1;

extern st_48eee0_1 *g_engfuncs.pfnRandomLong;

int LookupActivity__FPvP9entvars_si(st_48eee0_0 *a0, unsigned int a1, unsigned int a2)
{
    int iter;  // edi
    unsigned int v5;  // esi
    int v6;  // eax
    int v0;  // [bp-0x14]
    unsigned int v1;  // [bp-0x10]
    unsigned int v2;  // [bp-0x10]
    st_48eee0_0 *v3;  // [bp-0xc]

    if (!a0)
        return 0;
    v3 = &a0->padding_0[a0->field_a8];
    v1 = 0;
    v0 = -0x1;
    iter = 0;
    while (iter < a0->field_a4)
    {
        v5 = iter * 176;
        if (*(int *)&v3->padding_0[40 + v5] == a2)
        {
            v2 = v1 + *(int *)&v3->padding_0[44 + v5];
            if (!(v1 + *(int *)&v3->padding_0[44 + v5]) || (v6 = g_engfuncs.pfnRandomLong(0, v2 - 1), (int)g_engfuncs.pfnRandomLong(0, v2 - 1) < *(int *)&v3->padding_0[44 + v5]))
            {
                v0 = iter;
                iter += 1;
                v1 = v2;
            }
            else
            {
                iter += 1;
                v1 = v2;
            }
        }
        else
        {
            iter += 1;
        }
    }
    return v0;
}

