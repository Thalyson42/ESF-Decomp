// HandleExeDefend__12CPlayerMelee @0x103980 size=139
void HandleExeDefend__12CPlayerMelee(unsigned int *a0)
{
    if (!a0[60] && CPlayerMelee::CanRetaliate(a0) && CPlayerMelee::CanSwitch(a0))
    {
        if (!a0[59])
        {
            a0[59] = 1;
            CPlayerMelee::StartChargedAttackRetaliate(a0);
        }
        a0[60] = CPlayerMelee::SetDirections(a0);
        return;
    }
    if (!a0[59])
        CPlayerMelee::SetBlockingDirections(a0);
    return;
}

