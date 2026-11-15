// MoveToTarget__12CBaseMonster8Activityf @0xd49c0 size=66
typedef struct st_4d49c0_0 {
    char padding_0[532];
    unsigned int field_214;
    char padding_218[4];
    float field_21c;
    char padding_220[12];
    unsigned int field_22c;
} st_4d49c0_0;

int MoveToTarget__12CBaseMonster8Activityf(st_4d49c0_0 *a0, unsigned int a1, float a2)
{
    a0->field_22c = a1;
    a0->field_21c = a2;
    a0->field_214 = 1;
    return CBaseMonster::FRefreshRoute(a0);
}

