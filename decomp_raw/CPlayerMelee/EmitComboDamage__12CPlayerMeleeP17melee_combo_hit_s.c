// EmitComboDamage__12CPlayerMeleeP17melee_combo_hit_s @0x103660 size=306
typedef struct st_503660_4 {
    char padding_0[8];
    float field_8;
    unsigned int field_c;
    unsigned int field_10;
    struct st_503660_1 *field_14;
} st_503660_4;

typedef struct st_503660_3 {
    char padding_0[292];
    struct st_503660_1 *field_124;
    struct st_503660_2 *field_128;
} st_503660_3;

typedef struct st_503660_1 {
    unsigned int field_0;
} st_503660_1;

typedef struct st_503660_0 {
    char padding_0[52];
    struct st_503660_1 *field_34;
} st_503660_0;

typedef struct st_503660_2 {
    char padding_0[96];
    struct st_503660_0 *field_60;
} st_503660_2;

st_503660_4 * EmitComboDamage__12CPlayerMeleeP17melee_combo_hit_s(st_503660_3 *a0, st_503660_4 *a1)
{
    double v4;  // mm7
    st_503660_4 *v6;  // eax
    float v0;  // [bp-0x10]
    int v1;  // [bp-0xc]
    unsigned short v2;  // [bp-0x8]
    unsigned short v3;  // [bp-0x6]

    if (!a1)
    {
        return v6;
    }
    else if (a1->field_c)
    {
        return a1;
    }
    else if (a1->field_10)
    {
        a1->field_c = 1;
        if (a1->field_8 != 0.0f)
        {
            CPlayerMelee::GetPowerRatio(a0, a0->field_128);
            v0 = a1->field_8 * a1->field_8;
            v4 = 1.0;
            if (1.0 > v0 || (v4 = 6.0, 6.0 < v0))
                v0 = (float)v4;
            a0->field_128->field_60->field_34(a0->field_128, *(int *)a0->field_124, *(int *)a0->field_124, v0, 0x2000000);
            CPlayerMelee::EmitExeSound(a0, CPlayerMelee::GetSoundEdict(a0));
            v3 = __fnstcw();
            v2 = v3 | 0xc00;
            v1 = (int)v0;
            CPlayerMelee::MeleeText(a0, 3, v1);
        }
        if (!a1->field_14)
            return a1;
        a1->field_14(a0->field_124, a0->field_128);
        return a1;
    }
    else
    {
        return a1;
    }
}

