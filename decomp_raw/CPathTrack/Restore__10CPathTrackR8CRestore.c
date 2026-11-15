// Restore__10CPathTrackR8CRestore @0xe6c00 size=84
extern int _10CPathTrack.m_SaveData;

unsigned int Restore__10CPathTrackR8CRestore(int a0, int a1)
{
    return (!CBaseEntity::Restore(a0, a1) ? 0 : CRestore::ReadFields(a1, "CPathTrack", a0, &_10CPathTrack.m_SaveData, 5));
}

