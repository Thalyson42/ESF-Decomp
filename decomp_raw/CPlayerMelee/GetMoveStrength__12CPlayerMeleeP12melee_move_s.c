// GetMoveStrength__12CPlayerMeleeP12melee_move_s @0x1061e0 size=160
typedef struct st_5061e0_0 {
    char padding_0[12];
    struct st_5061e0_1 *field_c;
} st_5061e0_0;

typedef struct st_5061e0_2 {
    char padding_0[384];
    struct st_5061e0_0 *field_180;
} st_5061e0_2;

typedef struct st_5061e0_1 {
    unsigned int field_0;
} st_5061e0_1;

float GetMoveStrength__12CPlayerMeleeP12melee_move_s(st_5061e0_2 *a0, int a1)
{
    double v2;  // mm7
    float v3;  // 128
    float v4;  // mm7
    float v0;  // [bp-0x10]
    unsigned int v1;  // [bp-0x8]

    v1 = 0;
    if (!a1)
        return v4;
    CPlayerMelee::GetCmbTime(a0, a1);
    v3 = (float)v2;
    if (v3 < *(float *)(a0->field_180->field_c(a0) + 4))
        return v3;
    CPlayerMelee::GetCmbTime(a0, a1);
    v0 = v3;
    v1 = 2;
    if (v0 >= *(float *)(a0->field_180->field_c(a0) + 8))
        return v0;
    v1 = 1;
    return v0;
}

