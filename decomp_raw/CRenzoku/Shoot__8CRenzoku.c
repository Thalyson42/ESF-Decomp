// Shoot__8CRenzoku @0x10e860 size=253
typedef struct st_50e860_3 {
    char padding_0[820];
    unsigned int field_334;
    char padding_338[4];
    unsigned int field_33c;
    char padding_340[1044];
    unsigned int field_754;
} st_50e860_3;

typedef struct st_50e860_0 {
    char padding_0[380];
    struct st_50e860_1 *field_17c;
} st_50e860_0;

typedef struct st_50e860_1 {
    unsigned int field_0;
} st_50e860_1;

typedef struct st_50e860_2 {
    char padding_0[96];
    struct st_50e860_0 *field_60;
    char padding_64[28];
    struct st_50e860_3 *field_80;
    char padding_84[64];
    int field_c4;
    int field_c8;
    char padding_cc[264];
    int field_1d4;
} st_50e860_2;

unsigned int * Shoot__8CRenzoku(st_50e860_2 *a0)
{
    unsigned int *v0;  // eax
    unsigned int *v1;  // eax
    unsigned int *v2;  // eax

    v0 = a0->field_80;
    if (v0[205])
    {
        v0[469] = 0x3f800000;
        a0->field_80->field_334 = 0;
        a0->field_80->field_33c = 1;
        CBasePlayer::DrawChargeBar(a0->field_80, 0);
        if (a0->field_c4 >= a0->field_c8 / 3)
        {
            a0->field_1d4 = a0->field_c4 * 6 / a0->field_c8;
            return CBasePlayer::EmitClassSound(a0->field_80, "renzoku.wav");
        }
        CChargedAttack::SilenceVoice(a0);
        v1 = CChargedAttack::SilenceWeaponSounds(a0);
        a0->field_1d4 = 0;
        return v1;
    }
    else if (a0->field_1d4 > 0)
    {
        v2 = a0->field_60->field_17c(a0);
        a0->field_1d4 = a0->field_1d4 - 1;
        return v2;
    }
    else
    {
        return v0;
    }
}

