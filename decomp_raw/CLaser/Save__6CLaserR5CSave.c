// Save__6CLaserR5CSave @0xb2760 size=84
extern int _6CLaser.m_SaveData;

unsigned int Save__6CLaserR5CSave(int a0, int a1)
{
    return (!CBaseEntity::Save(a0, a1) ? 0 : CSave::WriteFields(a1, "CLaser", a0, &_6CLaser.m_SaveData, 3));
}

