// Spawn__12CCineMonster @0x114ac0 size=161
typedef struct st_514ac0_1 {
    char padding_0[260];
    float field_104;
    char padding_108[4];
    unsigned int field_10c;
    char padding_110[144];
    char field_1a0;
    char padding_1a1[43];
    unsigned int field_1cc;
} st_514ac0_1;

typedef struct st_514ac0_0 {
    char padding_0[260];
    unsigned int field_104;
    char padding_108[4];
    unsigned int field_10c;
    char padding_110[144];
    char field_1a0;
    char padding_1a1[43];
    unsigned int field_1cc;
} st_514ac0_0;

typedef struct st_514ac0_2 {
    struct st_514ac0_1 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[660];
    unsigned int field_2a8;
    char padding_2ac[28];
    float field_2c8;
    char padding_2cc[12];
    unsigned int field_2d8;
} st_514ac0_2;

typedef struct st_514ac0_3 {
    float field_0;
} st_514ac0_3;

extern char CineThink__12CCineMonster;
extern st_514ac0_3 *gpGlobals;

st_514ac0_0 * Spawn__12CCineMonster(st_514ac0_2 *a0)
{
    st_514ac0_1 *v1;  // eax

    a0->field_0->field_10c = 0;
    if (!a0->field_0->field_1cc || a0->field_2a8)
    {
        a0->field_c = _INSERT(a0->field_0, 0, 0) | 0xffff0000;
        a0->field_10 = &CineThink__12CCineMonster;
        a0->field_0->field_104 = (float)(1.0 + *(float *)gpGlobals);
        if (a0->field_0->field_1cc)
            a0->field_2c8 = (float)(1000000.0 + *(float *)gpGlobals);
    }
    v1 = a0->field_0;
    if (!(v1->field_1a0 & 32))
    {
        a0->field_2d8 = 1;
        return v1;
    }
    a0->field_2d8 = 0;
    return v1;
}

