// Save__10CGunTargetR5CSave @0xedda0 size=84
extern int _10CGunTarget.m_SaveData;

unsigned int Save__10CGunTargetR5CSave(int a0, int a1)
{
    return (!CBaseMonster::Save(a0, a1) ? 0 : CSave::WriteFields(a1, "CGunTarget", a0, &_10CGunTarget.m_SaveData, 1));
}

