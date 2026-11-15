// WaypointFindNearest__FG6VectorP7edict_sfi @0x1885d0 size=398
typedef struct st_5885d0_0 {
    char padding_0[648];
    int field_288;
} st_5885d0_0;

extern void waypoints;
extern char waypoints+1[4];
extern unsigned int waypoints+4[4];
extern int num_waypoints;

int WaypointFindNearest__FG6VectorP7edict_sfi(float *a0, st_5885d0_0 *a1, float a2, unsigned int a3)
{
    int iter;  // esi
    unsigned int v9;  // eax
    float *v10;  // edx
    float v11;  // 112
    float v12;  // 112
    float v13;  // 112
    double v14;  // mm7
    double v15;  // mm6
    float v0;  // [bp-0xa0]
    float v1;  // [bp-0x9c]
    int v2;  // [bp-0x98]
    float v3;  // [bp-0x64]
    float v4;  // [bp-0x60]
    float v5;  // [bp-0x5c]
    char v6;  // [bp-0x44]
    float v7;  // [bp-0x34]

    if (num_waypoints <= 0)
        return -0x1;
    v2 = -0x1;
    v1 = 9999.0f;
    iter = 0;
    while (iter < num_waypoints)
    {
        v9 = iter * 16;
        if (*(int *)&(&waypoints)[v9] < 0)
        {
            iter += 1;
        }
        else if (waypoints+1[v9] & 64)
        {
            iter += 1;
        }
        else if (a3 == 0xffffffff || !((&waypoints)[v9] & 4) || (*(int *)&(&waypoints)[v9] & 3) == a3)
        {
            v10 = &waypoints+4[4 * iter];
            v11 = *v10 - *a0;
            v3 = v11;
            v12 = v10[1] - a0[1];
            v4 = v12;
            v13 = v10[2] - a0[2];
            v5 = v13;
            v14 = v11 * v11 + v12 * v12 + v13 * v13;
            v15 = sqrt(v14);
            if (isnan(v15))
                sqrt(*(unsigned int *)&v14);
            else
                v14 = v15;
            v0 = (float)v14;
            if (v0 >= v1)
            {
                iter += 1;
            }
            else if (v0 < a2)
            {
                UTIL_TraceLine(a0, &waypoints+4[4 * iter], 1, a1->field_288, &v6);
                if ((isnan(v7) ? 0x44 : 1.0 == v7 ? 63 : 1.0 < v7 ? 0 : 0xff) < 64)
                {
                    v2 = iter;
                    v1 = v0;
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
    return v2;
}

