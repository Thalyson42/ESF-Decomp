// StopThrow__12CPlayerMeleei @0x102f60 size=561
typedef struct st_502f60_1 {
    struct st_502f60_0 *field_0;
    char padding_4[888];
    unsigned int field_37c;
    char padding_380[388];
    char field_504;
    char padding_505[591];
    unsigned int field_754;
} st_502f60_1;

typedef struct st_502f60_2 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    unsigned int field_14;
    char padding_18[8];
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
    unsigned int field_2c;
    char padding_30[4];
    unsigned int field_34;
    char padding_38[4];
    unsigned int field_3c;
    char padding_40[12];
    unsigned int field_4c;
    unsigned int field_50;
    unsigned int field_54;
    char padding_58[12];
    unsigned int field_64;
    unsigned int field_68;
    char padding_6c[72];
    float field_b4;
    char padding_b8[84];
    unsigned int field_10c;
    char padding_110[16];
    unsigned int field_120;
    struct st_502f60_1 *field_124;
} st_502f60_2;

typedef struct st_502f60_0 {
    char padding_0[264];
    unsigned int field_108;
    char padding_10c[16];
    unsigned int field_11c;
    unsigned int field_120;
    char padding_124[129];
    char field_1a5;
    char padding_1a6[98];
    unsigned int field_208;
    char padding_20c[124];
    unsigned int field_288;
    unsigned int field_28c;
    unsigned int field_290;
} st_502f60_0;

typedef struct st_502f60_3 {
    float field_0;
} st_502f60_3;

typedef struct st_502f60_4 {
    unsigned int field_0;
} st_502f60_4;

extern st_502f60_4 *g_engfuncs.pfnIndexOfEdict;
extern st_502f60_3 *gpGlobals;

unsigned int StopThrow__12CPlayerMeleei(st_502f60_2 *a0, unsigned int a1)
{
    st_502f60_0 *v5;  // edx
    unsigned int v0;  // [bp-0x38]
    unsigned int v1;  // [bp-0x34]
    unsigned int v2;  // [bp-0x30]
    unsigned int v3;  // [bp-0x2c]

    if (a0->field_64 - 4 <= 1)
        UTIL_Model_RemoveAll(g_engfuncs.pfnIndexOfEdict(a0->field_124->field_0->field_208));
    v0 = 1;
    if (a0->field_64 == 3)
    {
        v0 = 0;
    }
    else if (!a1)
    {
        CSwoop::AddAllToNullKeyset(&a0->field_124->field_504);
        CSwoop::ResetAllDT(&a0->field_124->field_504);
    }
    if (a0->field_3c && !a1)
    {
        a0->field_10c = 1;
        a0->field_120 = a0->field_68;
        a0->field_b4 = (float)(1.0 + *(float *)gpGlobals);
    }
    CPlayerMelee::RemoveStruggleBar(a0);
    CPlayerMelee::RemoveAllAnims(a0);
    a0->field_68 = 0;
    a0->field_2c = 0;
    a0->field_28 = 0;
    a0->field_34 = 0;
    a0->field_3c = 0;
    a0->field_124->field_37c = 0;
    a0->field_64 = 0;
    a0->field_4 = 0;
    a0->field_8 = 0;
    a0->field_c = 0;
    a0->field_10 = 0;
    a0->field_14 = 0;
    a0->field_20 = 0;
    a0->field_0 = 0;
    *(float *)&a0->field_24 = *(float *)gpGlobals;
    v1 = 0;
    v2 = 0;
    v3 = 0;
    a0->field_4c = v1;
    a0->field_50 = v2;
    a0->field_54 = v3;
    a0->field_124->field_754 = 0x3f800000;
    a0->field_124->field_0->field_120 = 0x3f800000;
    a0->field_124->field_0->field_11c = 0x3f800000;
    if (!v0 || a0->field_124->field_0->field_1a5 & 2)
        a0->field_124->field_0->field_108 = 3;
    else
        CBasePlayer::StartFly(a0->field_124);
    v5 = a0->field_124->field_0;
    v1 = 0;
    v2 = 0;
    v3 = 0;
    v5->field_288 = v1;
    v5->field_28c = v2;
    v5->field_290 = v3;
    return v3;
}

