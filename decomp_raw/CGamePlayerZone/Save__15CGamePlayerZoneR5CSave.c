// Save__15CGamePlayerZoneR5CSave @0xd0450 size=84
extern int _15CGamePlayerZone.m_SaveData;

unsigned int Save__15CGamePlayerZoneR5CSave(int a0, int a1)
{
    return (!CRuleEntity::Save(a0, a1) ? 0 : CSave::WriteFields(a1, "CGamePlayerZone", a0, &_15CGamePlayerZone.m_SaveData, 4));
}

