// Restore__12CCineMonsterR8CRestore @0x114a00 size=84
extern int _12CCineMonster.m_SaveData;

unsigned int Restore__12CCineMonsterR8CRestore(int a0, int a1)
{
    return (!CBaseMonster::Restore(a0, a1) ? 0 : CRestore::ReadFields(a1, "CCineMonster", a0, &_12CCineMonster.m_SaveData, 13));
}

