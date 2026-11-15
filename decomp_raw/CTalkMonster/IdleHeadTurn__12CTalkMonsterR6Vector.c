// IdleHeadTurn__12CTalkMonsterR6Vector @0x1263f0 size=158
typedef struct st_5263f0_0 {
    struct st_5263f0_1 *field_0;
    char padding_4[605];
    char field_261;
} st_5263f0_0;

typedef struct st_5263f0_1 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[64];
    float field_54;
} st_5263f0_1;

double IdleHeadTurn__12CTalkMonsterR6Vector(st_5263f0_0 *a0, float *a1)
{
    unsigned int *v3;  // edx
    double iter;  // mm7
    double v5;  // mm7
    float v0;  // [bp-0x24]
    float v1;  // [bp-0x20]
    float v2;  // [bp-0x1c]

    if (!(a0->field_261 & 4))
        return v5;
    v3 = &a0->field_0->field_8;
    v0 = *a1 - a0->field_0->field_8;
    v1 = a1[1] - *(float *)&v3[1];
    v2 = a1[2] - *(float *)&v3[2];
    CBaseMonster::VecToYaw(a0, &v0);
    iter = v2 - a0->field_0->field_54;
    if (iter > 180.0)
        iter -= 360.0;
    if (iter < -180.0)
        iter += 360.0;
    CBaseAnimating::SetBoneController(a0, 0, (float)iter);
    return iter;
}

