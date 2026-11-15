// MoveToLocation__12CBaseMonster8ActivityfRC6Vector @0xd4960 size=95
typedef struct st_4d4960_0 {
    char padding_0[532];
    unsigned int field_214;
    char padding_218[4];
    float field_21c;
    unsigned int field_220;
    unsigned int field_224;
    unsigned int field_228;
    unsigned int field_22c;
} st_4d4960_0;

int MoveToLocation__12CBaseMonster8ActivityfRC6Vector(st_4d4960_0 *a0, unsigned int a1, float a2, unsigned int *a3)
{
    a0->field_22c = a1;
    a0->field_21c = a2;
    a0->field_214 = 64;
    a0->field_220 = *a3;
    a0->field_224 = a3[1];
    a0->field_228 = a3[2];
    return CBaseMonster::FRefreshRoute(a0);
}

