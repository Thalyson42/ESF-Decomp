// Precache__10CEnvFunnel @0xb67f0 size=55
typedef struct st_4b67f0_1 {
    char padding_0[108];
    unsigned int field_6c;
} st_4b67f0_1;

typedef struct st_4b67f0_0 {
    unsigned int field_0;
} st_4b67f0_0;

extern st_4b67f0_0 *g_engfuncs;

unsigned int Precache__10CEnvFunnel(st_4b67f0_1 *a0)
{
    unsigned int v0;  // eax

    v0 = g_engfuncs("sprites/flare6.spr");
    a0->field_6c = v0;
    return v0;
}

