// WaypointFindNearestGoal__FP7edict_siiiPi @0x188990 size=236
extern void waypoints;
extern char waypoints+1[4];
extern int num_waypoints;

int WaypointFindNearestGoal__FP7edict_siiiPi(unsigned int a0, int a1, unsigned int a2, unsigned int a3, int *a4)
{
    int iter;  // esi
    unsigned int v3;  // eax
    unsigned int v4;  // eax
    int v5;  // eax
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
            else if (waypoints+1[v3] & 64)
            {
                iter += 1;
            }
            else if (a2 != 0xffffffff && (&waypoints)[v3] & 4 && (*(int *)&(&waypoints)[v3] & 3) != a2)
            {
                iter += 1;
            }
            else if ((a3 & *(int *)&(&waypoints)[16 * iter]) == a3)
            {
                v4 = 0;
                if (*a4)
                {
                    if (iter != *a4)
                    {
                        do
                        {
                            v4 += 1;
                        } while (a4[v4] && iter != a4[v4]);
                    }
                    else
                    {
                        iter += 1;
                        continue;
                    }
                }
                if (iter != a4[v4])
                {
                    v5 = WaypointDistanceFromTo(a1, iter, a2);
                    if (v5 < v0)
                    {
                        v1 = iter;
                        v0 = v5;
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
        else
        {
            iter += 1;
        }
    }
    return v1;
}

