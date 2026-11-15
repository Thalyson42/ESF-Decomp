// Restore__11CBaseButtonR8CRestore @0x95f00 size=84
extern int _11CBaseButton.m_SaveData;

unsigned int Restore__11CBaseButtonR8CRestore(int a0, int a1)
{
    return (!CBaseToggle::Restore(a0, a1) ? 0 : CRestore::ReadFields(a1, "CBaseButton", a0, &_11CBaseButton.m_SaveData, 8));
}

