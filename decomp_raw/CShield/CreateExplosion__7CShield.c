// CreateExplosion__7CShield @0x118f20 size=222
typedef struct st_518f20_0 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[500];
    unsigned int field_208;
} st_518f20_0;

typedef struct st_518f20_1 {
    struct st_518f20_0 *field_0;
    char padding_4[96];
    unsigned int field_64;
} st_518f20_1;

typedef struct st_518f20_2 {
    unsigned int field_0;
} st_518f20_2;

extern unsigned int gmsgBlobStart;
extern st_518f20_2 *g_engfuncs.pfnMessageBegin;
extern st_518f20_2 *g_engfuncs.pfnMessageEnd;
extern st_518f20_2 *g_engfuncs.pfnWriteByte;
extern st_518f20_2 *g_engfuncs.pfnWriteShort;
extern st_518f20_2 *g_engfuncs.pfnWriteCoord;
extern st_518f20_2 *g_engfuncs.pfnIndexOfEdict;

int CreateExplosion__7CShield(st_518f20_1 *a0)
{
    unsigned int v3;  // eax
    unsigned int v0;  // [bp-0x1c]
    unsigned int v1;  // [bp-0x18]
    unsigned int v2;  // [bp-0x14]

    g_engfuncs.pfnMessageBegin(2, gmsgBlobStart, &a0->field_0->field_8, 0, v0, v1, v2);
    g_engfuncs.pfnWriteByte(0);
    g_engfuncs.pfnWriteCoord(a0->field_0->field_8);
    g_engfuncs.pfnWriteCoord(a0->field_0->field_c);
    g_engfuncs.pfnWriteCoord(a0->field_0->field_10);
    v3 = g_engfuncs.pfnIndexOfEdict(a0->field_0->field_208);
    g_engfuncs.pfnWriteShort(v3);
    g_engfuncs.pfnWriteShort(a0->field_64);
    return g_engfuncs.pfnMessageEnd();
}

