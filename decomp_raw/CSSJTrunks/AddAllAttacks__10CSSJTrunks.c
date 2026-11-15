// AddAllAttacks__10CSSJTrunks @0x130d80 size=146
int AddAllAttacks__10CSSJTrunks(int *a0)
{
    CBasePlayer::GiveNamedItem(*a0, "weapon_sword");
    CBasePlayer::GiveNamedItem(*a0, "weapon_kiblast");
    CBasePlayer::GiveNamedItem(*a0, "weapon_genericbeam");
    CBasePlayer::GiveNamedItem(*a0, "weapon_burningattack");
    CBasePlayer::GiveNamedItem(*a0, "weapon_finishingbuster");
    return CBasePlayer::GiveNamedItem(*a0, "weapon_sensu");
}

