// PrimaryAttack__13CRegeneration @0x10def0 size=242
typedef struct st_50def0_2 {
    char padding_0[128];
    struct st_50def0_1 *field_80;
    char padding_84[24];
    float field_9c;
} st_50def0_2;

typedef struct st_50def0_1 {
    struct st_50def0_0 *field_0;
    char padding_4[584];
    int field_24c;
    char padding_250[228];
    unsigned int field_334;
    char padding_338[1052];
    unsigned int field_754;
} st_50def0_1;

typedef struct st_50def0_0 {
    char padding_0[352];
    float field_160;
    char padding_164[164];
    int field_208;
} st_50def0_0;

unsigned int PrimaryAttack__13CRegeneration(double a0, st_50def0_2 *a1)
{
    st_50def0_1 *v0;  // edx
    unsigned int v1;  // eax

    if (CBasePlayer::UseKi(a1->field_80, 20))
    {
        if (!a1->field_80->field_334)
        {
            a1->field_80->field_334 = 1;
            a1->field_80->field_754 = 0;
            EMIT_SOUND_DYN(a1->field_80->field_0->field_208, 1, "weapons/regen.wav", 0x3f800000, 0.800000011920929f, 0, 100);
        }
        a1->field_80->field_0->field_160 = (float)(1.0 + a1->field_80->field_0->field_160);
        v0 = a1->field_80;
        if ((double)v0->field_24c < v0->field_0->field_160)
            v0->field_0->field_160 = (float)v0->field_24c;
    }
    v1 = UTIL_WeaponTimeBase();
    a1->field_9c = (float)(a0 + 0.6);
    return v1;
}

