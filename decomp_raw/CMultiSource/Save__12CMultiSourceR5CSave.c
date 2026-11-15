// Save__12CMultiSourceR5CSave @0x95840 size=84
extern int _12CMultiSource.m_SaveData;

unsigned int Save__12CMultiSourceR5CSave(int a0, int a1)
{
    return (!CBaseEntity::Save(a0, a1) ? 0 : CSave::WriteFields(a1, "CMultiSource", a0, &_12CMultiSource.m_SaveData, 4));
}

