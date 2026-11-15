// Save__13CMultiManagerR5CSave @0x12b080 size=84
extern int _13CMultiManager.m_SaveData;

unsigned int Save__13CMultiManagerR5CSave(int a0, int a1)
{
    return (!CBaseToggle::Save(a0, a1) ? 0 : CSave::WriteFields(a1, "CMultiManager", a0, &_13CMultiManager.m_SaveData, 5));
}

