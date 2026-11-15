// Zap__10CLightningRC6VectorT1 @0xb1a70 size=639
typedef struct st_4b1a70_1 {
    struct st_4b1a70_2 *field_0;
    char padding_4[108];
    float field_70;
    unsigned int field_74;
    unsigned int field_78;
    char padding_7c[4];
    unsigned int field_80;
    char padding_84[4];
    unsigned int field_88;
    char padding_8c[4];
    unsigned int field_90;
} st_4b1a70_1;

typedef struct st_4b1a70_2 {
    char padding_0[312];
    float field_138;
    char padding_13c[16];
    float field_14c;
    float field_150;
    float field_154;
    float field_158;
} st_4b1a70_2;

typedef struct st_4b1a70_0 {
    unsigned int field_0;
} st_4b1a70_0;

extern st_4b1a70_0 *g_engfuncs.pfnMessageBegin;
extern st_4b1a70_0 *g_engfuncs.pfnMessageEnd;
extern st_4b1a70_0 *g_engfuncs.pfnWriteByte;
extern st_4b1a70_0 *g_engfuncs.pfnWriteShort;
extern st_4b1a70_0 *g_engfuncs.pfnWriteCoord;

int Zap__10CLightningRC6VectorT1(st_4b1a70_1 *a0, float *a1, float *a2)
{
    unsigned int v0;  // [bp-0x3c]
    unsigned int v1;  // [bp-0x38]
    unsigned int v2;  // [bp-0x34]
    int v3;  // [bp-0xc]
    unsigned short v4;  // [bp-0x8]
    unsigned short v5;  // [bp-0x6]

    g_engfuncs.pfnMessageBegin(0, 23, 0, 0, v0, v1, v2);
    g_engfuncs.pfnWriteByte(0);
    g_engfuncs.pfnWriteCoord(*a1);
    g_engfuncs.pfnWriteCoord(a1[1]);
    g_engfuncs.pfnWriteCoord(a1[2]);
    g_engfuncs.pfnWriteCoord(*a2);
    g_engfuncs.pfnWriteCoord(a2[1]);
    g_engfuncs.pfnWriteCoord(a2[2]);
    g_engfuncs.pfnWriteShort(a0->field_88);
    g_engfuncs.pfnWriteByte(a0->field_90);
    v5 = __fnstcw();
    v4 = v5 | 0xc00;
    v3 = (int)a0->field_0->field_138;
    g_engfuncs.pfnWriteByte(v3);
    v5 = __fnstcw();
    v4 = v5 | 0xc00;
    v3 = (int)(10.0 * a0->field_70);
    g_engfuncs.pfnWriteByte(v3);
    g_engfuncs.pfnWriteByte(a0->field_74);
    g_engfuncs.pfnWriteByte(a0->field_78);
    v5 = __fnstcw();
    v4 = v5 | 0xc00;
    v3 = (int)a0->field_0->field_150;
    g_engfuncs.pfnWriteByte(v3);
    v5 = __fnstcw();
    v4 = v5 | 0xc00;
    v3 = (int)a0->field_0->field_154;
    g_engfuncs.pfnWriteByte(v3);
    v5 = __fnstcw();
    v4 = v5 | 0xc00;
    v3 = (int)a0->field_0->field_158;
    g_engfuncs.pfnWriteByte(v3);
    v5 = __fnstcw();
    v4 = v5 | 0xc00;
    v3 = (int)a0->field_0->field_14c;
    g_engfuncs.pfnWriteByte(v3);
    g_engfuncs.pfnWriteByte(a0->field_80);
    g_engfuncs.pfnMessageEnd();
    return CBeam::DoSparks(a0, a1, a2);
}

