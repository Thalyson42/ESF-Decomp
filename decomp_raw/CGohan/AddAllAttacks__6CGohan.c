// AddAllAttacks__6CGohan @0xc67f0 size=146
int AddAllAttacks__6CGohan(int *a0)
{
    CBasePlayer::GiveNamedItem(*a0, "weapon_melee");
    CBasePlayer::GiveNamedItem(*a0, "weapon_kiblast");
    CBasePlayer::GiveNamedItem(*a0, "weapon_genericbeam");
    CBasePlayer::GiveNamedItem(*a0, "weapon_shieldattack");
    CBasePlayer::GiveNamedItem(*a0, "weapon_powerbeam");
    return CBasePlayer::GiveNamedItem(*a0, "weapon_sensu");
}

