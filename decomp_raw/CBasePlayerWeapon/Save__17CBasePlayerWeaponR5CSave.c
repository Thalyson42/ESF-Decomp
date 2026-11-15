// Save__17CBasePlayerWeaponR5CSave @0x137d70 size=84
extern int _17CBasePlayerWeapon.m_SaveData;

unsigned int Save__17CBasePlayerWeaponR5CSave(int a0, int a1)
{
    return (!CBasePlayerItem::Save(a0, a1) ? 0 : CSave::WriteFields(a1, "CBasePlayerWeapon", a0, &_17CBasePlayerWeapon.m_SaveData, 7));
}

