// AddAllAttacks__7CTrunks @0x130c40 size=128
int AddAllAttacks__7CTrunks(int *a0)
{
    CBasePlayer::GiveNamedItem(*a0, "weapon_sword");
    CBasePlayer::GiveNamedItem(*a0, "weapon_kiblast");
    CBasePlayer::GiveNamedItem(*a0, "weapon_genericbeam");
    CBasePlayer::GiveNamedItem(*a0, "weapon_burningattack");
    return CBasePlayer::GiveNamedItem(*a0, "weapon_sensu");
}

