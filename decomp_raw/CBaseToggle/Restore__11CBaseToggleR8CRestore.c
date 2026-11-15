// Restore__11CBaseToggleR8CRestore @0x122b50 size=84
extern int _11CBaseToggle.m_SaveData;

unsigned int Restore__11CBaseToggleR8CRestore(int a0, int a1)
{
    return (!CBaseAnimating::Restore(a0, a1) ? 0 : CRestore::ReadFields(a1, "CBaseToggle", a0, &_11CBaseToggle.m_SaveData, 19));
}

