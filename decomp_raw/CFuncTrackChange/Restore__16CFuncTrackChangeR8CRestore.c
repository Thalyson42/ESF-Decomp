// Restore__16CFuncTrackChangeR8CRestore @0xecbf0 size=84
extern int _16CFuncTrackChange.m_SaveData;

unsigned int Restore__16CFuncTrackChangeR8CRestore(int a0, int a1)
{
    return (!CFuncPlatRot::Restore(a0, a1) ? 0 : CRestore::ReadFields(a1, "CFuncTrackChange", a0, &_16CFuncTrackChange.m_SaveData, 9));
}

