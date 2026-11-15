// StopAniTrigger__11CBasePlayer11PLAYER_ANIM @0xf5820 size=81
int StopAniTrigger__11CBasePlayer11PLAYER_ANIM(unsigned int *a0, unsigned int a1)
{
    if (a0[478] != a1)
        return a1;
    CBaseAnimating::ResetSequenceInfo(a0);
    a0[478] = 0;
    a0[481] = 0;
    return CBasePlayer::PlayAnimation(a0);
}

