// DisableChargeSprite__12CTelekinesis @0x12a0b0 size=102
typedef struct st_52a0b0_0 {
    char padding_0[468];
    int field_1d4;
    char padding_1d8[20];
    int field_1ec;
    char padding_1f0[20];
    char field_204;
} st_52a0b0_0;

unsigned int DisableChargeSprite__12CTelekinesis(st_52a0b0_0 *a0)
{
    int i;  // esi
    unsigned int v2;  // eax
    unsigned int *v0;  // [bp-0x8]

    i = 0;
    if (0 < a0->field_1ec)
    {
        v0 = &a0->field_1d4;
        do
        {
            v2 = CExplodingAttack::Vaporize(v0[i]);
            i += 1;
        } while (i < a0->field_1ec);
    }
    a0->field_1ec = 0;
    a0->field_204 = 0;
    return v2;
}

