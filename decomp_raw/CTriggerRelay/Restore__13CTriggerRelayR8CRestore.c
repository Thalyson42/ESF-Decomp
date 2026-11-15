// Restore__13CTriggerRelayR8CRestore @0x12ae10 size=84
extern int _13CTriggerRelay.m_SaveData;

unsigned int Restore__13CTriggerRelayR8CRestore(int a0, int a1)
{
    return (!CBaseDelay::Restore(a0, a1) ? 0 : CRestore::ReadFields(a1, "CTriggerRelay", a0, &_13CTriggerRelay.m_SaveData, 1));
}

