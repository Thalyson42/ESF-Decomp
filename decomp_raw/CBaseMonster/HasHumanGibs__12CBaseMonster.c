// HasHumanGibs__12CBaseMonster @0xa45b0 size=73
typedef struct st_4a45b0_1 {
    unsigned int field_0;
} st_4a45b0_1;

typedef struct st_4a45b0_0 {
    char padding_0[40];
    struct st_4a45b0_1 *field_28;
} st_4a45b0_0;

typedef struct st_4a45b0_2 {
    char padding_0[96];
    struct st_4a45b0_0 *field_60;
} st_4a45b0_2;

unsigned int HasHumanGibs__12CBaseMonster(st_4a45b0_2 *a0)
{
    unsigned int v0;  // eax

    v0 = a0->field_60->field_28(a0);
    if (v0 != 4 && v0 != 11 && v0 != 3 && v0 != 2)
        return 0;
    return 1;
}

