// LetGoDirection__12CPlayerMeleeP12melee_move_s @0x105d20 size=368
typedef struct st_505d20_1 {
    char padding_0[12];
    struct st_505d20_2 *field_c;
} st_505d20_1;

typedef struct st_505d20_4 {
    char padding_0[4];
    int field_4;
    unsigned int field_8;
    float field_c;
    unsigned int field_10;
} st_505d20_4;

typedef struct st_505d20_3 {
    char padding_0[120];
    unsigned int field_78;
    char padding_7c[48];
    unsigned int field_ac;
    char padding_b0[60];
    unsigned int field_ec;
    char padding_f0[52];
    int field_124;
    int field_128;
    int field_12c;
    int field_130;
    char padding_134[76];
    struct st_505d20_1 *field_180;
} st_505d20_3;

typedef struct st_505d20_2 {
    unsigned int field_0;
} st_505d20_2;

typedef struct st_505d20_0 {
    float field_0;
} st_505d20_0;

extern st_505d20_0 *gpGlobals;

int LetGoDirection__12CPlayerMeleeP12melee_move_s(st_505d20_3 *a0, st_505d20_4 *a1)
{
    float v5;  // 128
    double v6;  // mm7
    unsigned int v7;  // eax
    st_505d20_4 *v0;  // [bp-0x34]
    float v1;  // [bp-0x14]
    float v2;  // [bp-0x10]
    float v3;  // [bp-0xc]
    char v4;  // [bp-0x5]

    v4 = 0;
    if (!a1)
    {
        return v4;
    }
    else if (!a1->field_10)
    {
        a1->field_10 = 1;
        v5 = *(float *)gpGlobals;
        a1->field_c = v5;
        *(float *)&a0->field_ac = v5;
        if (!CPlayerMelee::UseAttackerMoves(a0))
            return v4;
        if (!a0->field_78)
        {
            CPlayerMelee::TotalCmbTime(a0);
            v3 = v5;
            CPlayerMelee::GetStunTime(a0->field_130);
            v2 = v5;
            v6 = v3;
            if (v6 > v2)
            {
                CPlayerMelee::TotalCmbTimeNC(a0);
                v6 = v2 - v6 + *(float *)&a1->field_8;
                a1->field_c = (float)v6;
                v4 = 1;
            }
            if (!v4)
            {
                v1 = v2 - v3;
                v6 = v1;
                if (v6 < *(float *)a0->field_180->field_c(a0))
                    v4 = 1;
            }
            CPlayerMelee::GetCmbTime(a0, a1);
            CPlayerMelee::MeleeHudFlags(a0, 5, a1->field_4, (float)v6);
        }
        if (CPlayerMelee::IsDirectionless(a0, a1->field_4))
            return v4;
        if (a0->field_ec)
        {
            v0 = a1;
            v7 = a0->field_12c;
        }
        else if (a0->field_78)
        {
            v0 = a1;
            v7 = a0->field_124;
        }
        else
        {
            CPlayerMelee::SendBlockFlash(a0, a0->field_128, a1);
            return v4;
        }
        CPlayerMelee::SendBlockFlash(a0, v7);
        return v4;
    }
    else
    {
        return v4;
    }
}

