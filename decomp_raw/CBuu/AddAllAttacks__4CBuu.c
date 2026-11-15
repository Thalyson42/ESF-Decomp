// AddAllAttacks__4CBuu @0x99700 size=146
int AddAllAttacks__4CBuu(int *a0)
{
    CBasePlayer::GiveNamedItem(*a0, "weapon_melee");
    CBasePlayer::GiveNamedItem(*a0, "weapon_kiblast");
    CBasePlayer::GiveNamedItem(*a0, "weapon_genericbeam");
    CBasePlayer::GiveNamedItem(*a0, "weapon_candy");
    CBasePlayer::GiveNamedItem(*a0, "weapon_mouthblast");
    return CBasePlayer::GiveNamedItem(*a0, "weapon_regeneration");
}

