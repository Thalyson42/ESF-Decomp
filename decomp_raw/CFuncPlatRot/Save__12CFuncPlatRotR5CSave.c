// Save__12CFuncPlatRotR5CSave @0xe9580 size=84
extern int _12CFuncPlatRot.m_SaveData;

unsigned int Save__12CFuncPlatRotR5CSave(int a0, int a1)
{
    return (!CBasePlatTrain::Save(a0, a1) ? 0 : CSave::WriteFields(a1, "CFuncPlatRot", a0, &_12CFuncPlatRot.m_SaveData, 2));
}

