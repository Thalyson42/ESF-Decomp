// VecToYaw__12CBaseMonsterG6Vector @0xd8680 size=98
typedef struct st_4d8680_0 {
    char padding_0[84];
    float field_54;
} st_4d8680_0;

double VecToYaw__12CBaseMonsterG6Vector(st_4d8680_0 **a0, float *a1)
{
    if (*a1 == 0.0f && a1[1] == 0.0f && a1[2] == 0.0f)
        return *a0->field_54;
    UTIL_VecToYaw(a1);
    return 0.0;
}

