// Save__9CGameTextR5CSave @0xcf390 size=84
extern int _9CGameText.m_SaveData;

unsigned int Save__9CGameTextR5CSave(int a0, int a1)
{
    return (!CRuleEntity::Save(a0, a1) ? 0 : CSave::WriteFields(a1, "CGameText", a0, &_9CGameText.m_SaveData, 1));
}

