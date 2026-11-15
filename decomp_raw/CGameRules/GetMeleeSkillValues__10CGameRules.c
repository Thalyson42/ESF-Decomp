// GetMeleeSkillValues__10CGameRules @0xc4d80 size=89
extern float melee_skill+12;

int GetMeleeSkillValues__10CGameRules(unsigned int a0)
{
    int v3;  // eax
    int v0;  // [bp-0xc]
    unsigned short v1;  // [bp-0x8]
    unsigned short v2;  // [bp-0x6]

    v2 = __fnstcw();
    v1 = v2 | 0xc00;
    v0 = (int)melee_skill+12;
    v3 = v0;
    if (v3 < 0)
    {
        v3 = 0;
    }
    else if (v3 > 2)
    {
        v3 = 2;
    }
    return a0 + v3 * 20 + 8;
}

