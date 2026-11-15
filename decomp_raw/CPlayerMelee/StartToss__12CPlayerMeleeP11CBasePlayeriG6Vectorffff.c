// StartToss__12CPlayerMeleeP11CBasePlayeriG6Vectorffff @0x1012b0 size=753
typedef struct st_5012b0_0 {
    char padding_0[140];
    struct st_5012b0_1 *field_8c;
} st_5012b0_0;

typedef struct st_5012b0_8 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    char padding_c[12];
    unsigned int field_18;
    unsigned int field_1c;
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
    char padding_2c[68];
    unsigned int field_70;
    char padding_74[112];
    struct st_5012b0_4 *field_e4;
} st_5012b0_8;

typedef struct st_5012b0_4 {
    struct st_5012b0_5 *field_0;
    char padding_4[92];
    struct st_5012b0_0 *field_60;
    char padding_64[700];
    unsigned int field_320;
    unsigned int field_324;
    char padding_328[8];
    unsigned int field_330;
    char padding_334[72];
    unsigned int field_37c;
    char padding_380[392];
    unsigned int field_508;
    char padding_50c[444];
    unsigned int field_6c8;
    char padding_6cc[164];
    unsigned int field_770;
    char padding_774[500];
    struct st_5012b0_3 *field_968;
} st_5012b0_4;

typedef struct st_5012b0_6 {
    unsigned int field_0;
    float field_4;
    float field_8;
    float field_c;
    float field_10;
    unsigned int field_14;
    char padding_18[16];
    unsigned int field_28;
    unsigned int field_2c;
    char padding_30[16];
    unsigned int field_40;
    unsigned int field_44;
    unsigned int field_48;
    char padding_4c[12];
    unsigned int field_58;
    unsigned int field_5c;
    unsigned int field_60;
    unsigned int field_64;
    unsigned int field_68;
    char padding_6c[68];
    unsigned int field_b0;
    char padding_b4[112];
    struct st_5012b0_4 *field_124;
} st_5012b0_6;

typedef struct st_5012b0_2 {
    char padding_0[252];
    struct st_5012b0_1 *field_fc;
    char padding_100[4];
    struct st_5012b0_1 *field_104;
    char padding_108[80];
    struct st_5012b0_1 *field_158;
} st_5012b0_2;

typedef struct st_5012b0_1 {
    unsigned int field_0;
} st_5012b0_1;

typedef struct st_5012b0_5 {
    char padding_0[264];
    unsigned int field_108;
    char padding_10c[16];
    unsigned int field_11c;
    char padding_120[360];
    unsigned int field_288;
    unsigned int field_28c;
    unsigned int field_290;
} st_5012b0_5;

typedef struct st_5012b0_3 {
    char padding_0[96];
    struct st_5012b0_2 *field_60;
} st_5012b0_3;

typedef struct st_5012b0_7 {
    float field_0;
} st_5012b0_7;

extern st_5012b0_7 *gpGlobals;

float StartToss__12CPlayerMeleeP11CBasePlayeriG6Vectorffff(st_5012b0_6 *a0, unsigned int a1, unsigned int a2, float *a3, float a4, float a5, float a6, float a7)
{
    st_5012b0_3 *v11;  // esi
    double v12;  // mm6
    double v13;  // mm5
    double v14;  // mm6
    unsigned int *v15;  // edx
    float v16;  // 120
    st_5012b0_8 *v17;  // eax
    unsigned long long v18;  // mm7
    unsigned long long v19;  // mm7
    unsigned long long v20;  // mm7
    int v0;  // [bp-0x68]
    float v1;  // [bp-0x38]
    unsigned int v2;  // [bp-0x24]
    float v3;  // [bp-0x24]
    unsigned int v4;  // [bp-0x20]
    float v5;  // [bp-0x20]
    float v6;  // [bp-0x1c]
    unsigned int v7;  // [bp-0x1c]
    float v8;  // [bp-0x18]
    float v9;  // [bp-0x14]
    float v10;  // [bp-0x10]

    if (!a1)
    {
        return v20;
    }
    else if (a0->field_124->field_60->field_8c(a0->field_124))
    {
        if (a0->field_28)
        {
            v0 = 1;
            CPlayerMelee::StopThrow(a0, v0);
            a0->field_0 = a0->field_0;
            a0->field_0 = a0->field_0 + 1;
        }
        else
        {
            a0->field_0 = 1;
        }
        if (a0->field_124->field_508)
            CBasePlayer::StopSwoop(a0->field_124);
        if (a0->field_124->field_770)
        {
            *(unsigned short *)&v0 = 1;
            CBasePlayer::Descend(a0->field_124, v0);
        }
        if (a0->field_124->field_330)
            CBasePlayer::StopPowerUp(a0->field_124);
        if (a0->field_124->field_320)
            CBasePlayer::StopFly(a0->field_124);
        if (a0->field_124->field_324)
            CBasePlayer::StopTurbo(a0->field_124);
        if (a0->field_124->field_6c8)
            CBasePlayer::RemoveWallJump(a0->field_124);
        if (a0->field_124)
        {
            v11 = a0->field_124->field_968;
            if (v11 && v11->field_60->field_158(v11))
            {
                v11->field_60->field_104(v11, 0);
                v11->field_60->field_fc(v11);
            }
        }
        a0->field_68 = a1;
        a0->field_2c = a2;
        a0->field_28 = 1;
        a0->field_64 = 1;
        v2 = 0;
        v4 = 0;
        v7 = 0;
        a0->field_58 = v2;
        a0->field_5c = v4;
        a0->field_60 = v7;
        *(float *)&a0->field_b0 = *(float *)gpGlobals;
        a0->field_4 = a4;
        a0->field_8 = a4;
        a0->field_c = a5;
        a0->field_10 = a6;
        *(float *)&a0->field_14 = a7 + *(float *)gpGlobals;
        a0->field_124->field_37c = 1;
        a0->field_124->field_0->field_108 = 2;
        a0->field_124->field_0->field_11c = 0x3f800000;
        v12 = *a3 * *a3 + a3[1] * a3[1] + a3[2] * a3[2];
        v13 = sqrt(v12);
        if (isnan(v13))
            sqrt(*(unsigned int *)&v12);
        else
            v12 = v13;
        v1 = (float)v12;
        if (v1 == 0.0f)
        {
            v3 = 0.0f;
            v5 = 0.0f;
            v6 = 1.0;
        }
        else
        {
            v14 = 1.0 / v1;
            v3 = (float)(v14 * *a3);
            v5 = (float)(v14 * a3[1]);
            v6 = (float)(v14 * a3[2]);
        }
        *(float *)&a0->field_40 = v3;
        *(float *)&a0->field_44 = v5;
        *(float *)&a0->field_48 = v6;
        v15 = a0->field_124->field_0;
        v16 = a0->field_8;
        v17 = &a0->field_40;
        v8 = v16 * *(float *)&a0->field_40;
        v9 = v16 * *(float *)&v17->field_4;
        v10 = v16 * *(float *)&v17->field_8;
        *(float *)&v15[162] = v8;
        *(float *)&v15[163] = v9;
        *(float *)&v15[164] = v10;
        CPlayerMelee::RemoveAllAnims(a0);
        return v18;
    }
    else
    {
        return v19;
    }
}

