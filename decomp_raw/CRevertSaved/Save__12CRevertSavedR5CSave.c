// Save__12CRevertSavedR5CSave @0xfe3c0 size=84
extern int _12CRevertSaved.m_SaveData;

unsigned int Save__12CRevertSavedR5CSave(int a0, int a1)
{
    return (!CBaseEntity::Save(a0, a1) ? 0 : CSave::WriteFields(a1, "CRevertSaved", a0, &_12CRevertSaved.m_SaveData, 2));
}

