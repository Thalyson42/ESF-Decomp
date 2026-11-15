// PathFind__9CTestHull @0xe3510 size=510
typedef struct st_4e3510_0 {
    unsigned int field_0;
} st_4e3510_0;

extern st_4e3510_0 *g_616878;
extern st_4e3510_0 *g_61687c;
extern st_4e3510_0 *g_616880;
extern st_4e3510_0 *g_616894;
extern st_4e3510_0 *g_6168b4;
extern unsigned int WorldGraph;
extern unsigned int g_617164;
extern unsigned int g_61716c;

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

    if (!WorldGraph || !g_617164)
    {
        v7 = "Graph not ready!\n";
    }
    else
    {
        v3 = sub_48ad80(&WorldGraph, &v4, 0, 19, 0, 0);
        if (!v3)
        {
            v7 = "No Path!\n";
        }
        else
        {
            g_6168b4(2, "%d\n", v3);
            v2 = g_61716c + v4 * 88;
            for (idx = 0; idx < v3 - 1; idx = v1)
            {
                v1 = idx + 1;
                v9 = g_61716c + *(int *)&(&v5)[4 * idx] * 88;
                g_616878(0, 23, 0, 0);
                g_616880(0x66);
                g_616894(*v2);
                g_616894(v2[1]);
                g_616894((float)(8.0 + v2[2]));
                g_616894(*v9);
                g_616894(v9[1]);
                v0 = (float)(8.0 + v9[2]);
                g_616894(v0);
                g_61687c(v0);
                v2 = v9;
            }
            return v3 - 1;
        }
    }
    return g_6168b4(2, v7);
}

