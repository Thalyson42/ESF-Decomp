// GetStunTime__12CPlayerMelee @0x1083f0 size=42
typedef struct st_5083f0_0 {
    char padding_0[136];
    float field_88;
    float field_8c;
    char padding_90[76];
    unsigned int field_dc;
    unsigned int field_e0;
} st_5083f0_0;

double GetStunTime__12CPlayerMelee(st_5083f0_0 *a0)
{
    if (a0->field_e0 && !a0->field_dc)
        return a0->field_88;
    return a0->field_8c;
}

