// WaypointDeletePath__Fs @0x188260 size=97
typedef struct st_588260_0 {
    char padding_0[8];
    struct st_588260_0 *field_8;
} st_588260_0;

typedef struct st_588260_1 {
    struct st_588260_0 *field_0;
    unsigned int field_4;
    unsigned int field_8;
    unsigned int field_c;
} st_588260_1;

extern int num_waypoints;
extern st_588260_1 paths;

int * WaypointDeletePath__Fs(unsigned short a0)
{
    int iter;  // esi
    st_588260_0 *v1;  // edx
    st_588260_0 *v2;  // edx
    int v3;  // ecx
    unsigned short *v4;  // eax

    iter = 0;
    while (iter < num_waypoints)
    {
        v1 = (&paths.field_0)[iter];
        if (v1)
        {
            while (1)
            {
                v2 = v1;
                v3 = 0;
                do
                {
                    v4 = v3 * 2;
                    if (*(short *)(v4 + v2) == a0)
                        *(unsigned short *)(v4 + v2) = 0xffff;
                } while ((v3 += 1, v3 <= 3));
                v1 = v2->field_8;
                if (!v2->field_8)
                    break;
            }
            iter += 1;
        }
        else
        {
            iter += 1;
        }
    }
    return &num_waypoints;
}

