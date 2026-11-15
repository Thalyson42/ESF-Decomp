// Restore__12CTalkMonsterR8CRestore @0x124bb0 size=84
extern int _12CTalkMonster.m_SaveData;

unsigned int Restore__12CTalkMonsterR8CRestore(int a0, int a1)
{
    return (!CBaseMonster::Restore(a0, a1) ? 0 : CRestore::ReadFields(a1, "CTalkMonster", a0, &_12CTalkMonster.m_SaveData, 8));
}

