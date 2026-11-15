// Restore__8CSpeakerR8CRestore @0x11e410 size=84
extern int _8CSpeaker.m_SaveData;

unsigned int Restore__8CSpeakerR8CRestore(int a0, int a1)
{
    return (!CBaseEntity::Restore(a0, a1) ? 0 : CRestore::ReadFields(a1, "CSpeaker", a0, &_8CSpeaker.m_SaveData, 1));
}

