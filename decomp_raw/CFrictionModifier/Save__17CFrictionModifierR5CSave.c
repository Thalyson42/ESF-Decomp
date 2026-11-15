// Save__17CFrictionModifierR5CSave @0x12a720 size=84
extern int _17CFrictionModifier.m_SaveData;

unsigned int Save__17CFrictionModifierR5CSave(int a0, int a1)
{
    return (!CBaseEntity::Save(a0, a1) ? 0 : CSave::WriteFields(a1, "CFrictionModifier", a0, &_17CFrictionModifier.m_SaveData, 1));
}

