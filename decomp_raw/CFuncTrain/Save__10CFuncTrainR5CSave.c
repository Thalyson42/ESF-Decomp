// Save__10CFuncTrainR5CSave @0xe99e0 size=84
extern int _10CFuncTrain.m_SaveData;

unsigned int Save__10CFuncTrainR5CSave(int a0, int a1)
{
    return (!CBasePlatTrain::Save(a0, a1) ? 0 : CSave::WriteFields(a1, "CFuncTrain", a0, &_10CFuncTrain.m_SaveData, 3));
}

