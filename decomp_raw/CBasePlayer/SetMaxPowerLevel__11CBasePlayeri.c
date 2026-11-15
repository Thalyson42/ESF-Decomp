// SetMaxPowerLevel__11CBasePlayeri @0xf2b80 size=141
typedef struct st_4f2b80_0 {
    char padding_0[804];
    unsigned int field_324;
    char padding_328[1056];
    int field_748;
} st_4f2b80_0;

typedef struct st_4f2b80_2 {
    char padding_0[240];
    struct st_4f2b80_1 *field_f0;
} st_4f2b80_2;

typedef struct st_4f2b80_1 {
    unsigned int field_0;
} st_4f2b80_1;

typedef struct st_4f2b80_3 {
    char padding_0[68];
    struct st_4f2b80_2 *field_44;
} st_4f2b80_3;

extern st_4f2b80_3 *g_pGameRules;
extern st_4f2b80_1 *g_engfuncs.pfnAlertMessage;

int SetMaxPowerLevel__11CBasePlayeri(st_4f2b80_0 *a0, int a1)
{
    int v0;  // edx

    v0 = 0x2faf07ff;
    if (a0->field_324)
        v0 = 0x3b9ac9ff;
    a0->field_748 = a1;
    if (a1 > v0)
        a0->field_748 = v0;
    if (a0->field_748 < 0)
    {
        g_engfuncs.pfnAlertMessage(1, "negative MaxPowerLevel\n");
        a0->field_748 = 0;
    }
    return g_pGameRules->field_44->field_f0(g_pGameRules);
}

