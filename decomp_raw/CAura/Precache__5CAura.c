// Precache__5CAura @0x8fbc0 size=139
typedef struct st_48fbc0_1 {
    char padding_0[684];
    unsigned short field_2ac;
} st_48fbc0_1;

typedef struct st_48fbc0_0 {
    unsigned int field_0;
} st_48fbc0_0;

extern st_48fbc0_0 *g_engfuncs;
extern st_48fbc0_0 *g_engfuncs.pfnPrecacheSound;

unsigned int Precache__5CAura(st_48fbc0_1 *a0)
{
    unsigned int v0;  // eax

    g_engfuncs("models/aura.mdl");
    g_engfuncs("models/aurabend.mdl");
    g_engfuncs("sprites/aura.spr");
    g_engfuncs.pfnPrecacheSound("weapons/aura.wav");
    g_engfuncs.pfnPrecacheSound("weapons/swoop.wav");
    v0 = g_engfuncs("sprites/auratrail.spr");
    a0->field_2ac = v0;
    return v0;
}

