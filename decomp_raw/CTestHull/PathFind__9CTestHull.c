// PathFind__9CTestHull @0xe3510 size=510
typedef struct st_4e3510_0 {
    unsigned int field_0;
} st_4e3510_0;

extern st_4e3510_0 *g_engfuncs.pfnMessageBegin;
extern st_4e3510_0 *g_engfuncs.pfnMessageEnd;
extern st_4e3510_0 *g_engfuncs.pfnWriteByte;
extern st_4e3510_0 *g_engfuncs.pfnWriteCoord;
extern st_4e3510_0 *g_engfuncs.pfnAlertMessage;
extern unsigned int WorldGraph;
extern unsigned int WorldGraph+4;
extern unsigned int WorldGraph+12;

int PathFind__9CTestHull(void)
{
    unsigned int v7;  // edx
    int idx;  // ecx
    float *v9;  // edi
    float v0;  // [bp-0x11c]
    int v1;  // [bp-0xf0]
    float *v2;  // [bp-0xec]
    int v3;  // [bp-0xe8]
    char v4;  // [bp-0xe4], Other Possible Types: unsigned int
    char v5;  // [bp-0xe0]

    if (!WorldGraph || !WorldGraph+4)
    {
        v7 = "Graph not ready!\n";
    }
    else
    {
        v3 = CGraph::FindShortestPath(&WorldGraph, &v4, 0, 19, 0, 0);
        if (!v3)
        {
            v7 = "No Path!\n";
        }
        else
        {
            g_engfuncs.pfnAlertMessage(2, "%d\n", v3);
            v2 = WorldGraph+12 + v4 * 88;
            for (idx = 0; idx < v3 - 1; idx = v1)
            {
                v1 = idx + 1;
                v9 = WorldGraph+12 + *(int *)&(&v5)[4 * idx] * 88;
                g_engfuncs.pfnMessageBegin(0, 23, 0, 0);
                g_engfuncs.pfnWriteByte(0x66);
                g_engfuncs.pfnWriteCoord(*v2);
                g_engfuncs.pfnWriteCoord(v2[1]);
                g_engfuncs.pfnWriteCoord((float)(8.0 + v2[2]));
                g_engfuncs.pfnWriteCoord(*v9);
                g_engfuncs.pfnWriteCoord(v9[1]);
                v0 = (float)(8.0 + v9[2]);
                g_engfuncs.pfnWriteCoord(v0);
                g_engfuncs.pfnMessageEnd(v0);
                v2 = v9;
            }
            return v3 - 1;
        }
    }
    return g_engfuncs.pfnAlertMessage(2, v7);
}

