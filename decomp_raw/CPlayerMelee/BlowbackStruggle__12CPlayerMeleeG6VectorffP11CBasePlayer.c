// BlowbackStruggle__12CPlayerMeleeG6VectorffP11CBasePlayer @0x10bbf0 size=678
typedef struct st_50bbf0_0 {
    char padding_0[140];
    struct st_50bbf0_1 *field_8c;
} st_50bbf0_0;

typedef struct st_50bbf0_3 {
    char padding_0[128];
    unsigned int field_80;
    char padding_84[160];
    struct st_50bbf0_2 *field_124;
} st_50bbf0_3;

typedef struct st_50bbf0_1 {
    unsigned int field_0;
} st_50bbf0_1;

typedef struct st_50bbf0_2 {
    char padding_0[96];
    struct st_50bbf0_0 *field_60;
} st_50bbf0_2;

unsigned int BlowbackStruggle__12CPlayerMeleeG6VectorffP11CBasePlayer(st_50bbf0_3 *a0, float *a1, float a2, float a3, st_50bbf0_2 *a4)
{
    st_50bbf0_2 *v12;  // esi
    unsigned int v13;  // eax
    char *v0;  // [bp-0x48]
    float v1;  // [bp-0x44]
    float v2;  // [bp-0x40]
    float v3;  // [bp-0x3c]
    float v4;  // [bp-0x38]
    float v5;  // [bp-0x34]
    float v6;  // [bp-0x30]
    float v7;  // [bp-0x2c]
    st_50bbf0_2 *v8;  // [bp-0x28]
    float v9;  // [bp-0x24]
    float v10;  // [bp-0x20]
    float v11;  // [bp-0x1c]

    if (a3 < a2 && CBasePlayer::UseKi(a0->field_124, 35))
    {
        v8 = a0->field_124;
        v12 = a4;
    }
    else
    {
        if (!CBasePlayer::UseKi(a4, 35))
        {
            v9 = -*a1;
            v10 = -a1[1];
            v11 = -a1[2];
            v7 = 200.0f;
            v6 = 400.0f;
            v5 = 700.0f;
            CPlayerMelee::StartToss(a0, a4, 0, &v9, 700.0f, 400.0f, 200.0f, 0x3f800000);
            v9 = *a1;
            v10 = a1[1];
            v11 = a1[2];
            return CPlayerMelee::StartToss(&a4[8].field_60, a0->field_124, 0, &v9, v5, v6, v7, 0x3f800000);
        }
        v8 = a4;
        v12 = a0->field_124;
        v9 = -*a1;
        v10 = -a1[1];
        v11 = -a1[2];
        *a1 = v9;
        a1[1] = v10;
        a1[2] = v11;
    }
    if (a0->field_80)
    {
        v9 = *a1;
        v10 = a1[1];
        v11 = a1[2];
        return CPlayerMelee::Powerhit(&v8[8].field_60, 0, v12, &v9, 4, 7.699999809265137f, 1400.0f, 800.0f, 450.0f, 1.5f);
    }
    v9 = *a1;
    v10 = a1[1];
    v11 = a1[2];
    v4 = 1.5f;
    v3 = 300.0f;
    v2 = 500.0f;
    v1 = 900.0f;
    v0 = &v9;
    CPlayerMelee::Powerhit(&v8[8].field_60, 0, v12, &v9, 4, 7.699999809265137f, 900.0f, 500.0f, 300.0f, 1.5f);
    v13 = v12->field_60->field_8c(v12);
    if (!v13)
        return v13;
    v9 = -*a1;
    v10 = -a1[1];
    v11 = -a1[2];
    return CPlayerMelee::Powerhit(&v12[8].field_60, 0, v8, v0, 4, 4.550000190734863f, v1, v2, v3, v4);
}

