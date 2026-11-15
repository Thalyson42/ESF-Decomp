// Save__11CRuleEntityR5CSave @0xcee00 size=84
extern int _11CRuleEntity.m_SaveData;

unsigned int Save__11CRuleEntityR5CSave(int a0, int a1)
{
    return (!CBaseEntity::Save(a0, a1) ? 0 : CSave::WriteFields(a1, "CRuleEntity", a0, &_11CRuleEntity.m_SaveData, 1));
}

