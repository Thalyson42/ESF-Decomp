// Spawn__11CNodeViewer @0xe5e90 size=796
typedef struct st_4e5e90_3 {
    struct st_4e5e90_2 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
} st_4e5e90_3;

typedef struct st_4e5e90_2 {
    char padding_0[260];
    unsigned int field_104;
} st_4e5e90_2;

typedef struct st_4e5e90_0 {
    unsigned int field_0;
    char padding_4[20];
    int field_18;
} st_4e5e90_0;

typedef struct st_4e5e90_6 {
    char padding_0[104];
    unsigned int field_68;
} st_4e5e90_6;

typedef struct st_4e5e90_4 {
    char padding_0[1136];
    unsigned int field_470;
    unsigned int field_474;
    float field_478;
    float field_47c;
    float field_480;
} st_4e5e90_4;

typedef struct st_4e5e90_1 {
    float field_0;
    char padding_4[148];
    unsigned int field_98;
} st_4e5e90_1;

typedef struct st_4e5e90_5 {
    unsigned int field_0;
} st_4e5e90_5;

extern char DrawThink__11CNodeViewer;
extern st_4e5e90_5 *g_engfuncs.pfnAlertMessage;
extern st_4e5e90_1 *gpGlobals;
extern st_4e5e90_0 WorldGraph;
extern unsigned int WorldGraph+4;
extern int WorldGraph+24;

unsigned int * Spawn__11CNodeViewer(float idx)
{
    unsigned int *v5;  // ecx
    double v6;  // mm7
    unsigned int j;  // edi
    unsigned int v17;  // esi
    st_4e5e90_6 *v18;  // eax
    st_4e5e90_3 *v20;  // ecx
    double v7;  // mm6
    double v8;  // mm5
    st_4e5e90_4 *v9;  // edx
    int v10;  // eax
    unsigned int *v11;  // eax
    st_4e5e90_0 *v12;  // edx
    int i;  // edi
    st_4e5e90_0 *v14;  // esi
    unsigned int k;  // [bp-0x28]
    float v1;  // [bp-0x24]
    float v2;  // [bp-0x20]
    float v3;  // [bp-0x1c]

    if (WorldGraph.field_0 && WorldGraph+4)
    {
        if (!strcmp@GLIBC_2.0(*(int *)*(int *)idx + gpGlobals->field_98, "node_viewer_fly"))
        {
            v5 = (unsigned int *)idx;
            v5[284] = 3;
            v5[285] = 2;
            v6 = 160.0;
            v7 = 100.0;
            v8 = 255.0;
            goto LABEL_4e5fec;
        }
        else if (!strcmp@GLIBC_2.0(*(int *)*(int *)idx + gpGlobals->field_98, "node_viewer_large"))
        {
            v9 = (st_4e5e90_4 *)idx;
            v9->field_470 = 2;
            v9->field_474 = 5;
            v1 = 100.0f;
            v2 = 255.0f;
            v3 = 160.0f;
            v9->field_478 = v1;
            v9->field_47c = v2;
            v9->field_480 = v3;
        }
        else
        {
            v5 = (unsigned int *)idx;
            v5[284] = 1;
            v5[285] = 5;
            v6 = 255.0;
            v7 = 160.0;
            v8 = 100.0;
LABEL_4e5fec:
            v1 = (float)v6;
            v2 = (float)v7;
            v3 = (float)v8;
            *(float *)&v5[286] = v1;
            *(float *)&v5[287] = v2;
            *(float *)&v5[288] = v3;
        }
        v10 = CGraph::FindNearestNode(&WorldGraph.field_0, *(int *)idx + 8, *(int *)(*(unsigned int *)&idx + 1140));
        *(int *)(*(unsigned int *)&idx + 100) = v10;
        if (v10 < 0)
            return g_engfuncs.pfnAlertMessage(1, "No nearby node\n");
        v11 = (unsigned int *)idx;
        v11[27] = 0;
        g_engfuncs.pfnAlertMessage(2, "basenode %d\n", v11[25]);
        v12 = &WorldGraph.field_0;
        if (WorldGraph+24 <= 127)
        {
            i = 0;
            if (0 < WorldGraph+24)
            {
                do
                {
                    v14 = v12;
                    CNodeViewer::AddNode(idx, i, CGraph::NextNodeInRoute(v14, i, *(int *)(*(unsigned int *)&idx + 100), *(int *)(*(unsigned int *)&idx + 1136), 0));
                    i += 1;
                    v12 = v14;
                } while (i < v14->field_18);
            }
        }
        else
        {
            CNodeViewer::FindNodeConnections(idx, *(int *)(*(unsigned int *)&idx + 100));
            k = 0;
            do
            {
                j = *(int *)(*(unsigned int *)&idx + 108);
                if ((int)k < (int)j)
                {
                    do
                    {
                        v17 = k * 4;
                        CNodeViewer::FindNodeConnections(idx, *(int *)(v17 + *(unsigned int *)&idx + 112));
                        CNodeViewer::FindNodeConnections(idx, *(int *)(v17 + *(unsigned int *)&idx + 624));
                        k += 1;
                    } while ((int)k < (int)j);
                }
            } while (j != *(int *)(*(unsigned int *)&idx + 108));
        }
        g_engfuncs.pfnAlertMessage(2, "%d nodes\n", *(int *)(*(unsigned int *)&idx + 108));
        v18 = (st_4e5e90_6 *)idx;
        v18->field_68 = 0;
        v20 = (st_4e5e90_3 *)idx;
        v20->field_c = _INSERT(v18, 0, 0) | 0xffff0000;
        v20->field_10 = &DrawThink__11CNodeViewer;
        *(float *)&v20->field_0->field_104 = gpGlobals->field_0;
        return gpGlobals;
    }
    g_engfuncs.pfnAlertMessage(1, "Graph not ready!\n");
    return UTIL_Remove(idx);
}

