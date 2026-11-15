// WaypointPrintInfo__FP7edict_s @0x18a710 size=826
extern unsigned int waypoints[4];
extern int num_waypoints;

unsigned int * WaypointPrintInfo__FP7edict_s(float a0)
{
    unsigned int *v3;  // eax
    unsigned int *v4;  // esi
    unsigned int *iter;  // edi
    unsigned int *i;  // esi
    unsigned int v7;  // ecx
    unsigned int *v0;  // [bp-0x68]
    char v1;  // [bp-0x64]

    v3 = WaypointFindNearest(a0, 50.0f, -0x1);
    v4 = v3;
    if (v4 != 0xffffffff)
    {
        iter = &v1;
        sprintf@GLIBC_2.0(&v1, "Waypoint %d of %d total\n", v4, num_waypoints);
        ClientPrint(*(unsigned int *)&a0 + 128, 1, &v1, 0, 0, 0, 0);
        v0 = *(int *)(0x10 * v4 + (char *)&waypoints[0]);
        if ((char)v0 & 4)
        {
            if (!((char)v0 & 3))
            {
                i = "Waypoint is for TEAM 1\n";
            }
            else if ((v0 & 0x3) == 1)
            {
                iter = &v1;
                i = "Waypoint is for TEAM 2\n";
            }
            else if ((v0 & 0x3) == 2)
            {
                iter = &v1;
                i = "Waypoint is for TEAM 3\n";
            }
            else
            {
                if ((v0 & 3) != 3)
                    goto LABEL_58a7f2;
                iter = &v1;
                i = "Waypoint is for TEAM 4\n";
            }
            for (v7 = 6; v7; i += 1)
            {
                v7 -= 1;
                *iter = *i;
                iter += 1;
            }
LABEL_58a7f2:
            ClientPrint(*(unsigned int *)&a0 + 128, 1, &v1, 0, 0, 0, 0);
        }
        if ((char)v0 & 32)
            ClientPrint(*(unsigned int *)&a0 + 128, 1, "Bot will wait for lift before approaching\n", 0, 0, 0, 0);
        if ((char)v0 & 16)
            ClientPrint(*(unsigned int *)&a0 + 128, 1, "This waypoint is on a ladder\n", 0, 0, 0, 0);
        if ((char)v0 & 64)
            ClientPrint(*(unsigned int *)&a0 + 128, 1, "This is a door waypoint\n", 0, 0, 0, 0);
        if ((char)(char)v0 < 0)
            ClientPrint(*(unsigned int *)&a0 + 128, 1, "There is health near this waypoint\n", 0, 0, 0, 0);
        if (*(char *)((void*)&v0 + 1) & 1)
            ClientPrint(*(unsigned int *)&a0 + 128, 1, "There is armor near this waypoint\n", 0, 0, 0, 0);
        if (*(char *)((void*)&v0 + 1) & 2)
            ClientPrint(*(unsigned int *)&a0 + 128, 1, "There is ammo near this waypoint\n", 0, 0, 0, 0);
        if (v0 & 0x20000)
            ClientPrint(*(unsigned int *)&a0 + 128, 1, "There is a weapon near this waypoint\n", 0, 0, 0, 0);
        if (v0 & 0x40000)
            ClientPrint(*(unsigned int *)&a0 + 128, 1, "Bot will jump here\n", 0, 0, 0, 0);
        if (*(char *)((void*)&v0 + 1) & 4)
            ClientPrint(*(unsigned int *)&a0 + 128, 1, "This is a sniper waypoint\n", 0, 0, 0, 0);
        if (*(char *)((void*)&v0 + 1) & 16)
            ClientPrint(*(unsigned int *)&a0 + 128, 1, "There is a flag goal near this waypoint\n", 0, 0, 0, 0);
        if (*(char *)((void*)&v0 + 1) & 32)
            ClientPrint(*(unsigned int *)&a0 + 128, 1, "Bot will go prone here\n", 0, 0, 0, 0);
        if ((short)(unsigned short)v0 < 0)
            ClientPrint(*(unsigned int *)&a0 + 128, 1, "Engineers will build a sentry gun here\n", 0, 0, 0, 0);
        v3 = v0;
        if (v3 & 0x10000)
            v3 = ClientPrint(*(unsigned int *)&a0 + 128, 1, "Engineers will build a dispenser here\n", 0, 0, 0, 0);
    }
    return v3;
}

