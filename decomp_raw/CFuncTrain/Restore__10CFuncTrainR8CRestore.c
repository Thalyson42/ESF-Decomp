// Restore__10CFuncTrainR8CRestore @0xe9a40 size=84
extern int _10CFuncTrain.m_SaveData;

unsigned int Restore__10CFuncTrainR8CRestore(int a0, int a1)
{
    return (!CBasePlatTrain::Restore(a0, a1) ? 0 : CRestore::ReadFields(a1, "CFuncTrain", a0, &_10CFuncTrain.m_SaveData, 3));
}

