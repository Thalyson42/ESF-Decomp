// FlYawDiff__12CBaseMonster @0xd84a0 size=104
typedef struct st_4d84a0_0 {
    char padding_0[84];
    float field_54;
    char padding_58[84];
    float field_ac;
} st_4d84a0_0;

double FlYawDiff__12CBaseMonster(st_4d84a0_0 **a0)
{
    float v0;  // 128
    double v1;  // mm0

    UTIL_AngleMod(*a0->field_54);
    v0 = *a0->field_ac;
    if (v0 == v1)
        return v0;
    UTIL_AngleDiff(v0, (float)v1);
    return v1;
}

