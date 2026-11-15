// Restore__14CMomentaryDoorR8CRestore @0xad330 size=84
extern int _14CMomentaryDoor.m_SaveData;

unsigned int Restore__14CMomentaryDoorR8CRestore(int a0, int a1)
{
    return (!CBaseToggle::Restore(a0, a1) ? 0 : CRestore::ReadFields(a1, "CMomentaryDoor", a0, &_14CMomentaryDoor.m_SaveData, 1));
}

