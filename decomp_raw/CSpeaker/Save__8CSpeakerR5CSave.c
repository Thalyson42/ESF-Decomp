// Save__8CSpeakerR5CSave @0x11e3b0 size=84
extern int _8CSpeaker.m_SaveData;

unsigned int Save__8CSpeakerR5CSave(int a0, int a1)
{
    return (!CBaseEntity::Save(a0, a1) ? 0 : CSave::WriteFields(a1, "CSpeaker", a0, &_8CSpeaker.m_SaveData, 1));
}

