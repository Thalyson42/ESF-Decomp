// SecondaryAttack__6CMelee @0xd2e10 size=571
typedef struct st_4d2e10_0 {
    char padding_0[896];
    char field_380;
    char padding_381[127];
    unsigned int field_400;
    char padding_404[256];
    int field_504;
} st_4d2e10_0;

typedef struct st_4d2e10_2 {
    char padding_0[136];
    unsigned int field_88;
} st_4d2e10_2;

typedef struct st_4d2e10_4 {
    unsigned int field_0;
    char padding_4[388];
    unsigned int field_188;
    char padding_18c[1116];
    struct st_4d2e10_2 *field_5e8;
} st_4d2e10_4;

typedef struct st_4d2e10_1 {
    char padding_0[128];
    struct st_4d2e10_0 *field_80;
    char padding_84[24];
    float field_9c;
    float field_a0;
} st_4d2e10_1;

typedef struct st_4d2e10_3 {
    char padding_0[896];
    int field_380;
    char padding_384[388];
    unsigned int field_508;
    char padding_50c[1116];
    struct st_4d2e10_2 *field_968;
} st_4d2e10_3;

double SecondaryAttack__6CMelee(st_4d2e10_1 *a0)
{
    int v12;  // esi
    st_4d2e10_3 *v13;  // esi
    st_4d2e10_0 *v14;  // edx
    double v15;  // mm7
    double v16;  // mm7
    double v17;  // mm0
    double v18;  // mm0
    st_4d2e10_4 *v0;  // [bp-0x5c]
    unsigned int v1;  // [bp-0x58]
    float v2;  // [bp-0x48]
    unsigned int v3;  // [bp-0x44]
    unsigned int v4;  // [bp-0x40]
    unsigned int v5;  // [bp-0x3c]
    unsigned int v6;  // [bp-0x38]
    unsigned int v7;  // [bp-0x34]
    unsigned int v8;  // [bp-0x30]
    char v9;  // [bp-0x24], Other Possible Types: unsigned int
    unsigned int v10;  // [bp-0x20]
    unsigned int v11;  // [bp-0x1c]

    if (a0->field_80->field_400)
    {
        v12 = CPlayerMelee::GetEnemyPrepunch(&a0->field_80->field_380, 0);
        if (!v12 || !CBasePlayer::CanMelee(a0->field_80, v12) || !CBasePlayer::UseKi(a0->field_80, 35))
            goto LABEL_4d3022;
        CSwoop::GetCurrentDirection(&v9, &a0->field_80->field_504);
        v3 = v9;
        v4 = v10;
        v5 = v11;
        CPlayerMelee::SimpleMeleePowerhit(&a0->field_80->field_380, v12, &v3, a0->field_80->field_504);
LABEL_4d3008:
        UTIL_WeaponTimeBase();
        v16 = 0.9;
    }
    else
    {
        v1 = 0;
        v13 = CPlayerMelee::GetEnemyPrepunch(&a0->field_80->field_380, 0);
        if (v13 && CBasePlayer::CanMelee(a0->field_80, v13))
        {
            if (v13->field_508 && !(v0 = &v13->field_380, v14 = CPlayerMelee::GetEnemyPrepunch(v0, 0), a0->field_80 != v14 || !v13->field_968 || v13->field_968->field_88 - 1 > 1))
            {
                if (CPlayerMelee::GetEnemyPrepunch(v0, v14))
                {
                    CBasePlayer::Swoop(v13);
                    return v15;
                }
            }
            else
            {
                if (v13->field_380 <= 1 && CBasePlayer::UseKi(a0->field_80, 35))
                {
                    CSwoop::GetCurrentDirection(&v3, &a0->field_80->field_504);
                    v6 = v3;
                    v7 = v4;
                    v8 = v5;
                    v1 = CPlayerMelee::Powerhit(&a0->field_80->field_380, v13, &v6, a0->field_80->field_504);
                }
            }
            if (v1)
                goto LABEL_4d3008;
            UTIL_WeaponTimeBase();
            v16 = 0.65;
        }
        else
        {
LABEL_4d3022:
            UTIL_WeaponTimeBase();
            v16 = 0.1;
        }
    }
    v2 = (float)(v17 + v16);
    v18 = v2;
    a0->field_a0 = (float)v18;
    a0->field_9c = (float)v18;
    return v16;
}

