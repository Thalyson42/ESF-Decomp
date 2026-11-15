// Save__6CLightR5CSave @0xcdb30 size=84
extern int _6CLight.m_SaveData;

unsigned int Save__6CLightR5CSave(int a0, int a1)
{
    return (!CBaseEntity::Save(a0, a1) ? 0 : CSave::WriteFields(a1, "CLight", a0, &_6CLight.m_SaveData, 2));
}

