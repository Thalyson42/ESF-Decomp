// AddAllAttacks__9CSSJGohan @0xc6950 size=167
int AddAllAttacks__9CSSJGohan(int *a0)
{
    CBasePlayer::GiveNamedItem(*a0, "weapon_melee");
    CBasePlayer::GiveNamedItem(*a0, "weapon_kiblast");
    CBasePlayer::GiveNamedItem(*a0, "weapon_genericbeam");
    CBasePlayer::GiveNamedItem(*a0, "weapon_shieldattack");
    CBasePlayer::GiveNamedItem(*a0, "weapon_kamehameha");
    CBasePlayer::GiveNamedItem(*a0, "weapon_powerbeam");
    return CBasePlayer::GiveNamedItem(*a0, "weapon_sensu");
}

