// Spawn__9CEnvSound @0x11cbf0 size=81
typedef struct st_51cbf0_2 {
    char padding_0[260];
    float field_104;
} st_51cbf0_2;

typedef struct st_51cbf0_0 {
    float field_0;
} st_51cbf0_0;

typedef struct st_51cbf0_1 {
    unsigned int field_0;
} st_51cbf0_1;

extern st_51cbf0_1 *g_engfuncs.pfnRandomFloat;
extern st_51cbf0_0 *gpGlobals;

unsigned int * Spawn__9CEnvSound(double a0, st_51cbf0_2 **a1)
{
    g_engfuncs.pfnRandomFloat(0, 0.5f);
    *a1->field_104 = (float)(0.5 + *(float *)gpGlobals);
    return gpGlobals;
}

