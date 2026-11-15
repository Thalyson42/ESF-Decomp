// Restore__13CMonsterMakerR8CRestore @0xd31f0 size=84
extern int _13CMonsterMaker.m_SaveData;

unsigned int Restore__13CMonsterMakerR8CRestore(int a0, int a1)
{
    return (!CBaseMonster::Restore(a0, a1) ? 0 : CRestore::ReadFields(a1, "CMonsterMaker", a0, &_13CMonsterMaker.m_SaveData, 7));
}

