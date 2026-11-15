// Restore__12CChangeLevelR8CRestore @0x12d500 size=84
extern int _12CChangeLevel.m_SaveData;

unsigned int Restore__12CChangeLevelR8CRestore(int a0, int a1)
{
    return (!CBaseToggle::Restore(a0, a1) ? 0 : CRestore::ReadFields(a1, "CChangeLevel", a0, &_12CChangeLevel.m_SaveData, 4));
}

