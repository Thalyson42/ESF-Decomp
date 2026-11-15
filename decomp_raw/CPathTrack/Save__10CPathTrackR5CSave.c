// Save__10CPathTrackR5CSave @0xe6ba0 size=84
extern int _10CPathTrack.m_SaveData;

unsigned int Save__10CPathTrackR5CSave(int a0, int a1)
{
    return (!CBaseEntity::Save(a0, a1) ? 0 : CSave::WriteFields(a1, "CPathTrack", a0, &_10CPathTrack.m_SaveData, 5));
}

