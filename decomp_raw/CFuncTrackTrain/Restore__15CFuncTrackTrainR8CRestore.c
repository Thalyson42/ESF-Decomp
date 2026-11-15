// Restore__15CFuncTrackTrainR8CRestore @0xea710 size=84
extern int _15CFuncTrackTrain.m_SaveData;

unsigned int Restore__15CFuncTrackTrainR8CRestore(int a0, int a1)
{
    return (!CBaseEntity::Restore(a0, a1) ? 0 : CRestore::ReadFields(a1, "CFuncTrackTrain", a0, &_15CFuncTrackTrain.m_SaveData, 12));
}

