// Save__12CChangeLevelR5CSave @0x12d4a0 size=84
extern int _12CChangeLevel.m_SaveData;

unsigned int Save__12CChangeLevelR5CSave(int a0, int a1)
{
    return (!CBaseToggle::Save(a0, a1) ? 0 : CSave::WriteFields(a1, "CChangeLevel", a0, &_12CChangeLevel.m_SaveData, 4));
}

