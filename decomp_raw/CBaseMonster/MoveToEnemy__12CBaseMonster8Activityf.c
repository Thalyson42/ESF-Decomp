// MoveToEnemy__12CBaseMonster8Activityf @0xd4910 size=66
typedef struct st_4d4910_0 {
    char padding_0[532];
    unsigned int field_214;
    char padding_218[4];
    float field_21c;
    char padding_220[12];
    unsigned int field_22c;
} st_4d4910_0;

int MoveToEnemy__12CBaseMonster8Activityf(st_4d4910_0 *a0, unsigned int a1, float a2)
{
    a0->field_22c = a1;
    a0->field_21c = a2;
    a0->field_214 = 2;
    return CBaseMonster::FRefreshRoute(a0);
}

