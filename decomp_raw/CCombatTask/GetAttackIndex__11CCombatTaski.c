// GetAttackIndex__11CCombatTaski @0x14d0f0 size=69
extern unsigned int BotWeaponInfoTable[4];

unsigned int GetAttackIndex__11CCombatTaski(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // edx

    v0 = 0;
    if (BotWeaponInfoTable)
    {
        do
        {
            if (BotWeaponInfoTable[21 * v0] == a1)
                return v0;
        } while ((v0 += 1, BotWeaponInfoTable[21 * v0]));
    }
    return 0;
}

