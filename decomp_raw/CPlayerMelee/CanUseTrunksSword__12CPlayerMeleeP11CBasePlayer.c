// CanUseTrunksSword__12CPlayerMeleeP11CBasePlayer @0x103b60 size=180
typedef struct st_503b60_3 {
    char padding_0[1892];
    struct st_503b60_2 *field_764;
} st_503b60_3;

typedef struct st_503b60_8 {
    struct st_503b60_6 *field_0;
    char padding_4[1888];
    struct st_503b60_2 *field_764;
} st_503b60_8;

typedef struct st_503b60_6 {
    char padding_0[352];
    float field_160;
} st_503b60_6;

typedef struct st_503b60_5 {
    char padding_0[292];
    struct st_503b60_3 *field_124;
    char padding_128[84];
    struct st_503b60_4 *field_17c;
} st_503b60_5;

typedef struct st_503b60_1 {
    unsigned int field_0;
} st_503b60_1;

typedef struct st_503b60_0 {
    char padding_0[76];
    struct st_503b60_1 *field_4c;
} st_503b60_0;

typedef struct st_503b60_2 {
    char padding_0[4];
    struct st_503b60_0 *field_4;
} st_503b60_2;

typedef struct st_503b60_4 {
    char padding_0[32];
    char field_20;
    char padding_21[27];
    unsigned int field_3c;
    char padding_40[16];
    unsigned int field_50;
    unsigned int field_54;
    char padding_58[768];
    unsigned int field_358;
} st_503b60_4;

unsigned int CanUseTrunksSword__12CPlayerMeleeP11CBasePlayer(st_503b60_5 *a0, st_503b60_8 *a1)
{
    st_503b60_4 *v2;  // eax
    unsigned int v0;  // [bp-0x18]
    int v1;  // [bp-0x8]

    v0 = 0;
    if (!a0->field_124->field_764->field_4->field_4c(a0->field_124->field_764))
        return v0;
    v2 = a0->field_17c;
    if (v2->field_358)
        return v0;
    if (v2->field_54 != 2 && !v2->field_3c)
        return v0;
    if (a0->field_17c->field_50 != 2)
    {
        return v0;
    }
    else if (a0->field_17c->field_20 & 1)
    {
        v1 = (*(int *)&a1->field_764->field_4->padding_0[16])(a1->field_764);
        if (a1->field_0->field_160 / (double)v1 >= 0.2)
            return v0;
        v0 = 1;
        return v0;
    }
    else
    {
        return v0;
    }
}

