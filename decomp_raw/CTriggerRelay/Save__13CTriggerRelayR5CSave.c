// Save__13CTriggerRelayR5CSave @0x12adb0 size=84
extern int _13CTriggerRelay.m_SaveData;

unsigned int Save__13CTriggerRelayR5CSave(int a0, int a1)
{
    return (!CBaseDelay::Save(a0, a1) ? 0 : CSave::WriteFields(a1, "CTriggerRelay", a0, &_13CTriggerRelay.m_SaveData, 1));
}

