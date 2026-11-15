// Restore__12CMultiSourceR8CRestore @0x958a0 size=84
extern int _12CMultiSource.m_SaveData;

unsigned int Restore__12CMultiSourceR8CRestore(int a0, int a1)
{
    return (!CBaseEntity::Restore(a0, a1) ? 0 : CRestore::ReadFields(a1, "CMultiSource", a0, &_12CMultiSource.m_SaveData, 4));
}

