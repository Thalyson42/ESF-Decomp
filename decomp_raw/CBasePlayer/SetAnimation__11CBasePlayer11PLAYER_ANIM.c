// SetAnimation__11CBasePlayer11PLAYER_ANIM @0xf57b0 size=99
int SetAnimation__11CBasePlayer11PLAYER_ANIM(unsigned int *a0, unsigned int a1)
{
    CBaseAnimating::ResetSequenceInfo(a0);
    if (a0[478] != 9 && a0[478] != 7 && a0[478] != 8)
        a0[481] = 0;
    a0[478] = a1;
    return CBasePlayer::PlayAnimation(a0);
}

