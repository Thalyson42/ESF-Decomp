// StopChargedAttack__12CPlayerMelee @0x109d00 size=154
typedef struct st_509d00_0 {
    char padding_0[140];
    float field_8c;
    char padding_90[96];
    unsigned int field_f0;
    char padding_f4[40];
    unsigned int field_11c;
    char padding_120[16];
    int field_130;
    int field_134;
} st_509d00_0;

unsigned int StopChargedAttack__12CPlayerMelee(st_509d00_0 *a0)
{
    unsigned int v0;  // eax
    double v1;  // mm7
    unsigned int v2;  // eax

    if (a0->field_11c == 3)
    {
        a0->field_11c = 0;
        CPlayerMelee::RemoveAllAnims(a0);
        CPlayerMelee::MeleeHudDisable(a0);
        a0->field_f0 = 0;
        return CPlayerMelee::StopChargedAttack(a0->field_130);
    }
    else if (a0->field_11c == 4)
    {
        a0->field_11c = 0;
        CPlayerMelee::RemoveAllAnims(a0);
        v0 = CPlayerMelee::TotalCmbTime(a0->field_134);
        a0->field_8c = (float)v1;
        return v0;
    }
    else
    {
        return v2;
    }
}

