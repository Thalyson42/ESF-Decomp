// WaypointFindNearestGoal__FP7edict_siii @0x188760 size=192
extern void waypoints;
extern char g_626821[4];
extern int num_waypoints;

int WaypointFindNearestGoal__FP7edict_siii(unsigned int a0, int a1, unsigned int a2, unsigned int a3)
{
    int iter;  // esi
    unsigned int v3;  // eax
    int v4;  // eax
    int v0;  // [bp-0xc]
    int v1;  // [bp-0x8]

    if (num_waypoints <= 0)
        return -0x1;
    v1 = -0x1;
    v0 = 99999;
    iter = 0;
    while (iter < num_waypoints)
    {
        if (iter != a1)
        {
            v3 = iter * 16;
            if (*(int *)&(&waypoints)[v3] < 0)
            {
                iter += 1;
            }
            else if (g_626821[v3] & 64)
            {
                iter += 1;
            }
            else if (a2 != 0xffffffff && (&waypoints)[v3] & 4 && (*(int *)&(&waypoints)[v3] & 3) != a2)
            {
                iter += 1;
            }
            else if ((a3 & *(int *)&(&waypoints)[16 * iter]) == a3)
            {
                v4 = sub_48dd70(a1, iter, a2);
                if (v4 < v0)
                {
                    v1 = iter;
                    v0 = v4;
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

