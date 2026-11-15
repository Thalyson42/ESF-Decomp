// Restore__10CBreakableR8CRestore @0xc1bd0 size=84
extern int _10CBreakable.m_SaveData;

unsigned int Restore__10CBreakableR8CRestore(int a0, int a1)
{
    return (!CBaseEntity::Restore(a0, a1) ? 0 : CRestore::ReadFields(a1, "CBreakable", a0, &_10CBreakable.m_SaveData, 5));
}

