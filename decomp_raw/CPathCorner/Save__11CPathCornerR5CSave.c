// Save__11CPathCornerR5CSave @0xe6990 size=84
extern int _11CPathCorner.m_SaveData;

unsigned int Save__11CPathCornerR5CSave(int a0, int a1)
{
    return (!CBaseEntity::Save(a0, a1) ? 0 : CSave::WriteFields(a1, "CPathCorner", a0, &_11CPathCorner.m_SaveData, 1));
}

