// WaypointFindPath__FPP4pathPiii @0x188320 size=180
typedef struct st_588320_0 {
    char padding_0[8];
    unsigned int field_8;
} st_588320_0;

typedef struct st_588320_1 {
    struct st_588320_0 *field_0;
    unsigned int field_4;
    unsigned int field_8;
    unsigned int field_c;
} st_588320_1;

extern void waypoints;
extern st_588320_1 paths;

unsigned int WaypointFindPath__FPP4pathPiii(st_588320_0 **a0, int *a1, unsigned int idx, unsigned int a3)
{
    short *v0;  // eax
    unsigned int v1;  // ecx
    unsigned int v2;  // eax
    unsigned int v3;  // eax

    if (!*a0)
    {
        *a0 = (&paths.field_0)[idx];
        *a1 = 0;
    }
    if (*a1 == 4)
    {
        *a1 = 0;
        *a0 = *a0->field_8;
    }
    if (!*a0)
        return 0xffffffff;
    while (1)
    {
        if (*a1 <= 3)
        {
            v0 = *a1 * 2;
            if (*(short *)(v0 + *a0) != -0x1)
            {
                v1 = *(short *)(v0 + *a0);
                if (a3 == 0xffffffff || !(v2 = v1 * 16, (&waypoints)[v2] & 4 && (*(int *)&(&waypoints)[v2] & 3) != a3))
                {
                    *a1 = *a1 + 1;
                    return v1;
                }
                *a1 = *a1 + 1;
            }
            else
            {
                *a1 = *a1 + 1;
            }
        }
        else
        {
            *a1 = 0;
            v3 = *a0->field_8;
            *a0 = v3;
            if (!v3)
                break;
        }
    }
    return 0xffffffff;
}

