// Restore__10CBaseDelayR8CRestore @0x1222d0 size=84
extern int _10CBaseDelay.m_SaveData;

unsigned int Restore__10CBaseDelayR8CRestore(int a0, int a1)
{
    return (!CBaseEntity::Restore(a0, a1) ? 0 : CRestore::ReadFields(a1, "CBaseDelay", a0, &_10CBaseDelay.m_SaveData, 2));
}

