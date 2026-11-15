// Save__12CCineMonsterR5CSave @0x1149a0 size=84
extern int _12CCineMonster.m_SaveData;

unsigned int Save__12CCineMonsterR5CSave(int a0, int a1)
{
    return (!CBaseMonster::Save(a0, a1) ? 0 : CSave::WriteFields(a1, "CCineMonster", a0, &_12CCineMonster.m_SaveData, 13));
}

