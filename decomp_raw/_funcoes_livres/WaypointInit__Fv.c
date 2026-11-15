// WaypointInit__Fv @0x188030 size=352
extern char g_waypoint_paths;
extern unsigned int f_path_time;
extern unsigned int shortest_path[4];
extern unsigned int from_to[4];
extern unsigned int waypoints;
extern unsigned int waypoints+4;
extern unsigned int last_waypoint;
extern unsigned int last_waypoint+4;
extern unsigned int last_waypoint+8;
extern unsigned int num_waypoints;
extern unsigned int paths;
extern unsigned int wp_display_time;

unsigned int * WaypointInit__Fv(void)
{
    int i;  // esi
    unsigned int v7;  // eax
    unsigned int v8;  // eax
    int j;  // esi
    unsigned int index;  // edx
    unsigned int idx;  // edx
    int k;  // esi
    unsigned int idx1;  // edx
    int v0;  // [bp-0x3c]
    int v1;  // [bp-0x38]
    unsigned int v2;  // [bp-0x24]
    unsigned int v3;  // [bp-0x20]
    unsigned int v4;  // [bp-0x1c]

    if (g_waypoint_paths)
        WaypointFree(v0, v1);
    i = 0;
    do
    {
        v7 = i * 4;
        if (*(int *)(v7 + (char *)&shortest_path[0]))
            free@GLIBC_2.0(*(int *)(v7 + (char *)&shortest_path[0]));
        v8 = i * 4;
        if (*(int *)(v8 + (char *)&from_to[0]))
            free@GLIBC_2.0(*(int *)(v8 + (char *)&from_to[0]));
        i += 1;
    } while (i <= 3);
    j = 0;
    do
    {
        index = j * 16;
        *(unsigned int *)(index + (char *)&waypoints) = 0;
        v2 = 0;
        v3 = 0;
        v4 = 0;
        *(unsigned int *)((char *)&waypoints+4 + index) = v2;
        *(unsigned int *)((char *)&waypoints+4 + index + 4) = v3;
        *(unsigned int *)((char *)&waypoints+4 + index + 8) = v4;
        idx = j * 4;
        *(unsigned int *)(idx + (char *)&wp_display_time) = 0;
        *(unsigned int *)(idx + (char *)&paths) = 0;
        j += 1;
    } while (j <= 0x3ff);
    f_path_time = 0;
    num_waypoints = 0;
    v2 = 0;
    v3 = 0;
    v4 = 0;
    last_waypoint = v2;
    last_waypoint+4 = v3;
    last_waypoint+8 = v4;
    k = 0;
    do
    {
        idx1 = k * 4;
        *(unsigned int *)(idx1 + (char *)&shortest_path[0]) = 0;
        *(unsigned int *)(idx1 + (char *)&from_to[0]) = 0;
        k += 1;
    } while (k <= 3);
    return &from_to[0];
}

