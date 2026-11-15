// Save__14CBasePlatTrainR5CSave @0xe7f60 size=84
extern int _14CBasePlatTrain.m_SaveData;

unsigned int Save__14CBasePlatTrainR5CSave(int a0, int a1)
{
    return (!CBaseToggle::Save(a0, a1) ? 0 : CSave::WriteFields(a1, "CBasePlatTrain", a0, &_14CBasePlatTrain.m_SaveData, 3));
}

