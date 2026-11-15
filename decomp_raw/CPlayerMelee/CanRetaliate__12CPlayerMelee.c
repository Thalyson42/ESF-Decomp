// CanRetaliate__12CPlayerMelee @0x1038e0 size=146
typedef struct st_5038e0_1 {
    char padding_0[16];
    unsigned int field_10;
} st_5038e0_1;

typedef struct st_5038e0_0 {
    char padding_0[236];
    unsigned int field_ec;
    char padding_f0[68];
    int field_134;
} st_5038e0_0;

unsigned int CanRetaliate__12CPlayerMelee(st_5038e0_0 *a0)
{
    st_5038e0_1 *v2;  // esi
    unsigned int v3;  // eax
    unsigned int v0;  // [bp-0xc]
    unsigned int v1;  // [bp-0x8]

    v1 = 0;
    v2 = sub_48cc50(a0);
    sub_487fe0(a0, &v1);
    v0 = 0;
    if (!a0->field_ec)
    {
        if (!v2)
        {
            return v0;
        }
        else if (v2->field_10)
        {
            if (!((char)v1 & 1) && !(*(char *)((void*)&v1 + 1) & 8))
                return v0;
            v3 = sub_48dfc0(a0);
            if (v3 != sub_48dfc0(a0->field_134))
                return v0;
        }
        else
        {
            return v0;
        }
    }
    v0 = 1;
    return v0;
}

