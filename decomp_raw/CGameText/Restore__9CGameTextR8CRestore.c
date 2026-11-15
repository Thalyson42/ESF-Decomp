// Restore__9CGameTextR8CRestore @0xcf3f0 size=84
extern int _9CGameText.m_SaveData;

unsigned int Restore__9CGameTextR8CRestore(int a0, int a1)
{
    return (!CRuleEntity::Restore(a0, a1) ? 0 : CRestore::ReadFields(a1, "CGameText", a0, &_9CGameText.m_SaveData, 1));
}

