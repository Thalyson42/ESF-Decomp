// Save__15CFuncTrackTrainR5CSave @0xea6b0 size=84
extern int _15CFuncTrackTrain.m_SaveData;

unsigned int Save__15CFuncTrackTrainR5CSave(int a0, int a1)
{
    return (!CBaseEntity::Save(a0, a1) ? 0 : CSave::WriteFields(a1, "CFuncTrackTrain", a0, &_15CFuncTrackTrain.m_SaveData, 12));
}

