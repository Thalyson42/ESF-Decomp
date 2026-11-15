// AddAllAttacks__5CGoku @0xc6d70 size=185
int AddAllAttacks__5CGoku(int *a0)
{
    CBasePlayer::GiveNamedItem(*a0, "weapon_melee");
    CBasePlayer::GiveNamedItem(*a0, "weapon_kiblast");
    CBasePlayer::GiveNamedItem(*a0, "weapon_genericbeam");
    CBasePlayer::GiveNamedItem(*a0, "weapon_kamehameha");
    CBasePlayer::GiveNamedItem(*a0, "weapon_spiritbomb");
    CBasePlayer::GiveNamedItem(*a0, "weapon_solarflare");
    CBasePlayer::GiveNamedItem(*a0, "weapon_kametorpedo");
    return CBasePlayer::GiveNamedItem(*a0, "weapon_sensu");
}

