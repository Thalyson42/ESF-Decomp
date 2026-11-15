// GetMinDistForAttackById__11CCombatTaski @0x14cf90 size=119
typedef struct st_54cf90_2 {
    char padding_0[2564];
    struct st_54cf90_1 *field_a04;
} st_54cf90_2;

typedef struct st_54cf90_1 {
    char padding_0[52];
    int field_34;
} st_54cf90_1;

typedef struct st_54cf90_3 {
    char padding_0[8];
    struct st_54cf90_2 *field_8;
} st_54cf90_3;

typedef struct st_54cf90_0 {
    float field_0;
    unsigned int field_4;
    unsigned int field_8;
    unsigned int field_c;
} st_54cf90_0;

extern st_54cf90_0 BotWeaponInfoTable+76;

float GetMinDistForAttackById__11CCombatTaski(st_54cf90_3 *a0, int a1)
{
    float v1;  // 128
    int v2;  // eax
    double v3;  // mm6
    float v0;  // [bp-0x8]

    v1 = (&BotWeaponInfoTable+76.field_0)[21 * CCombatTask::GetAttackIndex(a0, a1)];
    v2 = a0->field_8->field_a04->field_34;
    if (v2 == 1)
        return v1;
    if (v2 <= 1)
    {
        if (!v2)
            v3 = 0.8;
        else
            return v1;
    }
    else
    {
        if (v2 == 2)
            v3 = 1.2;
        else
            return v1;
    }
    v0 = (float)(v1 * v3);
    return v0;
}

