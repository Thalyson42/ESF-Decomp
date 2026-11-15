// Save__10CEnvGlobalR5CSave @0x95340 size=84
extern int _10CEnvGlobal.m_SaveData;

unsigned int Save__10CEnvGlobalR5CSave(int a0, int a1)
{
    return (!CBaseEntity::Save(a0, a1) ? 0 : CSave::WriteFields(a1, "CEnvGlobal", a0, &_10CEnvGlobal.m_SaveData, 3));
}

