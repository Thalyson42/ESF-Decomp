// CanMeleeKickPlayer__4CBotP11CBasePlayer @0x159a80 size=79
char CanMeleeKickPlayer__4CBotP11CBasePlayer(int a0, int a1)
{
    char v0;  // [bp-0x5]

    v0 = 0;
    if ((char)EntIsInFieldOfView(a0, a1) && CBasePlayer::CanMelee(a1, a0))
        return v0;
    v0 = 1;
    return v0;
}

