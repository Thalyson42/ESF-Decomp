// GetMaxDistForAttackByTableIndex__11CCombatTaski @0x14d0c0 size=42
typedef struct st_54d0c0_0 {
    float field_0;
    unsigned int field_4;
    unsigned int field_8;
    unsigned int field_c;
} st_54d0c0_0;

extern st_54d0c0_0 g_5cb770;

double GetMaxDistForAttackByTableIndex__11CCombatTaski(unsigned int a0, unsigned int a1)
{
    return (&g_5cb770.field_0)[21 * a1];
}

