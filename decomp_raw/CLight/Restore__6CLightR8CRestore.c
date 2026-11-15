// Restore__6CLightR8CRestore @0xcdb90 size=84
extern int _6CLight.m_SaveData;

unsigned int Restore__6CLightR8CRestore(int a0, int a1)
{
    return (!CBaseEntity::Restore(a0, a1) ? 0 : CRestore::ReadFields(a1, "CLight", a0, &_6CLight.m_SaveData, 2));
}

