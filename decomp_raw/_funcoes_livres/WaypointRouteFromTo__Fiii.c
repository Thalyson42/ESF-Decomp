// WaypointRouteFromTo__Fiii @0x18bc20 size=106
typedef struct st_58bc20_1 {
    unsigned short field_0;
} st_58bc20_1;

typedef struct st_58bc20_0 {
    struct st_58bc20_1 *field_0;
    unsigned int field_4;
    unsigned int field_8;
    unsigned int field_c;
} st_58bc20_0;

extern st_58bc20_0 from_to;
extern unsigned int route_num_waypoints;

unsigned int WaypointRouteFromTo__Fiii(unsigned int a0, unsigned int a1, unsigned int a2)
{
    unsigned int v0;  // edx

    v0 = a2;
    if (v0 + 1 <= 4)
    {
        if (v0 == 0xffffffff)
            v0 = 0;
        if ((&from_to.field_0)[v0] || !(v0 = 0, !from_to.field_0))
        {
            return *(short *)&((&from_to.field_0)[v0])[a1 + route_num_waypoints * a0];
        }
    }
    return 0xffff;
}

