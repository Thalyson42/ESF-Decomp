// Save__10CBreakableR5CSave @0xc1b70 size=84
extern int _10CBreakable.m_SaveData;

unsigned int Save__10CBreakableR5CSave(int a0, int a1)
{
    return (!CBaseEntity::Save(a0, a1) ? 0 : CSave::WriteFields(a1, "CBreakable", a0, &_10CBreakable.m_SaveData, 5));
}

