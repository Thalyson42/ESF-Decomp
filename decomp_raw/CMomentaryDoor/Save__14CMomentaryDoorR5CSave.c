// Save__14CMomentaryDoorR5CSave @0xad2d0 size=84
extern int _14CMomentaryDoor.m_SaveData;

unsigned int Save__14CMomentaryDoorR5CSave(int a0, int a1)
{
    return (!CBaseToggle::Save(a0, a1) ? 0 : CSave::WriteFields(a1, "CMomentaryDoor", a0, &_14CMomentaryDoor.m_SaveData, 1));
}

