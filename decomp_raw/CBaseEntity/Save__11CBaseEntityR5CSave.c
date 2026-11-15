// Save__11CBaseEntityR5CSave @0x9d380 size=100
extern int _11CBaseEntity.m_SaveData;

unsigned int Save__11CBaseEntityR5CSave(int *a0, int a1)
{
    return (!CSave::WriteEntVars(a1, "ENTVARS", *a0) ? 0 : CSave::WriteFields(a1, "BASE", a0, &_11CBaseEntity.m_SaveData, 5));
}

