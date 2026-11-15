// Restore__9CBaseDoorR8CRestore @0xaac30 size=84
extern int _9CBaseDoor.m_SaveData;

unsigned int Restore__9CBaseDoorR8CRestore(int a0, int a1)
{
    return (!CBaseToggle::Restore(a0, a1) ? 0 : CRestore::ReadFields(a1, "CBaseDoor", a0, &_9CBaseDoor.m_SaveData, 7));
}

