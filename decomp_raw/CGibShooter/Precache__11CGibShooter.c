// Precache__11CGibShooter @0xb3ed0 size=83
typedef struct st_4b3ed0_1 {
    char padding_0[120];
    unsigned int field_78;
} st_4b3ed0_1;

typedef struct st_4b3ed0_0 {
    unsigned int field_0;
} st_4b3ed0_0;

extern unsigned int g_Language;
extern st_4b3ed0_0 *g_engfuncs;

unsigned int Precache__11CGibShooter(st_4b3ed0_1 *a0)
{
    unsigned int v0;  // eax

    v0 = g_engfuncs((g_Language == 1 ? "models/germanygibs.mdl" : "models/hgibs.mdl"));
    a0->field_78 = v0;
    return v0;
}

