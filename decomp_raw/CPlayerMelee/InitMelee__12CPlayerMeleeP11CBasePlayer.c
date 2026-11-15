// InitMelee__12CPlayerMeleeP11CBasePlayer @0x107050 size=772
typedef struct st_507050_0 {
    struct st_507050_1 *field_0;
    char padding_4[796];
    unsigned int field_320;
    unsigned int field_324;
    char padding_328[84];
    unsigned int field_37c;
    char padding_380[980];
    unsigned int field_754;
} st_507050_0;

typedef struct st_507050_5 {
    struct st_507050_6 *field_0;
    char padding_4[796];
    unsigned int field_320;
    unsigned int field_324;
    char padding_328[4];
    unsigned int field_32c;
    unsigned int field_330;
    char padding_334[8];
    unsigned int field_33c;
    char padding_340[60];
    unsigned int field_37c;
    char padding_380[392];
    unsigned int field_508;
    char padding_50c[444];
    unsigned int field_6c8;
    char padding_6cc[136];
    unsigned int field_754;
    char padding_758[528];
    struct st_507050_4 *field_968;
} st_507050_5;

typedef struct st_507050_1 {
    char padding_0[264];
    unsigned int field_108;
    unsigned int field_10c;
} st_507050_1;

typedef struct st_507050_2 {
    char padding_0[300];
    struct st_507050_3 *field_12c;
} st_507050_2;

typedef struct st_507050_7 {
    char padding_0[244];
    unsigned int field_f4;
    char padding_f8[44];
    struct st_507050_0 *field_124;
    struct st_507050_5 *field_128;
    char padding_12c[4];
    struct st_507050_6 *field_130;
    char padding_134[4];
    unsigned int field_138;
    unsigned int field_13c;
    unsigned int field_140;
    unsigned int field_144;
} st_507050_7;

typedef struct st_507050_6 {
    char padding_0[264];
    unsigned int field_108;
    char padding_10c[44];
    unsigned int field_138;
    unsigned int field_13c;
    unsigned int field_140;
    unsigned int field_144;
} st_507050_6;

typedef struct st_507050_3 {
    unsigned int field_0;
} st_507050_3;

typedef struct st_507050_4 {
    char padding_0[96];
    struct st_507050_2 *field_60;
} st_507050_4;

unsigned int * InitMelee__12CPlayerMeleeP11CBasePlayer(st_507050_7 *a0, int a1)
{
    st_507050_4 *v0;  // esi
    unsigned int *v1;  // eax

    CPlayerMelee::SetDefender(a0, a1);
    CPlayerMelee::SetAttackerOther(a0, 0);
    CPlayerMelee::SetAttackerOther(a0->field_130, a0->field_124);
    CPlayerMelee::SetDefender(a0->field_130, 0);
    a0->field_124->field_37c = 0;
    a0->field_128->field_37c = 0;
    if (!a0->field_f4)
    {
        if (a0->field_124->field_320)
            CBasePlayer::StopFly(a0->field_124);
        if (a0->field_124->field_324)
            CBasePlayer::StopTurbo(a0->field_124);
        if (a0->field_128->field_330)
            CBasePlayer::StopPowerUp(a0->field_128);
        if (a0->field_128->field_320)
            CBasePlayer::StopFly(a0->field_128);
        if (a0->field_128->field_324)
            CBasePlayer::StopTurbo(a0->field_128);
        if (a0->field_128->field_508)
            CBasePlayer::StopSwoop(a0->field_128);
        if (a0->field_128->field_6c8)
            CBasePlayer::RemoveWallJump(a0->field_128);
        a0->field_128->field_32c = a0->field_128->field_32c;
        if (a0->field_128->field_968)
        {
            v0 = a0->field_128->field_968->field_60->field_12c(a0->field_128->field_968);
            if (v0)
            {
                if ((*(int *)&v0->field_60[1].padding_0[40])(v0))
                {
                    (*(int *)&v0->field_60->padding_0[260])(v0, 0);
                    (*(int *)&v0->field_60->padding_0[252])(v0);
                }
                else if (a0->field_128->field_33c)
                {
                    a0->field_128->field_37c = 1;
                    (*(int *)&v0->field_60[1].padding_0[24])(v0);
                }
            }
        }
        CPlayerMelee::RemoveAllAnims(a0);
        CPlayerMelee::RemoveAllAnims(a0->field_130);
    }
    a0->field_124->field_37c = 1;
    a0->field_128->field_37c = 1;
    a0->field_138 = 1;
    a0->field_13c = 0;
    a0->field_130->field_138 = 0;
    a0->field_130->field_13c = 1;
    a0->field_144 = 1;
    v1 = a0->field_130;
    v1[81] = 1;
    if (!a0->field_f4)
    {
        a0->field_124->field_0->field_10c = 0;
        a0->field_140 = 0;
        a0->field_130->field_140 = 1;
        a0->field_124->field_754 = 0x3f800000;
        a0->field_128->field_754 = 0x3f800000;
        a0->field_124->field_0->field_108 = 15;
        v1 = a0->field_128->field_0;
        v1[66] = 15;
    }
    return v1;
}

