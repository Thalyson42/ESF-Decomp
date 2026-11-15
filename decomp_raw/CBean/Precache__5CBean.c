// Precache__5CBean @0x1176a0 size=64
typedef struct st_5176a0_0 {
    unsigned int field_0;
} st_5176a0_0;

extern st_5176a0_0 *g_engfuncs;
extern st_5176a0_0 *g_6167c4;

int Precache__5CBean(void)
{
    g_engfuncs("models/w_sensubean.mdl");
    return g_6167c4("weapons/sensu.wav");
}

