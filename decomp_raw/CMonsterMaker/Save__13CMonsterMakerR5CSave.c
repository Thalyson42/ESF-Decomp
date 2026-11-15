// Save__13CMonsterMakerR5CSave @0xd3190 size=84
extern int _13CMonsterMaker.m_SaveData;

unsigned int Save__13CMonsterMakerR5CSave(int a0, int a1)
{
    return (!CBaseMonster::Save(a0, a1) ? 0 : CSave::WriteFields(a1, "CMonsterMaker", a0, &_13CMonsterMaker.m_SaveData, 7));
}

