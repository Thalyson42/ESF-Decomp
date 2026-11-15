// Restore__6CLaserR8CRestore @0xb27c0 size=84
extern int _6CLaser.m_SaveData;

unsigned int Restore__6CLaserR8CRestore(int a0, int a1)
{
    return (!CBaseEntity::Restore(a0, a1) ? 0 : CRestore::ReadFields(a1, "CLaser", a0, &_6CLaser.m_SaveData, 3));
}

