// Use__12CGameCounterP11CBaseEntityT18USE_TYPEf @0xd0960 size=321
typedef struct st_4d0960_0 {
    char padding_0[352];
    float field_160;
    float field_164;
    char padding_168[56];
    char field_1a0;
    char padding_1a1[63];
    float field_1e0;
} st_4d0960_0;

typedef struct st_4d0960_1 {
    char padding_0[352];
    unsigned int field_160;
    unsigned int field_164;
    char padding_168[56];
    char field_1a0;
    char padding_1a1[63];
    unsigned int field_1e0;
} st_4d0960_1;

extern char _GLOBAL_OFFSET_TABLE_;

st_4d0960_1 * Use__12CGameCounterP11CBaseEntityT18USE_TYPEf(st_4d0960_0 **a0, int a1, unsigned int a2, unsigned int a3)
{
    st_4d0960_1 *v4;  // eax
    st_4d0960_0 *v5;  // eax
    st_4d0960_1 *v0;  // [bp-0x2c]
    st_4d0960_1 *v1;  // [bp-0x2c]
    unsigned short v2;  // [bp-0x28]
    unsigned short v3;  // [bp-0x26]

    v4 = sub_48aa30(a0, a1);
    if (!v4)
    {
        return v4;
    }
    else if (a3 <= 3)
    {
        goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&(&_GLOBAL_OFFSET_TABLE_)[4 * a3] - 1323308)]));
    }
    else
    {
        v3 = __fnstcw();
        v2 = v3 | 0xc00;
        v0 = (int)*a0->field_164;
        v3 = __fnstcw();
        v2 = v3 | 0xc00;
        v1 = (int)*a0->field_160;
        if (v0 != v1)
            return v1;
        sub_48df80(a0, a1, 3, 0);
        if (*a0->field_1a0 & 1)
            sub_48cc00(a0);
        v5 = *a0;
        if (!(v5->field_1a0 & 2))
            return v5;
        v5->field_164 = v5->field_1e0;
        return v5;
    }
}

