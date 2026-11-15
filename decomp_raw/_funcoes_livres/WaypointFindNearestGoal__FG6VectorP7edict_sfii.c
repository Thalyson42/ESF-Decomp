// WaypointFindNearestGoal__FG6VectorP7edict_sfii @0x188a80 size=333
extern void waypoints;
extern char waypoints+1[4];
extern unsigned int waypoints+4[4];
extern int num_waypoints;

int WaypointFindNearestGoal__FG6VectorP7edict_sfii(float *a0, unsigned int a1, float a2, unsigned int a3, unsigned int a4)
{
    int iter;  // esi
    unsigned int v10;  // eax
    unsigned int v11;  // ecx
    unsigned int idx;  // eax
    float v13;  // 112
    float v14;  // 112
    float v15;  // 112
    double v16;  // mm7
    double v17;  // mm6
    int v0;  // [bp-0x54]
    int v1;  // [bp-0x50]
    int v2;  // [bp-0x4c]
    unsigned short v3;  // [bp-0x48]
    unsigned short v4;  // [bp-0x46]
    float v5;  // [bp-0x38]
    float v6;  // [bp-0x24]
    float v7;  // [bp-0x20]
    float v8;  // [bp-0x1c]

    if (num_waypoints <= 0)
        return -0x1;
    v1 = -0x1;
    v0 = 99999;
    iter = 0;
    while (iter < num_waypoints)
    {
        v10 = iter * 16;
        if (*(int *)&(&waypoints)[v10] < 0)
        {
            iter += 1;
        }
        else if (waypoints+1[v10] & 64)
        {
            iter += 1;
        }
        else if (a3 == 0xffffffff || !((&waypoints)[v10] & 4) || (*(int *)&(&waypoints)[v10] & 3) == a3)
        {
            v11 = iter * 16;
            if ((a4 & *(int *)&(&waypoints)[v11]) == a4)
            {
                idx = v11 + (char *)&waypoints+4[0];
                v13 = *(float *)idx - *a0;
                v6 = v13;
                v14 = *(float *)(idx + 4) - a0[1];
                v7 = v14;
                v15 = *(float *)(idx + 8) - a0[2];
                v8 = v15;
                v16 = v13 * v13 + v14 * v14 + v15 * v15;
                v17 = sqrt(v16);
                if (isnan(v17))
                    sqrt(*(unsigned int *)&v16);
                else
                    v16 = v17;
                v5 = (float)v16;
                v4 = __fnstcw();
                v3 = v4 | 0xc00;
                v2 = (int)v5;
                if ((double)v2 >= a2)
                {
                    iter += 1;
                }
                else if (v2 < v0)
                {
                    v1 = iter;
                    v0 = v2;
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
    return v1;
}

