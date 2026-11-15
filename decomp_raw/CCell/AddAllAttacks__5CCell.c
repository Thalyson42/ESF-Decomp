// AddAllAttacks__5CCell @0x9e5d0 size=185
int AddAllAttacks__5CCell(int *a0)
{
    CBasePlayer::GiveNamedItem(*a0, "weapon_melee");
    CBasePlayer::GiveNamedItem(*a0, "weapon_kiblast");
    CBasePlayer::GiveNamedItem(*a0, "weapon_genericbeam");
    CBasePlayer::GiveNamedItem(*a0, "weapon_friezadisc");
    CBasePlayer::GiveNamedItem(*a0, "weapon_kamehameha");
    CBasePlayer::GiveNamedItem(*a0, "weapon_specialbeamcannon");
    CBasePlayer::GiveNamedItem(*a0, "weapon_solarflare");
    return CBasePlayer::GiveNamedItem(*a0, "weapon_sensu");
}

