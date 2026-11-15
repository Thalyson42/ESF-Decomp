// Save__16CFuncTrackChangeR5CSave @0xecb90 size=84
extern int _16CFuncTrackChange.m_SaveData;

unsigned int Save__16CFuncTrackChangeR5CSave(int a0, int a1)
{
    return (!CFuncPlatRot::Save(a0, a1) ? 0 : CSave::WriteFields(a1, "CFuncTrackChange", a0, &_16CFuncTrackChange.m_SaveData, 9));
}

