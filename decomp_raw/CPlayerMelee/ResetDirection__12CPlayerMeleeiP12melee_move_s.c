// ResetDirection__12CPlayerMeleeiP12melee_move_s @0x105b30 size=105
typedef struct st_505b30_0 {
    char padding_0[4];
    char field_4;
    char field_5;
    char padding_6[10];
    unsigned int field_10;
} st_505b30_0;

unsigned int ResetDirection__12CPlayerMeleeiP12melee_move_s(int a0, unsigned short a1, st_505b30_0 *a2)
{
    if (!a2->field_10)
    {
        if (a2->field_4 & 1)
        {
            if (*(char *)((void*)&a1 + 1) & 8)
            {
                a2->field_4 = a2->field_4 & 254;
                a2->field_5 = a2->field_5 | 8;
                CPlayerMelee::MeleeHudSwitchAtk(a0, a2);
                return 1;
            }
        }
        else
        {
            if (a2->field_5 & 8 && !(*(char *)((void*)&a1 + 1) & 8) && a1 & 1)
            {
                a2->field_5 = a2->field_5 & 247;
                a2->field_4 = a2->field_4 | 1;
                CPlayerMelee::MeleeHudSwitchAtk(a0, a2);
                return 1;
            }
        }
    }
    return 0;
}

