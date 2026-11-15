// StartSpectator__11CBasePlayerG6VectorT1 @0xf8150 size=1168
typedef struct st_4f8150_0 {
    char padding_0[140];
    struct st_4f8150_1 *field_8c;
} st_4f8150_0;

typedef struct st_4f8150_7 {
    char padding_0[36];
    unsigned int field_24;
    char padding_28[4];
    unsigned int field_2c;
    unsigned int field_30;
    char padding_34[40];
    struct st_4f8150_3 *field_5c;
    char padding_60[24];
    unsigned int field_78;
    char padding_7c[20];
    char field_90;
} st_4f8150_7;

typedef struct st_4f8150_4 {
    struct st_4f8150_5 *field_0;
    char padding_4[92];
    struct st_4f8150_0 *field_60;
    char padding_64[684];
    char field_310;
    char padding_311[23];
    unsigned int field_328;
    char padding_32c[1036];
    unsigned int field_738;
    char padding_73c[84];
    unsigned int field_790;
    char padding_794[360];
    unsigned int field_8fc;
    char padding_900[12];
    char field_90c;
    char padding_90d[35];
    unsigned int field_930;
    char padding_934[4];
    unsigned int field_938;
    unsigned int field_93c;
    char padding_940[40];
    struct st_4f8150_3 *field_968;
    char padding_96c[24];
    unsigned int field_984;
    char padding_988[20];
    char field_99c;
} st_4f8150_4;

typedef struct st_4f8150_2 {
    char padding_0[260];
    struct st_4f8150_1 *field_104;
} st_4f8150_2;

typedef struct st_4f8150_1 {
    unsigned int field_0;
} st_4f8150_1;

typedef struct st_4f8150_5 {
    char padding_0[80];
    unsigned int field_50;
    unsigned int field_54;
    unsigned int field_58;
    char padding_5c[24];
    unsigned int field_74;
    unsigned int field_78;
    unsigned int field_7c;
    char padding_80[32];
    unsigned int field_a0;
    char padding_a4[100];
    unsigned int field_108;
    unsigned int field_10c;
    char padding_110[8];
    unsigned int field_118;
    char padding_11c[68];
    unsigned int field_160;
    unsigned int field_164;
    char padding_168[4];
    unsigned int field_16c;
    unsigned int field_170;
    unsigned int field_174;
    unsigned int field_178;
    unsigned int field_17c;
    char padding_180[44];
    unsigned int field_1ac;
    char padding_1b0[88];
    unsigned int field_208;
    unsigned int field_20c;
    char padding_210[4];
    unsigned int field_214;
    char padding_218[44];
    unsigned int field_244;
} st_4f8150_5;

typedef struct st_4f8150_3 {
    char padding_0[96];
    struct st_4f8150_2 *field_60;
} st_4f8150_3;

extern unsigned int g_5a4bfc;
extern unsigned int gmsgCurWeapon;
extern unsigned int gmsgScoreInfo;
extern unsigned int gmsgTeamInfo;
extern unsigned int gmsgSetFOV;
extern unsigned int gmsgSpectator;
extern unsigned int g_vecZero;
extern unsigned int g_vecZero+4;
extern unsigned int g_vecZero+8;
extern st_4f8150_1 *g_engfuncs.pfnMessageBegin;
extern st_4f8150_1 *g_engfuncs.pfnMessageEnd;
extern st_4f8150_1 *g_engfuncs.pfnWriteByte;
extern st_4f8150_1 *g_engfuncs.pfnWriteShort;
extern st_4f8150_1 *g_engfuncs.pfnWriteString;
extern st_4f8150_1 *g_engfuncs.pfnIndexOfEdict;

unsigned int * StartSpectator__11CBasePlayerG6VectorT1(st_4f8150_4 *a0, int a1, unsigned int *a2)
{
    st_4f8150_7 *v5;  // esi
    st_4f8150_3 *v6;  // edx
    unsigned int *v7;  // ecx
    unsigned int *v8;  // edx
    unsigned int *v9;  // ecx
    unsigned int v10;  // eax
    unsigned int v11;  // eax
    unsigned int v12;  // eax
    unsigned int v0;  // [bp-0x3c]
    unsigned int v1;  // [bp-0x10]
    unsigned short v2;  // [bp-0xc]
    unsigned short v3;  // [bp-0xa]
    int v4;  // [bp-0x8]

    if (a0->field_0->field_244)
        return a0->field_0;
    if (a0->field_328)
        CBasePlayer::StopObserving(a0);
    g_engfuncs.pfnMessageBegin(5, 23, &a0->field_0->padding_0[8], 0);
    g_engfuncs.pfnWriteByte(125);
    v0 = g_engfuncs.pfnIndexOfEdict(a0->field_0->field_208) & 0xff;
    g_engfuncs.pfnWriteByte(v0);
    g_engfuncs.pfnMessageEnd(v0);
    if (a0->field_968)
        a0->field_968->field_60->field_104(a0->field_968, 0);
    v5 = &a0->field_90c;
    if (EHANDLE::__opi(v5))
    {
        v6 = EHANDLE::__rf(v5);
        (*(int *)&v6->field_60->padding_0[184])(v6, a0, a0, 0, 0);
        EHANDLE::__as(v5, 0);
    }
    if (a0->field_60->field_8c(a0))
        CBasePlayer::RemoveSpecialModes(a0);
    CBasePlayer::SetSuitUpdate(a0, 0, 0, 0);
    g_engfuncs.pfnMessageBegin(1, gmsgCurWeapon, 0, a0->field_0->field_208);
    g_engfuncs.pfnWriteByte(0);
    g_engfuncs.pfnWriteByte(0xff);
    v0 = 0xff;
    g_engfuncs.pfnWriteByte(v0);
    g_engfuncs.pfnMessageEnd(v0);
    a0->field_93c = 0;
    a0->field_938 = 0;
    a0->field_0->field_214 = 0;
    g_engfuncs.pfnMessageBegin(1, gmsgSetFOV, 0, a0->field_0->field_208);
    v0 = 0;
    g_engfuncs.pfnWriteByte(v0);
    g_engfuncs.pfnMessageEnd(v0);
    a0->field_930 = 9;
    a0->field_310 = a0->field_310 | 32;
    a0->field_0->field_118 = 128;
    v7 = a0->field_0;
    v7[93] = g_vecZero;
    v7[94] = g_vecZero+4;
    v7[95] = g_vecZero+8;
    v8 = a0->field_0;
    v8[29] = *a2;
    v8[30] = a2[1];
    v8[31] = a2[2];
    v9 = &a0->field_0->field_74;
    v8[20] = a0->field_0->field_74;
    v8[21] = v9[1];
    v8[22] = v9[2];
    a0->field_0->field_a0 = 1;
    a0->field_0->field_10c = 0;
    a0->field_0->field_16c = 0;
    a0->field_0->field_108 = 0;
    a0->field_0->field_170 = 3;
    a0->field_0->field_160 = 0x3f800000;
    a0->field_0->field_1ac = 0;
    a0->field_0->field_20c = 0;
    v1 = &g_5a4bfc;
    a0->field_99c = 0;
    a0->field_8fc = 1;
    g_engfuncs.pfnMessageBegin(2, gmsgTeamInfo, 0, 0);
    v10 = g_engfuncs.pfnIndexOfEdict(a0->field_0->field_208);
    g_engfuncs.pfnWriteByte(v10);
    g_engfuncs.pfnWriteString(v1);
    g_engfuncs.pfnMessageEnd();
    g_engfuncs.pfnMessageBegin(2, gmsgScoreInfo, 0, 0);
    v11 = g_engfuncs.pfnIndexOfEdict(a0->field_0->field_208);
    g_engfuncs.pfnWriteByte(v11);
    v3 = __fnstcw();
    v2 = v3 | 0xc00;
    v4 = (int)*(float *)&a0->field_0->field_164;
    g_engfuncs.pfnWriteShort(v4);
    g_engfuncs.pfnWriteShort(a0->field_984);
    g_engfuncs.pfnWriteShort(a0->field_738);
    g_engfuncs.pfnWriteShort(0);
    g_engfuncs.pfnWriteShort(0);
    g_engfuncs.pfnMessageEnd();
    CBasePlayer::RemoveAllItems(a0, 0);
    UTIL_SetOrigin(a0->field_0, a1);
    a0->field_790 = 0;
    CBasePlayer::Spectator_SetMode(a0, 1);
    g_engfuncs.pfnMessageBegin(2, gmsgSpectator, 0, 0);
    v12 = g_engfuncs.pfnIndexOfEdict(a0->field_0->field_208);
    g_engfuncs.pfnWriteByte(v12);
    g_engfuncs.pfnWriteByte(1);
    return g_engfuncs.pfnMessageEnd();
}

