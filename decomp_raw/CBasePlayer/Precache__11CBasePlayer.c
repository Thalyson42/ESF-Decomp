// Precache__11CBasePlayer @0xfb600 size=194
typedef struct st_4fb600_0 {
    unsigned int field_0;
} st_4fb600_0;

extern unsigned int gInitHUD;
extern st_4fb600_0 *g_6168b4;
extern unsigned int WorldGraph;
extern unsigned int g_617164;

unsigned int * Precache__11CBasePlayer(unsigned int *a0)
{
    unsigned int v2;  // edx
    int v0;  // [bp-0x1c]
    int v1;  // [bp-0x18]

    if (WorldGraph && !g_617164)
    {
        v2 = (!sub_488ae0(&WorldGraph) ? "**Graph pointers were not set!\n" : "**Graph Pointers Set!\n");
        g_6168b4(1, v2);
    }
    a0[154] = 0;
    a0[574] = 0xffffffff;
    a0[587] = 0xffffffff;
    a0[577] = 192;
    sub_48e030(v0, v1);
    a0[585] = 5;
    if (gInitHUD)
        a0[575] = 1;
    return &gInitHUD;
}

