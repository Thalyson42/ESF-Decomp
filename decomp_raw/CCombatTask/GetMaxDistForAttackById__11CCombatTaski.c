// GetMaxDistForAttackById__11CCombatTaski @0x14d010 size=62
typedef struct st_54d010_0 {
    float field_0;
    unsigned int field_4;
    unsigned int field_8;
    unsigned int field_c;
} st_54d010_0;

extern st_54d010_0 BotWeaponInfoTable+80;

double GetMaxDistForAttackById__11CCombatTaski(int a0, int a1)
{
    return (&BotWeaponInfoTable+80.field_0)[21 * CCombatTask::GetAttackIndex(a0, a1)];
}

