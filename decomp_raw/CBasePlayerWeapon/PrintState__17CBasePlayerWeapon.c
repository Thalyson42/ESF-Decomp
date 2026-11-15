// PrintState__17CBasePlayerWeapon @0x139060 size=155
typedef struct st_539060_0 {
    char padding_0[156];
    float field_9c;
    char padding_a0[4];
    float field_a4;
    char padding_a8[8];
    unsigned int field_b0;
    char padding_b4[8];
    unsigned int field_bc;
} st_539060_0;

typedef struct st_539060_1 {
    unsigned int field_0;
} st_539060_1;

extern st_539060_1 *g_engfuncs.pfnAlertMessage;

int PrintState__17CBasePlayerWeapon(st_539060_0 *a0)
{
    g_engfuncs.pfnAlertMessage(1, "primary:  %f\n", (unsigned int)(a0->field_9c >> 0));
    g_engfuncs.pfnAlertMessage(1, "idle   :  %f\n", (unsigned int)(a0->field_a4 >> 0));
    g_engfuncs.pfnAlertMessage(1, "m_finre:  %i\n", a0->field_bc);
    return g_engfuncs.pfnAlertMessage(1, "m_iclip:  %i\n", a0->field_b0);
}

