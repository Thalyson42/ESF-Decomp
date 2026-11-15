// Save__12CTalkMonsterR5CSave @0x124b50 size=84
extern int _12CTalkMonster.m_SaveData;

unsigned int Save__12CTalkMonsterR5CSave(int a0, int a1)
{
    return (!sub_48adc0(a0, a1) ? 0 : sub_48db60(a1, "CTalkMonster", a0, &_12CTalkMonster.m_SaveData, 8));
}

