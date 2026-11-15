// GiveBean__11CBasePlayeri @0xf5da0 size=156
typedef struct st_4f5da0_1 {
    struct st_4f5da0_0 *field_0;
    char padding_4[1880];
    int field_75c;
} st_4f5da0_1;

typedef struct st_4f5da0_0 {
    char padding_0[520];
    unsigned int field_208;
} st_4f5da0_0;

typedef struct st_4f5da0_2 {
    unsigned int field_0;
} st_4f5da0_2;

extern unsigned int gmsgSensuBean;
extern st_4f5da0_2 *g_engfuncs.pfnMessageBegin;
extern st_4f5da0_2 *g_engfuncs.pfnMessageEnd;
extern st_4f5da0_2 *g_engfuncs.pfnWriteByte;

unsigned int GiveBean__11CBasePlayeri(st_4f5da0_1 *a0, unsigned int a1)
{
    int v0;  // [bp-0x2c]

    if (a0->field_75c > 4)
        return 0;
    a0->field_75c = a0->field_75c + a1;
    if (a0->field_75c > 5)
        a0->field_75c = 5;
    g_engfuncs.pfnMessageBegin(1, gmsgSensuBean, 0, a0->field_0->field_208);
    v0 = a0->field_75c;
    g_engfuncs.pfnWriteByte(v0);
    g_engfuncs.pfnMessageEnd(v0);
    return 1;
}

