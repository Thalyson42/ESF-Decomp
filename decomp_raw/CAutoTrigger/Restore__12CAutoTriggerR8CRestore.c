// Restore__12CAutoTriggerR8CRestore @0x12aa70 size=84
extern int _12CAutoTrigger.m_SaveData;

unsigned int Restore__12CAutoTriggerR8CRestore(int a0, int a1)
{
    return (!CBaseDelay::Restore(a0, a1) ? 0 : CRestore::ReadFields(a1, "CAutoTrigger", a0, &_12CAutoTrigger.m_SaveData, 2));
}

