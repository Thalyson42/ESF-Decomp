// Save__11CBaseButtonR5CSave @0x95ea0 size=84
extern int _11CBaseButton.m_SaveData;

unsigned int Save__11CBaseButtonR5CSave(int a0, int a1)
{
    return (!CBaseToggle::Save(a0, a1) ? 0 : CSave::WriteFields(a1, "CBaseButton", a0, &_11CBaseButton.m_SaveData, 8));
}

