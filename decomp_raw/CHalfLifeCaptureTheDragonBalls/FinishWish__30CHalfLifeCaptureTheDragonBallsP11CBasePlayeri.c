// FinishWish__30CHalfLifeCaptureTheDragonBallsP11CBasePlayeri @0x9ba70 size=471
typedef struct st_49ba70_3 {
    char padding_0[204];
    struct st_49ba70_4 *field_cc;
} st_49ba70_3;

typedef struct st_49ba70_1 {
    struct st_49ba70_2 *field_0;
    char padding_4[836];
    unsigned int field_348;
    char padding_34c[1004];
    unsigned int field_738;
    char padding_73c[584];
    unsigned int field_984;
} st_49ba70_1;

typedef struct st_49ba70_4 {
    unsigned int field_0;
} st_49ba70_4;

typedef struct st_49ba70_2 {
    char padding_0[356];
    unsigned int field_164;
    char padding_168[160];
    unsigned int field_208;
    unsigned int field_20c;
} st_49ba70_2;

typedef struct st_49ba70_5 {
    char padding_0[68];
    struct st_49ba70_3 *field_44;
    char padding_48[540];
    unsigned int field_264;
    unsigned int field_268;
    unsigned int field_26c;
    float field_270;
    char padding_274[32];
    int field_294;
} st_49ba70_5;

typedef struct st_49ba70_0 {
    float field_0;
} st_49ba70_0;

extern unsigned int gmsgScoreInfo;
extern unsigned int gmsgDragonBallEnt;
extern st_49ba70_4 *g_engfuncs.pfnMessageBegin;
extern st_49ba70_4 *g_engfuncs.pfnMessageEnd;
extern st_49ba70_4 *g_engfuncs.pfnWriteByte;
extern st_49ba70_4 *g_engfuncs.pfnWriteShort;
extern st_49ba70_4 *g_engfuncs.pfnIndexOfEdict;
extern st_49ba70_0 *gpGlobals;

unsigned int * FinishWish__30CHalfLifeCaptureTheDragonBallsP11CBasePlayeri(st_49ba70_5 *a0, st_49ba70_1 *a1, unsigned int a2)
{
    unsigned int v6;  // eax
    unsigned int v7;  // eax
    int i;  // edi
    unsigned int v0;  // [bp-0x2c]
    unsigned int v1;  // [bp-0x28]
    unsigned int v2;  // [bp-0x24]
    int v3;  // [bp-0xc]
    unsigned short v4;  // [bp-0x8]
    unsigned short v5;  // [bp-0x6]

    a1->field_348 = 0;
    a0->field_26c = 0;
    a1->field_738 = a1->field_738 + a2;
    g_engfuncs.pfnMessageBegin(2, gmsgScoreInfo, 0, 0, v0, v1, v2);
    v6 = g_engfuncs.pfnIndexOfEdict(a1->field_0->field_208);
    g_engfuncs.pfnWriteByte(v6);
    v5 = __fnstcw();
    v4 = v5 | 0xc00;
    v3 = (int)*(float *)&a1->field_0->field_164;
    g_engfuncs.pfnWriteShort(v3);
    g_engfuncs.pfnWriteShort(a1->field_984);
    g_engfuncs.pfnWriteShort(a1->field_738);
    g_engfuncs.pfnWriteShort(a1->field_0->field_20c);
    v7 = a0->field_44->field_cc(a0, &a1[1].padding_4[16]);
    g_engfuncs.pfnWriteShort(v7 + 1);
    g_engfuncs.pfnMessageEnd();
    CShenlong::GrantWish(a0->field_294);
    a0->field_294 = 0;
    i = 0;
    do
    {
        g_engfuncs.pfnMessageBegin(2, gmsgDragonBallEnt, 0, 0);
        g_engfuncs.pfnWriteByte(i);
        g_engfuncs.pfnWriteShort(0);
        g_engfuncs.pfnMessageEnd();
        i += 1;
    } while (i <= 6);
    a0->field_268 = 1;
    a0->field_264 = 0;
    a0->field_270 = (float)(*(float *)gpGlobals + 45.0);
    return gpGlobals;
}

