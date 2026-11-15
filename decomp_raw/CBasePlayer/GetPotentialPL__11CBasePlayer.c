// GetPotentialPL__11CBasePlayer @0xf2ce0 size=221
typedef struct st_4f2ce0_3 {
    char padding_0[1864];
    int field_748;
    char padding_74c[24];
    struct st_4f2ce0_2 *field_764;
} st_4f2ce0_3;

typedef struct st_4f2ce0_1 {
    unsigned int field_0;
} st_4f2ce0_1;

typedef struct st_4f2ce0_0 {
    char padding_0[28];
    struct st_4f2ce0_1 *field_1c;
    char padding_20[8];
    struct st_4f2ce0_1 *field_28;
} st_4f2ce0_0;

typedef struct st_4f2ce0_2 {
    char padding_0[4];
    struct st_4f2ce0_0 *field_4;
} st_4f2ce0_2;

int GetPotentialPL__11CBasePlayer(st_4f2ce0_3 *a0)
{
    st_4f2ce0_2 *v4;  // edi
    double v5;  // mm0
    int v6;  // eax
    st_4f2ce0_2 *v0;  // [bp-0x14]
    int v1;  // [bp-0x10]
    unsigned short v2;  // [bp-0xc]
    unsigned short v3;  // [bp-0xa]

    v1 = a0->field_748;
    v4 = a0->field_764->field_4->field_1c(a0->field_764);
    if (v1 > (int)a0->field_764->field_4->field_28(a0->field_764))
    {
        if (v4)
        {
            do
            {
                (*(int *)&v4->field_4[1].padding_0[0])(v4);
                v5 *= (double)v1;
                v3 = __fnstcw();
                v2 = v3 | 0xc00;
                v1 = (int)v5;
                v6 = v4->field_4->field_28(v4);
                v0 = v4;
                v4 = v4->field_4->field_1c(v4);
                __builtin_delete(v0);
            } while (v1 > v6 && v4);
        }
        else
        {
            return v1;
        }
    }
    if (v4)
        __builtin_delete(v4);
    return v1;
}

