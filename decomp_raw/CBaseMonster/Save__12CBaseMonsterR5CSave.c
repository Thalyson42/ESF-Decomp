// Save__12CBaseMonsterR5CSave @0xd3b00 size=84
extern int _12CBaseMonster.m_SaveData;

unsigned int Save__12CBaseMonsterR5CSave(int a0, int a1)
{
    return (!CBaseToggle::Save(a0, a1) ? 0 : CSave::WriteFields(a1, "CBaseMonster", a0, &_12CBaseMonster.m_SaveData, 37));
}

