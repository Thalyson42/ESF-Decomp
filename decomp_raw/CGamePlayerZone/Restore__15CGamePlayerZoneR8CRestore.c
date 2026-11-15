// Restore__15CGamePlayerZoneR8CRestore @0xd04b0 size=84
extern int _15CGamePlayerZone.m_SaveData;

unsigned int Restore__15CGamePlayerZoneR8CRestore(int a0, int a1)
{
    return (!CRuleEntity::Restore(a0, a1) ? 0 : CRestore::ReadFields(a1, "CGamePlayerZone", a0, &_15CGamePlayerZone.m_SaveData, 4));
}

