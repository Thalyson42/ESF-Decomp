// PathLength__6CGraphiiii @0xdf7f0 size=238
typedef struct st_4df7f0_0 {
    char padding_0[16];
    unsigned int field_10;
    char padding_14[4];
    int field_18;
} st_4df7f0_0;

typedef struct st_4df7f0_1 {
    unsigned int field_0;
} st_4df7f0_1;

extern st_4df7f0_1 *g_engfuncs.pfnAlertMessage;

double PathLength__6CGraphiiii(st_4df7f0_0 *a0, int a1, int a2, int a3, unsigned int a4)
{
    int i;  // edi
    int v8;  // esi
    int v0;  // [bp-0x34]
    int v1;  // [bp-0x30]
    int v2;  // [bp-0x14]
    int v3;  // [bp-0x10]
    unsigned int v4;  // [bp-0x10]
    double v5;  // [bp-0xc]
    char v6;  // [bp-0x8], Other Possible Types: unsigned int

    v5 = 0;
    v3 = a0->field_18;
    i = a1;
    v2 = (a4 & 832) != 0;
    if (i != a2)
    {
        do
        {
            v4 = v3 - 1;
            if (v3 <= 0)
            {
                g_engfuncs.pfnAlertMessage(1, "Route Failure\n");
                return 0.0;
            }
            v8 = CGraph::NextNodeInRoute(a0, i, a2, a3, v2);
            if (i == v8)
                return 0.0;
            CGraph::HashSearch(a0, i, v8, &v6);
            if ((int)v6 < 0)
            {
                v1 = a2;
                v0 = i;
                g_engfuncs.pfnAlertMessage(1, "HashLinks is broken from %d to %d.\n");
                return 0.0;
            }
            v5 += *(float *)(a0->field_10 + v6 * 24 + 20);
            i = v8;
            v3 = v4;
        } while (i != a2);
    }
    return v5;
}

