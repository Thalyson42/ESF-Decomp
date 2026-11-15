// GetMeleeStrength__12CPlayerMeleef @0x104740 size=118
typedef struct st_504740_0 {
    char padding_0[12];
    struct st_504740_1 *field_c;
} st_504740_0;

typedef struct st_504740_2 {
    char padding_0[384];
    struct st_504740_0 *field_180;
} st_504740_2;

typedef struct st_504740_1 {
    unsigned int field_0;
} st_504740_1;

unsigned int GetMeleeStrength__12CPlayerMeleef(st_504740_2 *a0, float a1)
{
    return (a1 < *(float *)(a0->field_180->field_c(a0) + 4) ? 0 : a1 < *(float *)(a0->field_180->field_c(a0) + 8) ? 1 : 2);
}

