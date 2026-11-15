// WaypointFindNearestAiming__FG6Vector @0x188f20 size=277
extern unsigned int waypoints[4];
extern char waypoints+1[4];
extern unsigned int waypoints+4[4];
extern int num_waypoints;

int WaypointFindNearestAiming__FG6Vector(float *a0)
{
    int iter;  // esi
    unsigned int v9;  // edx
    unsigned int idx;  // eax
    float v11;  // 112
    float v12;  // 112
    float v13;  // 112
    double v14;  // mm7
    double v15;  // mm6
    int v0;  // [bp-0x54]
    int v1;  // [bp-0x50]
    unsigned short v2;  // [bp-0x4c]
    unsigned short v3;  // [bp-0x4a]
    float v4;  // [bp-0x38]
    float v5;  // [bp-0x24]
    float v6;  // [bp-0x20]
    float v7;  // [bp-0x1c]

    v1 = -0x1;
    v0 = 9999;
    if (num_waypoints <= 0)
        return v1;
    iter = 0;
    while (iter < num_waypoints)
    {
        v9 = iter * 16;
        if (*(int *)(v9 + (char *)&waypoints[0]) < 0)
        {
            iter += 1;
        }
        else if (waypoints+1[v9] & 64)
        {
            idx = v9 + (char *)&waypoints+4[0];
            v11 = *a0 - *(float *)idx;
            v5 = v11;
            v12 = a0[1] - *(float *)(idx + 4);
            v6 = v12;
            v13 = a0[2] - *(float *)(idx + 8);
            v7 = v13;
            v14 = v11 * v11 + v12 * v12 + v13 * v13;
            v15 = sqrt(v14);
            if (isnan(v15))
                sqrt(*(unsigned int *)&v14);
            else
                v14 = v15;
            v4 = (float)v14;
            if ((double)v0 > v4 && v4 < 40.0f)
            {
                v1 = iter;
                v3 = __fnstcw();
                v2 = v3 | 0xc00;
                v0 = (int)v4;
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
    return v1;
}

