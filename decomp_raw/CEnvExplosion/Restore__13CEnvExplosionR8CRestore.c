// Restore__13CEnvExplosionR8CRestore @0xb9f00 size=84
extern int _13CEnvExplosion.m_SaveData;

unsigned int Restore__13CEnvExplosionR8CRestore(int a0, int a1)
{
    return (!CBaseMonster::Restore(a0, a1) ? 0 : CRestore::ReadFields(a1, "CEnvExplosion", a0, &_13CEnvExplosion.m_SaveData, 2));
}

