// _._9CBotCombo @0x164dc0 size=194
typedef struct st_564dc0_2 {
    char padding_0[16];
    struct st_564dc0_0 *field_10;
} st_564dc0_2;

typedef struct st_564dc0_1 {
    unsigned int field_0;
} st_564dc0_1;

typedef struct st_564dc0_0 {
    char padding_0[8];
    struct st_564dc0_1 *field_8;
} st_564dc0_0;

typedef struct st_564dc0_3 {
    struct st_564dc0_2 *field_0;
    struct st_564dc0_3 *field_4;
    unsigned int field_8;
} st_564dc0_3;

unsigned int _._9CBotCombo(st_564dc0_3 **a0, unsigned int a1)
{
    st_564dc0_2 *v0;  // esi
    st_564dc0_3 *v1;  // edx
    st_564dc0_3 *v2;  // eax
    st_564dc0_2 *v3;  // edx
    st_564dc0_3 *iter;  // esi
    st_564dc0_3 *v5;  // eax
    unsigned int v6;  // eax

    while (*a0)
    {
        if (*a0)
        {
            v0 = *a0->field_0;
            v1 = *a0;
            if (v1)
            {
                if (v1 == a0[1])
                    a0[1] = v1->field_4;
                v2 = *a0->field_4;
                *a0 = v2;
                if (v2)
                    v2->field_8 = 0;
                v1->field_4 = NULL;
                __builtin_delete(v1);
            }
            v3 = v0;
            if (v3)
                v3->field_10->field_8(v3, 3);
        }
    }
    iter = *a0;
    if (*a0)
    {
        do
        {
            v5 = iter;
            iter = iter->field_4;
            v5->field_4 = NULL;
            v5->field_8 = 0;
            __builtin_delete(v5);
        } while (iter);
    }
    a0[1] = NULL;
    *a0 = NULL;
    v6 = a1;
    if ((char)v6 & 1)
        v6 = __builtin_delete(a0);
    return v6;
}

