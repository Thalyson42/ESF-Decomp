// Save__15CAmbientGenericR5CSave @0x11a780 size=84
extern int _15CAmbientGeneric.m_SaveData;

unsigned int Save__15CAmbientGenericR5CSave(int a0, int a1)
{
    return (!CBaseEntity::Save(a0, a1) ? 0 : CSave::WriteFields(a1, "CAmbientGeneric", a0, &_15CAmbientGeneric.m_SaveData, 4));
}

