// SwatAway__16CExplodingAttackP11CBasePlayeri @0xbc310 size=66
typedef struct st_4bc310_1 {
    unsigned int field_0;
} st_4bc310_1;

typedef struct st_4bc310_0 {
    char padding_0[520];
    struct st_4bc310_1 *field_208;
} st_4bc310_0;

typedef struct st_4bc310_2 {
    char padding_0[96];
    struct st_4bc310_0 *field_60;
} st_4bc310_2;

int SwatAway__16CExplodingAttackP11CBasePlayeri(st_4bc310_2 *a0, int a1, int a2)
{
    a0->field_60->field_208(a0);
    return sub_48d740(a0, a1, a2);
}

