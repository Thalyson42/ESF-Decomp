// ScheduleFromName__12CTalkMonsterPCc @0x124c10 size=70
extern int _12CTalkMonster.m_scheduleList;

unsigned int ScheduleFromName__12CTalkMonsterPCc(int a0, int a1)
{
    unsigned int v3;  // eax
    int v0;  // [bp-0x1c]
    int v1;  // [bp-0x18]
    int v2;  // [bp-0x14]

    v3 = CBaseMonster::ScheduleInList(a0, a1, &_12CTalkMonster.m_scheduleList, 11, v0, v1, v2);
    if (v3)
        return v3;
    return CBaseMonster::ScheduleFromName(a0, a1);
}

