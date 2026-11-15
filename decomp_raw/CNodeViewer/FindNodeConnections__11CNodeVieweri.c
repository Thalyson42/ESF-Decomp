// FindNodeConnections__11CNodeVieweri @0xe61b0 size=242
typedef struct st_4e61b0_0 {
    char padding_0[4];
    int field_4;
} st_4e61b0_0;

extern int WorldGraph;
extern unsigned int g_61716c;
extern unsigned int g_617170;

int FindNodeConnections__11CNodeVieweri(int *a0, int a1)
{
    unsigned int v2;  // eax
    unsigned int v3;  // edi
    st_4e61b0_0 *v4;  // esi
    int v5;  // eax
    int i;  // [bp-0x8]

    sub_4899b0(a0, a1, sub_4889b0(&WorldGraph, a1, a0[25], a0[284], 0));
    i = 0;
    v2 = a1 * 4;
    if (i >= *(int *)(g_61716c + (a1 + (v2 + a1) * 2) * 8 + 32))
        return a1 + (v2 + a1) * 2;
    do
    {
        v3 = (a1 + (a1 + v2) * 2) * 8;
        v4 = g_617170 + (i + *(int *)(v3 + g_61716c + 36)) * 24;
        v5 = sub_4889b0(&WorldGraph, v4->field_4, a0[25], a0[284], 0);
        sub_4899b0(a0, v4->field_4, v5);
        i += 1;
        v2 = a1 * 4;
    } while (i < *(int *)(g_61716c + v3 + 32));
    return g_61716c;
}

