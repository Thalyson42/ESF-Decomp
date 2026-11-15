// GetMinDistForAttackByTableIndex__11CCombatTaski @0x14d050 size=107
typedef struct st_54d050_2 {
    char padding_0[2564];
    struct st_54d050_1 *field_a04;
} st_54d050_2;

typedef struct st_54d050_1 {
    char padding_0[52];
    int field_34;
} st_54d050_1;

typedef struct st_54d050_3 {
    char padding_0[8];
    struct st_54d050_2 *field_8;
} st_54d050_3;

typedef struct st_54d050_0 {
    float field_0;
    unsigned int field_4;
    unsigned int field_8;
    unsigned int field_c;
} st_54d050_0;

extern st_54d050_0 BotWeaponInfoTable+76;

float GetMinDistForAttackByTableIndex__11CCombatTaski(st_54d050_3 *a0, unsigned int idx)
{
    float v1;  // 128
    int v2;  // eax
    double v3;  // mm6
    float v0;  // [bp-0x8]

    v1 = (&BotWeaponInfoTable+76.field_0)[21 * idx];
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

