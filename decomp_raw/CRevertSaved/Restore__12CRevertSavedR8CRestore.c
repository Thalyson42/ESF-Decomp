// Restore__12CRevertSavedR8CRestore @0xfe420 size=84
extern int _12CRevertSaved.m_SaveData;

unsigned int Restore__12CRevertSavedR8CRestore(int a0, int a1)
{
    return (!CBaseEntity::Restore(a0, a1) ? 0 : CRestore::ReadFields(a1, "CRevertSaved", a0, &_12CRevertSaved.m_SaveData, 2));
}

