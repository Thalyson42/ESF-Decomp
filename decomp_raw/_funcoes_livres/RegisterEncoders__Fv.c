// RegisterEncoders__Fv @0xa2e30 size=113
typedef struct st_4a2e30_0 {
    unsigned int field_0;
} st_4a2e30_0;

extern char Entity_Encode__FP7delta_sPCUcT1;
extern char Player_Encode__FP7delta_sPCUcT1;
extern char Custom_Encode__FP7delta_sPCUcT1;
extern st_4a2e30_0 *g_engfuncs.pfnGetCurrentPlayer;

int RegisterEncoders__Fv(void)
{
    g_engfuncs.pfnGetCurrentPlayer("Entity_Encode", &Entity_Encode__FP7delta_sPCUcT1);
    g_engfuncs.pfnGetCurrentPlayer("Custom_Encode", &Custom_Encode__FP7delta_sPCUcT1);
    return g_engfuncs.pfnGetCurrentPlayer("Player_Encode", &Player_Encode__FP7delta_sPCUcT1);
}

