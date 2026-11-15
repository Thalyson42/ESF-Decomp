// SetDirections__12CPlayerMelee @0x105530 size=365
typedef struct st_505530_1 {
    char padding_0[4];
    unsigned int field_4;
    char padding_8[8];
    unsigned int field_10;
} st_505530_1;

typedef struct st_505530_0 {
    char padding_0[328];
    struct st_505530_1 *field_148;
} st_505530_0;

unsigned int SetDirections__12CPlayerMelee(st_505530_0 *a0)
{
    unsigned int *v1;  // esi
    unsigned int v2;  // esi
    unsigned int v0;  // [bp-0x8]

    v0 = 0;
    sub_48e0d0(a0, &v0);
    v1 = a0->field_148;
    if (v1)
    {
        if (!v0)
        {
            if (sub_487fe0(a0, &v0))
            {
                sub_489990(a0, v0, v1);
            }
            else
            {
                sub_48d690(a0, v1);
                return 1;
            }
        }
        else
        {
            if (sub_487fe0(a0, &v0))
            {
                if (v1[4] || v1[1] != v0)
                {
                    if (sub_48cbe0(a0, v1[1]) && !sub_48cbe0(a0, v0))
                    {
                        sub_48b370(a0, v1, v0);
                    }
                    else
                    {
                        if (!sub_489990(a0, v0, v1) && sub_48d530(a0, v1))
                        {
                            v2 = sub_48d690(a0, v1);
                            if (v2)
                                return v2;
                            sub_48d920(a0, v0);
                            return v2;
                        }
                    }
                }
            }
            else
            {
                sub_48d690(a0, v1);
                return 1;
            }
        }
        return sub_48aca0(a0, v1);
    }
    else if (sub_487fe0(a0, &v0))
    {
        sub_48d920(a0, v0);
        return 0;
    }
    else
    {
        return 1;
    }
}

