// WaypointFindRandomGoal__FG6VectorP7edict_sfii @0x188dc0 size=342
typedef struct st_588dc0_0 {
    unsigned int field_0;
} st_588dc0_0;

extern st_588dc0_0 *g_engfuncs.pfnRandomLong;
extern void waypoints;
extern char waypoints+1[4];
extern unsigned int waypoints+4[4];
extern int num_waypoints;

unsigned int WaypointFindRandomGoal__FG6VectorP7edict_sfii(float *a0, unsigned int a1, float a2, unsigned int a3, unsigned int a4)
{
    int index;  // edi
    int iter;  // esi
    unsigned int v16;  // eax
    unsigned int v17;  // eax
    unsigned int v8;  // eax
    unsigned int v9;  // ecx
    unsigned int idx;  // eax
    float v11;  // 112
    float v12;  // 112
    float v13;  // 112
    double v14;  // mm7
    double v15;  // mm6
    float v0;  // [bp-0x358]
    float v1;  // [bp-0x344]
    float v2;  // [bp-0x340]
    float v3;  // [bp-0x33c]
    char v4;  // [bp-0x328]
    char v5;  // [bp-0x324]

    index = 0;
    if (num_waypoints <= 0)
        return 0xffffffff;
    iter = 0;
    while (iter < num_waypoints)
    {
        v8 = iter * 16;
        if (*(int *)&(&waypoints)[v8] < 0)
        {
            iter += 1;
        }
        else if (waypoints+1[v8] & 64)
        {
            iter += 1;
        }
        else if (a3 == 0xffffffff || !((&waypoints)[v8] & 4) || (*(int *)&(&waypoints)[v8] & 3) == a3)
        {
            v9 = iter * 16;
            if ((a4 & *(int *)&(&waypoints)[v9]) == a4)
            {
                idx = v9 + (char *)&waypoints+4[0];
                v11 = *(float *)idx - *a0;
                v1 = v11;
                v12 = *(float *)(idx + 4) - a0[1];
                v2 = v12;
                v13 = *(float *)(idx + 8) - a0[2];
                v3 = v13;
                v14 = v11 * v11 + v12 * v12 + v13 * v13;
                v15 = sqrt(v14);
                if (isnan(v15))
                    sqrt(*(unsigned int *)&v14);
                else
                    v14 = v15;
                v0 = (float)v14;
                if (v0 >= a2)
                {
                    iter += 1;
                }
                else if (index <= 199)
                {
                    *(int *)&(&v5)[4 * index] = iter;
                    index += 1;
                    iter += 1;
                }
                else
                {
                    iter += 1;
                }
            }
            else
            {
                iter += 1;
            }
        }
        else
        {
            iter += 1;
        }
    }
    if (index)
    {
        v16 = *(int *)&(&v4)[4 * g_engfuncs.pfnRandomLong(1, index)];
        v17 = *(int *)&(&v4)[4 * g_engfuncs.pfnRandomLong(1, index)];
        return *(int *)&(&v4)[4 * g_engfuncs.pfnRandomLong(1, index)];
    }
    return 0xffffffff;
}

