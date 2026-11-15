// BlocksAttack__12CPlayerMeleeP11CBasePlayer @0x10c0c0 size=76
typedef struct st_50c0c0_1 {
    char padding_0[292];
    int field_124;
} st_50c0c0_1;

typedef struct st_50c0c0_0 {
    char padding_0[812];
    unsigned int field_32c;
} st_50c0c0_0;

unsigned int BlocksAttack__12CPlayerMeleeP11CBasePlayer(st_50c0c0_1 *a0, st_50c0c0_0 *a1)
{
    if (a1->field_32c && CPlayerMelee::GetEnemyPrepunch(&a1[1].padding_0[80], a0->field_124))
        return 1;
    return 0;
}

