// Restore__11CGibShooterR8CRestore @0xb3e40 size=84
extern int _11CGibShooter.m_SaveData;

unsigned int Restore__11CGibShooterR8CRestore(int a0, int a1)
{
    return (!CBaseDelay::Restore(a0, a1) ? 0 : CRestore::ReadFields(a1, "CGibShooter", a0, &_11CGibShooter.m_SaveData, 7));
}

