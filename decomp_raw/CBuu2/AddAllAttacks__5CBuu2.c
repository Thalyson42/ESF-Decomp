// AddAllAttacks__5CBuu2 @0x99860 size=146
int AddAllAttacks__5CBuu2(int *a0)
{
    CBasePlayer::GiveNamedItem(*a0, "weapon_melee");
    CBasePlayer::GiveNamedItem(*a0, "weapon_kiblast");
    CBasePlayer::GiveNamedItem(*a0, "weapon_genericbeam");
    CBasePlayer::GiveNamedItem(*a0, "weapon_candy");
    CBasePlayer::GiveNamedItem(*a0, "weapon_mouthblast");
    return CBasePlayer::GiveNamedItem(*a0, "weapon_regeneration");
}

