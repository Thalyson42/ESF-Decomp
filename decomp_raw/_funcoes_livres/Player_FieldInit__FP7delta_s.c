// Player_FieldInit__FP7delta_s @0xa2970 size=115
typedef struct st_4a2970_0 {
    unsigned int field_0;
} st_4a2970_0;

extern unsigned int g_5b8340;
extern char g_5b8344;
extern unsigned int g_5b8364;
extern char g_5b8368;
extern unsigned int g_5b8388;
extern st_4a2970_0 *g_6169d0;

int Player_FieldInit__FP7delta_s(unsigned int a0)
{
    g_5b8340 = g_6169d0(a0, "origin[0]");
    g_5b8364 = g_6169d0(a0, &g_5b8344);
    g_5b8388 = g_6169d0(a0, &g_5b8368);
    return g_5b8388;
}

