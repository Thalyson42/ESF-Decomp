// AddAllAttacks__8CSSJGoku @0xc6ef0 size=167
int AddAllAttacks__8CSSJGoku(int *a0)
{
    CBasePlayer::GiveNamedItem(*a0, "weapon_melee");
    CBasePlayer::GiveNamedItem(*a0, "weapon_kiblast");
    CBasePlayer::GiveNamedItem(*a0, "weapon_genericbeam");
    CBasePlayer::GiveNamedItem(*a0, "weapon_kamehameha");
    CBasePlayer::GiveNamedItem(*a0, "weapon_solarflare");
    CBasePlayer::GiveNamedItem(*a0, "weapon_kametorpedo");
    return CBasePlayer::GiveNamedItem(*a0, "weapon_sensu");
}

