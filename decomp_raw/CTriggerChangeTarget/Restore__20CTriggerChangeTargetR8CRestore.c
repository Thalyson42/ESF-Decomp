// Restore__20CTriggerChangeTargetR8CRestore @0x12f130 size=84
extern int _20CTriggerChangeTarget.m_SaveData;

unsigned int Restore__20CTriggerChangeTargetR8CRestore(int a0, int a1)
{
    return (!CBaseDelay::Restore(a0, a1) ? 0 : CRestore::ReadFields(a1, "CTriggerChangeTarget", a0, &_20CTriggerChangeTarget.m_SaveData, 1));
}

