// GetNextExe__12CPlayerMelee @0x105310 size=93
typedef struct st_505310_1 {
    char padding_0[380];
    struct st_505310_0 *field_17c;
} st_505310_1;

typedef struct st_505310_0 {
    char padding_0[36];
    int field_24;
    char padding_28[36];
    unsigned int field_4c;
    char padding_50[776];
    unsigned int field_358;
} st_505310_0;

int GetNextExe__12CPlayerMelee(st_505310_1 *a0)
{
    if (a0->field_17c->field_4c == 3 && sub_487f50(a0, a0->field_17c))
        sub_48a480(a0, a0->field_17c, a0->field_17c->field_24);
    return a0->field_17c->field_358;
}

