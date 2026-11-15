// Restore__11CPathCornerR8CRestore @0xe69f0 size=84
extern int _11CPathCorner.m_SaveData;

unsigned int Restore__11CPathCornerR8CRestore(int a0, int a1)
{
    return (!CBaseEntity::Restore(a0, a1) ? 0 : CRestore::ReadFields(a1, "CPathCorner", a0, &_11CPathCorner.m_SaveData, 1));
}

