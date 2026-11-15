// SpectatorThink__14CBaseSpectator @0x1203e0 size=94
typedef struct st_5203e0_1 {
    char padding_0[264];
    unsigned int field_108;
    unsigned int field_10c;
    char padding_110[116];
    unsigned int field_184;
    char padding_188[28];
    unsigned int field_1a4;
    char field_1a7;
} st_5203e0_1;

typedef struct st_5203e0_0 {
    char padding_0[264];
    unsigned int field_108;
    unsigned int field_10c;
    char padding_110[116];
    unsigned int field_184;
    char padding_188[28];
    char field_1a4[4];
    char field_1a7;
} st_5203e0_0;

st_5203e0_0 * SpectatorThink__14CBaseSpectator(st_5203e0_1 **a0)
{
    st_5203e0_1 *v0;  // eax

    if (!(*((char *)&*a0->field_1a4 + 3) & 4))
        *a0->field_1a4 = 0x4000000;
    *a0->field_10c = 0;
    *a0->field_108 = 8;
    v0 = *a0;
    if (*a0->field_184)
        v0 = CBaseSpectator::SpectatorImpulseCommand(a0);
    return v0;
}

