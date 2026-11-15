// GetMaxDistForAttackById__11CCombatTaski @0x14d010 size=62
typedef struct st_54d010_0 {
    float field_0;
    unsigned int field_4;
    unsigned int field_8;
    unsigned int field_c;
} st_54d010_0;

extern st_54d010_0 g_5cb770;

double GetMaxDistForAttackById__11CCombatTaski(int a0, int a1)
{
    return (&g_5cb770.field_0)[21 * sub_48d810(a0, a1)];
}

