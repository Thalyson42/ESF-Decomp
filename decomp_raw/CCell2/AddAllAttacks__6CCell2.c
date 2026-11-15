// AddAllAttacks__6CCell2 @0x9e690 size=185
int AddAllAttacks__6CCell2(int *a0)
{
    CBasePlayer::GiveNamedItem(*a0, "weapon_melee");
    CBasePlayer::GiveNamedItem(*a0, "weapon_kiblast");
    CBasePlayer::GiveNamedItem(*a0, "weapon_genericbeam");
    CBasePlayer::GiveNamedItem(*a0, "weapon_friezadisc");
    CBasePlayer::GiveNamedItem(*a0, "weapon_gallitgun");
    CBasePlayer::GiveNamedItem(*a0, "weapon_specialbeamcannon");
    CBasePlayer::GiveNamedItem(*a0, "weapon_solarflare");
    return CBasePlayer::GiveNamedItem(*a0, "weapon_sensu");
}

