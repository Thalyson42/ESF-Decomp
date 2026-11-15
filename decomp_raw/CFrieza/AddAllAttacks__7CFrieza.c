// AddAllAttacks__7CFrieza @0xbf8b0 size=167
int AddAllAttacks__7CFrieza(int *a0)
{
    CBasePlayer::GiveNamedItem(*a0, "weapon_melee");
    CBasePlayer::GiveNamedItem(*a0, "weapon_kiblast");
    CBasePlayer::GiveNamedItem(*a0, "weapon_genericbeam");
    CBasePlayer::GiveNamedItem(*a0, "weapon_fingerlaser");
    CBasePlayer::GiveNamedItem(*a0, "weapon_friezadisc");
    CBasePlayer::GiveNamedItem(*a0, "weapon_telekinesis");
    return CBasePlayer::GiveNamedItem(*a0, "weapon_sensu");
}

