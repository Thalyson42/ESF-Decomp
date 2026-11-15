// AddEntEntTrail__11CBeamAttackiiiiiiiiiG6Vector @0x901d0 size=373
typedef struct st_4901d0_1 {
    char padding_0[520];
    unsigned int field_208;
} st_4901d0_1;

typedef struct st_4901d0_0 {
    unsigned int field_0;
} st_4901d0_0;

extern unsigned int gmsgEntEntTrail;
extern st_4901d0_0 *g_engfuncs.pfnMessageBegin;
extern st_4901d0_0 *g_engfuncs.pfnMessageEnd;
extern st_4901d0_0 *g_engfuncs.pfnWriteByte;
extern st_4901d0_0 *g_engfuncs.pfnWriteShort;
extern st_4901d0_0 *g_engfuncs.pfnWriteLong;
extern st_4901d0_0 *g_engfuncs.pfnWriteCoord;
extern st_4901d0_0 *g_engfuncs.pfnIndexOfEdict;

int AddEntEntTrail__11CBeamAttackiiiiiiiiiG6Vector(st_4901d0_1 **a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, int a8, unsigned int a9, float *a10)
{
    unsigned int v6;  // eax
    unsigned int v0;  // [bp-0x2c]
    unsigned int v1;  // [bp-0x28]
    unsigned int v2;  // [bp-0x24]
    unsigned short v3;  // [bp-0xc]
    unsigned short v4;  // [bp-0xa]
    int v5;  // [bp-0x8]

    g_engfuncs.pfnMessageBegin(2, gmsgEntEntTrail, 0, 0, v0, v1, v2);
    g_engfuncs.pfnWriteLong(a1);
    v6 = g_engfuncs.pfnIndexOfEdict(*a0->field_208);
    g_engfuncs.pfnWriteLong(v6);
    g_engfuncs.pfnWriteByte(a2);
    g_engfuncs.pfnWriteShort(a3);
    g_engfuncs.pfnWriteShort(a4);
    g_engfuncs.pfnWriteShort(a5);
    g_engfuncs.pfnWriteShort(a6);
    g_engfuncs.pfnWriteShort(a7);
    v4 = __fnstcw();
    v3 = v4 | 0xc00;
    v5 = (int)((double)a8 * 0.1);
    g_engfuncs.pfnWriteByte(v5);
    g_engfuncs.pfnWriteByte(a9);
    g_engfuncs.pfnWriteCoord(*a10);
    g_engfuncs.pfnWriteCoord(a10[1]);
    g_engfuncs.pfnWriteCoord(a10[2]);
    return g_engfuncs.pfnMessageEnd();
}

