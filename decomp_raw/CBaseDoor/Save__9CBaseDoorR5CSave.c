// Save__9CBaseDoorR5CSave @0xaabd0 size=84
extern int _9CBaseDoor.m_SaveData;

unsigned int Save__9CBaseDoorR5CSave(int a0, int a1)
{
    return (!CBaseToggle::Save(a0, a1) ? 0 : CSave::WriteFields(a1, "CBaseDoor", a0, &_9CBaseDoor.m_SaveData, 7));
}

