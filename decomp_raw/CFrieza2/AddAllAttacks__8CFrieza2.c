// AddAllAttacks__8CFrieza2 @0xbfa20 size=185
int AddAllAttacks__8CFrieza2(int *a0)
{
    CBasePlayer::GiveNamedItem(*a0, "weapon_melee");
    CBasePlayer::GiveNamedItem(*a0, "weapon_kiblast");
    CBasePlayer::GiveNamedItem(*a0, "weapon_genericbeam");
    CBasePlayer::GiveNamedItem(*a0, "weapon_fingerlaser");
    CBasePlayer::GiveNamedItem(*a0, "weapon_friezadisc");
    CBasePlayer::GiveNamedItem(*a0, "weapon_deathball");
    CBasePlayer::GiveNamedItem(*a0, "weapon_telekinesis");
    return CBasePlayer::GiveNamedItem(*a0, "weapon_sensu");
}

