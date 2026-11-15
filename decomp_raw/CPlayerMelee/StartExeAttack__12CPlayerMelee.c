// StartExeAttack__12CPlayerMelee @0x103a10 size=71
typedef struct st_503a10_0 {
    char padding_0[260];
    unsigned int field_104;
} st_503a10_0;

void StartExeAttack__12CPlayerMelee(st_503a10_0 *a0)
{
    if (a0->field_104)
    {
        a0->field_104 = 0;
        return;
    }
    sub_48b780(a0);
    sub_488190(a0);
    return;
}

