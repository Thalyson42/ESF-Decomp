// AddAllAttacks__8CKrillin @0xcd680 size=185
int AddAllAttacks__8CKrillin(int *a0)
{
    CBasePlayer::GiveNamedItem(*a0, "weapon_melee");
    CBasePlayer::GiveNamedItem(*a0, "weapon_kiblast");
    CBasePlayer::GiveNamedItem(*a0, "weapon_genericbeam");
    CBasePlayer::GiveNamedItem(*a0, "weapon_kamehameha");
    CBasePlayer::GiveNamedItem(*a0, "weapon_destructodisc");
    CBasePlayer::GiveNamedItem(*a0, "weapon_solarflare");
    CBasePlayer::GiveNamedItem(*a0, "weapon_scatterbeam");
    return CBasePlayer::GiveNamedItem(*a0, "weapon_sensu");
}

