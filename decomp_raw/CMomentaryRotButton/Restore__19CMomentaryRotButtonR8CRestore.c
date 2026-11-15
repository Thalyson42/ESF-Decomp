// Restore__19CMomentaryRotButtonR8CRestore @0x97be0 size=84
extern int _19CMomentaryRotButton.m_SaveData;

unsigned int Restore__19CMomentaryRotButtonR8CRestore(int a0, int a1)
{
    return (!CBaseToggle::Restore(a0, a1) ? 0 : CRestore::ReadFields(a1, "CMomentaryRotButton", a0, &_19CMomentaryRotButton.m_SaveData, 6));
}

