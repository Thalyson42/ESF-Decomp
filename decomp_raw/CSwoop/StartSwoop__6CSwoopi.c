// StartSwoop__6CSwoopi @0x1240b0 size=327
typedef struct st_5240b0_1 {
    struct st_5240b0_0 *field_0;
    char padding_4[796];
    unsigned int field_320;
    char padding_324[88];
    unsigned int field_37c;
    char field_380;
    char padding_381[1003];
    unsigned int field_76c;
} st_5240b0_1;

typedef struct st_5240b0_0 {
    char padding_0[264];
    unsigned int field_108;
    char padding_10c[252];
    unsigned int field_208;
    char padding_20c[124];
    float field_288;
    float field_28c;
} st_5240b0_0;

typedef struct st_5240b0_2 {
    int field_0;
    unsigned int field_4;
    unsigned int field_8;
    char padding_c[4];
    unsigned int field_10;
    float field_14;
    char padding_18[96];
    struct st_5240b0_1 *field_78;
} st_5240b0_2;

typedef struct st_5240b0_3 {
    float field_0;
} st_5240b0_3;

extern st_5240b0_3 *gpGlobals;

st_5240b0_1 * StartSwoop__6CSwoopi(double a0, double a1, st_5240b0_2 *a2, int a3)
{
    unsigned int v0;  // edi
    double v1;  // mm7
    unsigned int v2;  // edx
    int v3;  // eax
    unsigned int v4;  // eax
    st_5240b0_1 *v5;  // eax

    if (a2->field_78->field_320)
        CBasePlayer::StopFly(a2->field_78);
    v0 = a2->field_4;
    a2->field_4 = 1;
    a2->field_0 = a3;
    CSwoop::GetSwoopSpeed(a2);
    CSwoop::GetSwoopBoostSpeed(a2);
    a2->field_14 = (float)(v1 + (float)v1);
    *(float *)&a2->field_10 = *(float *)gpGlobals;
    a2->field_78->field_37c = 1;
    *(float *)&a2->field_78->field_0->padding_10c[16] = 1.0000000116860974e-07f;
    a2->field_78->field_0->field_108 = 11;
    CPlayerMelee::RemoveAllAnims(&a2->field_78->field_380);
    a2->field_78->field_0->field_288 = (float)a3;
    a2->field_78->field_0->field_28c = a2->field_14;
    if (v0)
        a2->field_8 = 1;
    if (!a2->field_78->field_76c)
    {
        v4 = CAura::Create(a2->field_78);
        v5 = a2->field_78;
        v5->field_76c = v4;
        return v5;
    }
    if (v0)
    {
        v2 = a2->field_78->field_0->field_208;
        v3 = "weapons/chainswoop.wav";
    }
    else
    {
        v2 = a2->field_78->field_0->field_208;
        v3 = "weapons/swoop.wav";
    }
    return EMIT_SOUND_DYN(v2, 3, v3, 0x3f800000, 0.800000011920929f, 0, 100);
}

