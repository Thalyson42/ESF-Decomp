// Restore__12CTalkMonsterR8CRestore @0x124bb0 size=84
extern int _12CTalkMonster.m_SaveData;

unsigned int Restore__12CTalkMonsterR8CRestore(int a0, int a1)
{
    return (!sub_48a3e0(a0, a1) ? 0 : sub_48a980(a1, "CTalkMonster", a0, &_12CTalkMonster.m_SaveData, 8));
}

