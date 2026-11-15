// FCanCheckAttacks__12CBaseMonster @0xd5360 size=38
typedef struct st_4d5360_0 {
    char padding_0[260];
    char field_104;
} st_4d5360_0;

unsigned int FCanCheckAttacks__12CBaseMonster(st_4d5360_0 *a0)
{
    if (a0->field_104 & 16 && !(a0->field_104 & 128))
        return 1;
    return 0;
}

