// Save__14CBaseAnimatingR5CSave @0x8e2a0 size=84
extern int _14CBaseAnimating.m_SaveData;

unsigned int Save__14CBaseAnimatingR5CSave(int a0, int a1)
{
    return (!CBaseDelay::Save(a0, a1) ? 0 : CSave::WriteFields(a1, "CBaseAnimating", a0, &_14CBaseAnimating.m_SaveData, 5));
}

