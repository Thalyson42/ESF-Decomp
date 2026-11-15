// WaypointFindRandomGoal__FP7edict_siiPi @0x188ca0 size=274
typedef struct st_588ca0_0 {
    unsigned int field_0;
} st_588ca0_0;

extern st_588ca0_0 *g_616928;
extern void waypoints;
extern char g_626821[4];
extern int num_waypoints;

unsigned int WaypointFindRandomGoal__FP7edict_siiPi(unsigned int a0, unsigned int a1, unsigned int a2, int *a3)
{
    int iter;  // ecx
    unsigned int v4;  // eax
    unsigned int v5;  // eax
    unsigned int v6;  // eax
    unsigned int v7;  // eax
    int idx;  // [bp-0x32c]
    char v1;  // [bp-0x328]
    char v2;  // [bp-0x324]

    idx = 0;
    if (num_waypoints <= 0)
        return 0xffffffff;
    iter = 0;
    while (iter < num_waypoints)
    {
        v4 = iter * 16;
        if (*(int *)&(&waypoints)[v4] < 0)
        {
            iter += 1;
        }
        else if (g_626821[v4] & 64)
        {
            iter += 1;
        }
        else if (a1 != 0xffffffff && (&waypoints)[v4] & 4 && (*(int *)&(&waypoints)[v4] & 3) != a1)
        {
            iter += 1;
        }
        else if ((a2 & *(int *)&(&waypoints)[16 * iter]) == a2)
        {
            v5 = 0;
            if (*a3)
            {
                if (iter != *a3)
                {
                    do
                    {
                        v5 += 1;
                    } while (a3[v5] && iter != a3[v5]);
                }
                else
                {
                    iter += 1;
                    continue;
                }
            }
            if (iter == a3[v5])
            {
                iter += 1;
            }
            else if (idx <= 199)
            {
                *(int *)&(&v2)[4 * idx] = iter;
                idx += 1;
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
    if (idx)
    {
        v6 = *(int *)&(&v1)[4 * g_616928(1, idx)];
        v7 = *(int *)&(&v1)[4 * g_616928(1, idx)];
        return *(int *)&(&v1)[4 * g_616928(1, idx)];
    }
    return 0xffffffff;
}

