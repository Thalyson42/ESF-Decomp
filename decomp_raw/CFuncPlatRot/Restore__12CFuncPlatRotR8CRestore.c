// Restore__12CFuncPlatRotR8CRestore @0xe95e0 size=84
extern int _12CFuncPlatRot.m_SaveData;

unsigned int Restore__12CFuncPlatRotR8CRestore(int a0, int a1)
{
    return (!CBasePlatTrain::Restore(a0, a1) ? 0 : CRestore::ReadFields(a1, "CFuncPlatRot", a0, &_12CFuncPlatRot.m_SaveData, 2));
}

