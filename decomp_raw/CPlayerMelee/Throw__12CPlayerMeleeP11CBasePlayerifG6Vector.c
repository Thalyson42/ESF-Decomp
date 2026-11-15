// Throw__12CPlayerMeleeP11CBasePlayerifG6Vector @0x10a4d0 size=400
typedef struct st_50a4d0_3 {
    char padding_0[156];
    unsigned int field_9c;
    unsigned int field_a0;
} st_50a4d0_3;

typedef struct st_50a4d0_2 {
    struct st_50a4d0_1 *field_0;
    char padding_4[2404];
    struct st_50a4d0_3 *field_968;
} st_50a4d0_2;

typedef struct st_50a4d0_4 {
    char padding_0[180];
    float field_b4;
    char padding_b8[84];
    unsigned int field_10c;
    char padding_110[16];
    unsigned int field_120;
    struct st_50a4d0_2 *field_124;
} st_50a4d0_4;

typedef struct st_50a4d0_1 {
    char padding_0[520];
    int field_208;
} st_50a4d0_1;

typedef struct st_50a4d0_0 {
    float field_0;
    char padding_4[36];
    float field_28;
    float field_2c;
    float field_30;
} st_50a4d0_0;

extern st_50a4d0_0 *gpGlobals;

unsigned int * Throw__12CPlayerMeleeP11CBasePlayerifG6Vector(st_50a4d0_4 *a0, st_50a4d0_1 **a1, int a2, float a3)
{
    unsigned int *v8;  // edx
    unsigned int *v9;  // edx
    int v10;  // edx
    int v0;  // [bp-0x68]
    int v1;  // [bp-0x38]
    int v2;  // [bp-0x38]
    int v3;  // [bp-0x38]
    float v4;  // [bp-0x34]
    float v5;  // [bp-0x30]
    float v6;  // [bp-0x2c]
    float v7;  // [bp-0x8]

    *(unsigned short *)&v0 = 0;
    CPlayerMelee::AddAnimation(a0, v0, gpGlobals->field_0, 1, "ref_swinger_letgo");
    EMIT_SOUND_DYN(a0->field_124->field_0->field_208, 1, "weapons/throw.wav", 0x3f800000, 1061997773, 0, 100);
    EMIT_SOUND_DYN(*a1->field_208, 1, "weapons/swoophit.wav", 0x3f800000, 1061997773, 0, 100);
    if (a0->field_124->field_968)
    {
        v8 = a0->field_124->field_968;
        v7 = (float)(0.9 + gpGlobals->field_0);
        *(float *)&v8[40] = v7;
        *(float *)&v8[39] = v7;
    }
    v9 = &gpGlobals->field_28;
    v4 = gpGlobals->field_28;
    v5 = *(float *)&v9[1];
    v6 = *(float *)&v9[2];
    v10 = a2 >> 31;
    v1 = (int)(1717986919 * a2 >> 33) - v10;
    v2 = a2 - v10 >> 1;
    v3 = a2;
    CPlayerMelee::StartToss(a1 + 224, a0->field_124, 1, &v4, (float)v3, (float)v2, (float)v1, a3);
    a0->field_10c = 1;
    a0->field_120 = 0;
    a0->field_b4 = (float)(1.0 + gpGlobals->field_0);
    return gpGlobals;
}

