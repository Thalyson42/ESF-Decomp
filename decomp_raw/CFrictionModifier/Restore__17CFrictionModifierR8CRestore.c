// Restore__17CFrictionModifierR8CRestore @0x12a780 size=84
extern int _17CFrictionModifier.m_SaveData;

unsigned int Restore__17CFrictionModifierR8CRestore(int a0, int a1)
{
    return (!CBaseEntity::Restore(a0, a1) ? 0 : CRestore::ReadFields(a1, "CFrictionModifier", a0, &_17CFrictionModifier.m_SaveData, 1));
}

