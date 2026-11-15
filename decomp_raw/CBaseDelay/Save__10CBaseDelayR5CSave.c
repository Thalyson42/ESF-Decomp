// Save__10CBaseDelayR5CSave @0x122270 size=84
extern int _10CBaseDelay.m_SaveData;

unsigned int Save__10CBaseDelayR5CSave(int a0, int a1)
{
    return (!CBaseEntity::Save(a0, a1) ? 0 : CSave::WriteFields(a1, "CBaseDelay", a0, &_10CBaseDelay.m_SaveData, 2));
}

