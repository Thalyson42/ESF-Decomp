// Remove__11CDiscAttack @0xaab20 size=78
typedef struct st_4aab20_0 {
    char padding_0[520];
    int field_208;
} st_4aab20_0;

int Remove__11CDiscAttack(st_4aab20_0 **a0)
{
    sub_487f90(a0);
    return sub_489390(*a0->field_208, 1, "weapons/rotating.wav", 0, 0, 32, 100);
}

