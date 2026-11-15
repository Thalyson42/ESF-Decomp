// Save__12CAutoTriggerR5CSave @0x12aa10 size=84
extern int _12CAutoTrigger.m_SaveData;

unsigned int Save__12CAutoTriggerR5CSave(int a0, int a1)
{
    return (!CBaseDelay::Save(a0, a1) ? 0 : CSave::WriteFields(a1, "CAutoTrigger", a0, &_12CAutoTrigger.m_SaveData, 2));
}

