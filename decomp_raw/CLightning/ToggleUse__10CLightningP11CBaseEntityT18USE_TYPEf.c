// ToggleUse__10CLightningP11CBaseEntityT18USE_TYPEf @0xb1000 size=190
typedef struct st_4b1000_1 {
    char padding_0[260];
    unsigned int field_104;
    char padding_108[16];
    char field_118;
    char padding_119[199];
    float field_1e0;
    unsigned int field_1e4;
} st_4b1000_1;

typedef struct st_4b1000_0 {
    char padding_0[260];
    unsigned int field_104;
    char padding_108[16];
    char field_118;
    char padding_119[199];
    unsigned int field_1e0;
    unsigned int field_1e4;
} st_4b1000_0;

typedef struct st_4b1000_2 {
    struct st_4b1000_1 *field_0;
    char padding_4[96];
    int field_64;
} st_4b1000_2;

typedef struct st_4b1000_3 {
    float field_0;
} st_4b1000_3;

extern st_4b1000_3 *gpGlobals;

st_4b1000_0 * ToggleUse__10CLightningP11CBaseEntityT18USE_TYPEf(st_4b1000_2 *a0, unsigned int a1, unsigned int a2, int a3)
{
    st_4b1000_1 *v1;  // eax
    unsigned int v0;  // [bp-0x34]

    if (!sub_48ab90(a0, a3, a0->field_64))
    {
        return v1;
    }
    else if (a0->field_64)
    {
        a0->field_64 = 0;
        a0->field_0->field_118 = a0->field_0->field_118 | 128;
        v1 = a0->field_0;
        v1->field_104 = 0;
        return v1;
    }
    else
    {
        a0->field_64 = 1;
        a0->field_0->field_118 = a0->field_0->field_118 & 127;
        v0 = sub_4882e0(a0);
        sub_489be0(a0, sub_487ce0(a0));
        if (0.0 >= a0->field_0->field_1e0)
            return v1;
        *(float *)&a0->field_0->field_104 = *(float *)gpGlobals;
        *(float *)&a0->field_0->field_1e4 = *(float *)gpGlobals;
        return v1;
    }
}

