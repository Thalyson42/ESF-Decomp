// Precache__11CBasePlayer @0xfb600 size=194
typedef struct st_4fb600_0 {
    unsigned int field_0;
} st_4fb600_0;

extern unsigned int gInitHUD;
extern st_4fb600_0 *g_engfuncs.pfnAlertMessage;
extern unsigned int WorldGraph;
extern unsigned int WorldGraph+4;

unsigned int * Precache__11CBasePlayer(unsigned int *a0)
{
    unsigned int v2;  // edx
    int v0;  // [bp-0x1c]
    int v1;  // [bp-0x18]

    if (WorldGraph && !WorldGraph+4)
    {
        v2 = (!CGraph::FSetGraphPointers(&WorldGraph) ? "**Graph pointers were not set!\n" : "**Graph Pointers Set!\n");
        g_engfuncs.pfnAlertMessage(1, v2);
    }
    a0[154] = 0;
    a0[574] = 0xffffffff;
    a0[587] = 0xffffffff;
    a0[577] = 192;
    LinkUserMessages(v0, v1);
    a0[585] = 5;
    if (gInitHUD)
        a0[575] = 1;
    return &gInitHUD;
}

