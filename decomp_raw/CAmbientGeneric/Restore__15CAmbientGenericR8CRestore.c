// Restore__15CAmbientGenericR8CRestore @0x11a7e0 size=84
extern int _15CAmbientGeneric.m_SaveData;

unsigned int Restore__15CAmbientGenericR8CRestore(int a0, int a1)
{
    return (!CBaseEntity::Restore(a0, a1) ? 0 : CRestore::ReadFields(a1, "CAmbientGeneric", a0, &_15CAmbientGeneric.m_SaveData, 4));
}

