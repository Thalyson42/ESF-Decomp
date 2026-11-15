// Restore__13CMultiManagerR8CRestore @0x12b0e0 size=84
extern int _13CMultiManager.m_SaveData;

unsigned int Restore__13CMultiManagerR8CRestore(int a0, int a1)
{
    return (!CBaseToggle::Restore(a0, a1) ? 0 : CRestore::ReadFields(a1, "CMultiManager", a0, &_13CMultiManager.m_SaveData, 5));
}

