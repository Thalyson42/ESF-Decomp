// WaypointFindNearestEnemyGoal__FP7edict_siiT0 @0x188820 size=359
extern void waypoints;
extern char g_626821[4];
extern unsigned int g_626824[4];
extern int num_waypoints;

int WaypointFindNearestEnemyGoal__FP7edict_siiT0(float *a0, int a1, unsigned int a2, unsigned int a3)
{
    int v8;  // esi
    unsigned int *v9;  // edi
    unsigned int v10;  // eax
    float *v11;  // edx
    float v12;  // 112
    float v13;  // 112
    float v14;  // 112
    double v15;  // mm7
    double v16;  // mm6
    int v0;  // [bp-0x54]
    int v1;  // [bp-0x50]
    unsigned short v2;  // [bp-0x4c]
    unsigned short v3;  // [bp-0x4a]
    float v4;  // [bp-0x38]
    float v5;  // [bp-0x24]
    float v6;  // [bp-0x20]
    float v7;  // [bp-0x1c]

    if (num_waypoints <= 0 || !a3)
        return -0x1;
    v1 = -0x1;
    v0 = 400;
    v8 = 0;
    if (0 < num_waypoints)
    {
        v9 = a0 + 0x22;
        do
        {
            if (v8 != a1)
            {
                v10 = v8 * 16;
                if (*(int *)&(&waypoints)[v10] >= 0 && !(g_626821[v10] & 64) && (a2 == 0xffffffff || !((&waypoints)[v10] & 4) || (*(int *)&(&waypoints)[v10] & 3) == a2))
                {
                    sub_48dd70(a1, v8, a2);
                    v11 = &g_626824[4 * v8];
                    v12 = *v11 - a0[0x22];
                    v5 = v12;
                    v13 = v11[1] - *(float *)&v9[1];
                    v6 = v13;
                    v14 = v11[2] - *(float *)&v9[2];
                    v7 = v14;
                    v15 = v12 * v12 + v13 * v13 + v14 * v14;
                    v16 = sqrt(v15);
                    if (isnan(v16))
                        sub_487dc0(*(unsigned int *)&v15);
                    else
                        v15 = v16;
                    v4 = (float)v15;
                    if ((double)v0 > v4)
                    {
                        v1 = v8;
                        v3 = __fnstcw();
                        v2 = v3 | 0xc00;
                        v0 = (int)v4;
                    }
                }
            }
        } while ((v8 += 1, v8 < num_waypoints));
    }
    return v1;
    return -0x1;
}

