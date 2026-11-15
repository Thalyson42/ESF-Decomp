// Save__20CTriggerChangeTargetR5CSave @0x12f0d0 size=84
extern int _20CTriggerChangeTarget.m_SaveData;

unsigned int Save__20CTriggerChangeTargetR5CSave(int a0, int a1)
{
    return (!CBaseDelay::Save(a0, a1) ? 0 : CSave::WriteFields(a1, "CTriggerChangeTarget", a0, &_20CTriggerChangeTarget.m_SaveData, 1));
}

