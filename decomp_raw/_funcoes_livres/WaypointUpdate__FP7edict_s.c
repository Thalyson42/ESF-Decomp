// WaypointUpdate__FP7edict_s @0x189a90 size=74
extern unsigned int waypoints[4];
extern int num_waypoints;

int * WaypointUpdate__FP7edict_s(void)
{
    int i;  // ecx
    int idx;  // ecx

    i = 0;
    if (0 >= num_waypoints)
        return &num_waypoints;
    do
    {
        idx = i;
        waypoints[4 * idx] = waypoints[4 * idx] & ~131968;
        i = idx + 1;
    } while (i < num_waypoints);
    return idx * 16;
}

