// AddAllAttacks__8CPiccolo @0xe7aa0 size=185
int AddAllAttacks__8CPiccolo(int *a0)
{
    CBasePlayer::GiveNamedItem(*a0, "weapon_melee");
    CBasePlayer::GiveNamedItem(*a0, "weapon_kiblast");
    CBasePlayer::GiveNamedItem(*a0, "weapon_scattershot");
    CBasePlayer::GiveNamedItem(*a0, "weapon_genericbeam");
    CBasePlayer::GiveNamedItem(*a0, "weapon_eyelaser");
    CBasePlayer::GiveNamedItem(*a0, "weapon_specialbeamcannon");
    CBasePlayer::GiveNamedItem(*a0, "weapon_masenko");
    return CBasePlayer::GiveNamedItem(*a0, "weapon_sensu");
}

