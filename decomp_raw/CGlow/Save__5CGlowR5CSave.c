// Save__5CGlowR5CSave @0xb3410 size=84
extern int _5CGlow.m_SaveData;

unsigned int Save__5CGlowR5CSave(int a0, int a1)
{
    return (!CBaseEntity::Save(a0, a1) ? 0 : CSave::WriteFields(a1, "CGlow", a0, &_5CGlow.m_SaveData, 2));
}

