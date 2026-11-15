// Restore__5CGlowR8CRestore @0xb3470 size=84
extern int _5CGlow.m_SaveData;

unsigned int Restore__5CGlowR8CRestore(int a0, int a1)
{
    return (!CBaseEntity::Restore(a0, a1) ? 0 : CRestore::ReadFields(a1, "CGlow", a0, &_5CGlow.m_SaveData, 2));
}

