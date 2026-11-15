// Restore__10CGunTargetR8CRestore @0xede00 size=84
extern int _10CGunTarget.m_SaveData;

unsigned int Restore__10CGunTargetR8CRestore(int a0, int a1)
{
    return (!CBaseMonster::Restore(a0, a1) ? 0 : CRestore::ReadFields(a1, "CGunTarget", a0, &_10CGunTarget.m_SaveData, 1));
}

