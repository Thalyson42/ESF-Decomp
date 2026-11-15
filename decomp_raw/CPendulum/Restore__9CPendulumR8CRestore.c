// Restore__9CPendulumR8CRestore @0x92ae0 size=84
extern int _9CPendulum.m_SaveData;

unsigned int Restore__9CPendulumR8CRestore(int a0, int a1)
{
    return (!CBaseEntity::Restore(a0, a1) ? 0 : CRestore::ReadFields(a1, "CPendulum", a0, &_9CPendulum.m_SaveData, 8));
}

