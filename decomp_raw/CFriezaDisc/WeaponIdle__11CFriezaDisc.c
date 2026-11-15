// WeaponIdle__11CFriezaDisc @0xc0f70 size=62
typedef struct st_4c0f70_0 {
    char padding_0[468];
    unsigned int field_1d4;
} st_4c0f70_0;

void WeaponIdle__11CFriezaDisc(st_4c0f70_0 *a0)
{
    if (!a0->field_1d4)
        CChargedAttack::WeaponIdle(a0);
    CFriezaDisc::HandleDiscStatus(a0);
    return;
}

