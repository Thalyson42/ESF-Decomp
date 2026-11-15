// UseAttackerMoves__12CPlayerMelee @0x106180 size=64
typedef struct st_506180_0 {
    char padding_0[236];
    unsigned int field_ec;
} st_506180_0;

typedef struct st_506180_1 {
    char padding_0[120];
    unsigned int field_78;
    unsigned int field_7c;
    char padding_80[108];
    unsigned int field_ec;
    char padding_f0[64];
    struct st_506180_0 *field_130;
    char padding_134[4];
    unsigned int field_138;
} st_506180_1;

unsigned int UseAttackerMoves__12CPlayerMelee(st_506180_1 *a0)
{
    if (a0->field_7c)
        return 0;
    if (a0->field_78 || a0->field_ec)
        return 1;
    if (!a0->field_138)
    {
        return 0;
    }
    else if (a0->field_130->field_ec)
    {
        return 0;
    }
    return 1;
}

