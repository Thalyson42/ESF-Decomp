// Save__9CPendulumR5CSave @0x92a80 size=84
extern int _9CPendulum.m_SaveData;

unsigned int Save__9CPendulumR5CSave(int a0, int a1)
{
    return (!CBaseEntity::Save(a0, a1) ? 0 : CSave::WriteFields(a1, "CPendulum", a0, &_9CPendulum.m_SaveData, 8));
}

