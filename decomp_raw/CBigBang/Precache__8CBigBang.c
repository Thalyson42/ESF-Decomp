// Precache__8CBigBang @0x90920 size=154
typedef struct st_490920_0 {
    unsigned int field_0;
} st_490920_0;

extern st_490920_0 *g_engfuncs;
extern st_490920_0 *g_6167c4;

int Precache__8CBigBang(unsigned short *a0)
{
    a0[234] = g_engfuncs("sprites/bigbanga.spr");
    a0[235] = g_engfuncs("sprites/bigbangb.spr");
    a0[236] = g_engfuncs("sprites/bigbangtrail.spr");
    g_6167c4("vegeta/bigbang.wav");
    g_6167c4("vegeta/bigbang_charge.wav");
    return g_6167c4("weapons/bigbang_fire.wav");
}

