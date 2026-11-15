// AddAllAttacks__7CVegeta @0x136cd0 size=128
int AddAllAttacks__7CVegeta(int *a0)
{
    CBasePlayer::GiveNamedItem(*a0, "weapon_melee");
    CBasePlayer::GiveNamedItem(*a0, "weapon_renzoku");
    CBasePlayer::GiveNamedItem(*a0, "weapon_genericbeam");
    CBasePlayer::GiveNamedItem(*a0, "weapon_gallitgun");
    return CBasePlayer::GiveNamedItem(*a0, "weapon_sensu");
}

