// Restore__11CRuleEntityR8CRestore @0xcee60 size=84
extern int _11CRuleEntity.m_SaveData;

unsigned int Restore__11CRuleEntityR8CRestore(int a0, int a1)
{
    return (!CBaseEntity::Restore(a0, a1) ? 0 : CRestore::ReadFields(a1, "CRuleEntity", a0, &_11CRuleEntity.m_SaveData, 1));
}

