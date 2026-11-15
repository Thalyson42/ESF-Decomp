// FindNodeConnections__11CNodeVieweri @0xe61b0 size=242
typedef struct st_4e61b0_0 {
    char padding_0[4];
    int field_4;
} st_4e61b0_0;

extern int WorldGraph;
extern unsigned int WorldGraph+12;
extern unsigned int WorldGraph+16;

int FindNodeConnections__11CNodeVieweri(int *a0, int a1)
{
    unsigned int v2;  // eax
    unsigned int v3;  // edi
    st_4e61b0_0 *v4;  // esi
    int v5;  // eax
    int i;  // [bp-0x8]

    CNodeViewer::AddNode(a0, a1, CGraph::NextNodeInRoute(&WorldGraph, a1, a0[25], a0[284], 0));
    i = 0;
    v2 = a1 * 4;
    if (i >= *(int *)(WorldGraph+12 + (a1 + (v2 + a1) * 2) * 8 + 32))
        return a1 + (v2 + a1) * 2;
    do
    {
        v3 = (a1 + (a1 + v2) * 2) * 8;
        v4 = WorldGraph+16 + (i + *(int *)(v3 + WorldGraph+12 + 36)) * 24;
        v5 = CGraph::NextNodeInRoute(&WorldGraph, v4->field_4, a0[25], a0[284], 0);
        CNodeViewer::AddNode(a0, v4->field_4, v5);
        i += 1;
        v2 = a1 * 4;
    } while (i < *(int *)(WorldGraph+12 + v3 + 32));
    return WorldGraph+12;
}

