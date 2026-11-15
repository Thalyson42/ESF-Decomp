// HasAlienGibs__12CBaseMonster @0xa4600 size=80
typedef struct st_4a4600_1 {
    unsigned int field_0;
} st_4a4600_1;

typedef struct st_4a4600_0 {
    char padding_0[40];
    struct st_4a4600_1 *field_28;
} st_4a4600_0;

typedef struct st_4a4600_2 {
    char padding_0[96];
    struct st_4a4600_0 *field_60;
} st_4a4600_2;

unsigned int HasAlienGibs__12CBaseMonster(st_4a4600_2 *a0)
{
    unsigned int v0;  // eax

    v0 = a0->field_60->field_28(a0);
    if (v0 != 5 && v0 != 7 && v0 != 6 && v0 != 10 && v0 != 9 && v0 != 8)
        return 0;
    return 1;
}

