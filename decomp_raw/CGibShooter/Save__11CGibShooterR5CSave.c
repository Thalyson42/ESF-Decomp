// Save__11CGibShooterR5CSave @0xb3de0 size=84
extern int _11CGibShooter.m_SaveData;

unsigned int Save__11CGibShooterR5CSave(int a0, int a1)
{
    return (!CBaseDelay::Save(a0, a1) ? 0 : CSave::WriteFields(a1, "CGibShooter", a0, &_11CGibShooter.m_SaveData, 7));
}

