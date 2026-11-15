// Save__10CLightningR5CSave @0xb02e0 size=84
extern int _10CLightning.m_SaveData;

unsigned int Save__10CLightningR5CSave(int a0, int a1)
{
    return (!CBaseEntity::Save(a0, a1) ? 0 : CSave::WriteFields(a1, "CLightning", a0, &_10CLightning.m_SaveData, 13));
}

