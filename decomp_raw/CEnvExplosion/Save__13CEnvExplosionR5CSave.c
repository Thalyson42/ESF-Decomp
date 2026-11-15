// Save__13CEnvExplosionR5CSave @0xb9ea0 size=84
extern int _13CEnvExplosion.m_SaveData;

unsigned int Save__13CEnvExplosionR5CSave(int a0, int a1)
{
    return (!CBaseMonster::Save(a0, a1) ? 0 : CSave::WriteFields(a1, "CEnvExplosion", a0, &_13CEnvExplosion.m_SaveData, 2));
}

