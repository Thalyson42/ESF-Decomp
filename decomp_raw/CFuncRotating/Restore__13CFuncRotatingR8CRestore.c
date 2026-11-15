// Restore__13CFuncRotatingR8CRestore @0x91740 size=84
extern int _13CFuncRotating.m_SaveData;

unsigned int Restore__13CFuncRotatingR8CRestore(int a0, int a1)
{
    return (!CBaseEntity::Restore(a0, a1) ? 0 : CRestore::ReadFields(a1, "CFuncRotating", a0, &_13CFuncRotating.m_SaveData, 5));
}

