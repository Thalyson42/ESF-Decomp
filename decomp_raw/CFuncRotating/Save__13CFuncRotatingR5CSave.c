// Save__13CFuncRotatingR5CSave @0x916e0 size=84
extern int _13CFuncRotating.m_SaveData;

unsigned int Save__13CFuncRotatingR5CSave(int a0, int a1)
{
    return (!CBaseEntity::Save(a0, a1) ? 0 : CSave::WriteFields(a1, "CFuncRotating", a0, &_13CFuncRotating.m_SaveData, 5));
}

