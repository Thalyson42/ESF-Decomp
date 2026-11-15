// Restore__17CBasePlayerWeaponR8CRestore @0x137dd0 size=84
extern int _17CBasePlayerWeapon.m_SaveData;

unsigned int Restore__17CBasePlayerWeaponR8CRestore(int a0, int a1)
{
    return (!CBasePlayerItem::Restore(a0, a1) ? 0 : CRestore::ReadFields(a1, "CBasePlayerWeapon", a0, &_17CBasePlayerWeapon.m_SaveData, 7));
}

