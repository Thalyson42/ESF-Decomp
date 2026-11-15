// RemoveAllItems__11CBasePlayeri @0xf3ab0 size=124
typedef struct st_4f3ab0_1 {
    struct st_4f3ab0_0 *field_0;
    char padding_4[1880];
    unsigned int field_75c;
} st_4f3ab0_1;

typedef struct st_4f3ab0_0 {
    char padding_0[520];
    unsigned int field_208;
} st_4f3ab0_0;

typedef struct st_4f3ab0_2 {
    unsigned int field_0;
} st_4f3ab0_2;

extern unsigned int gmsgSensuBean;
extern st_4f3ab0_2 *g_engfuncs.pfnMessageBegin;
extern st_4f3ab0_2 *g_engfuncs.pfnMessageEnd;
extern st_4f3ab0_2 *g_engfuncs.pfnWriteByte;

int RemoveAllItems__11CBasePlayeri(st_4f3ab0_1 *a0, int a1)
{
    CBasePlayer::RemoveAllWeapons(a0, a1);
    a0->field_75c = 0;
    g_engfuncs.pfnMessageBegin(1, gmsgSensuBean, 0, a0->field_0->field_208);
    g_engfuncs.pfnWriteByte(0);
    return g_engfuncs.pfnMessageEnd(0);
}

