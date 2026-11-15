// WaypointFloyds__FPUsT0 @0x18b130 size=412
typedef struct st_58b130_0 {
    struct st_58b130_0 *field_0;
} st_58b130_0;

extern st_58b130_0 *route_num_waypoints;

st_58b130_0 ** WaypointFloyds__FPUsT0(unsigned short *a0, unsigned short *a1)
{
    st_58b130_0 **v5;  // edi
    st_58b130_0 **v6;  // eax
    st_58b130_0 **j;  // esi
    st_58b130_0 **v8;  // eax
    st_58b130_0 **v9;  // edi
    st_58b130_0 **v10;  // esi
    st_58b130_0 **v11;  // eax
    int v0;  // [bp-0x18], Other Possible Types: unsigned int
    unsigned int v1;  // [bp-0x14]
    int v2;  // [bp-0x10], Other Possible Types: unsigned int
    st_58b130_0 **i;  // [bp-0xc]
    st_58b130_0 **v4;  // [bp-0x8]

    i = 0x1;
    v5 = NULL;
    v6 = &route_num_waypoints;
    if (NULL < route_num_waypoints)
    {
        do
        {
            j = NULL;
            v8 = &route_num_waypoints;
            v6 = &route_num_waypoints;
            if (NULL < route_num_waypoints)
            {
                do
                {
                    v6 = *v8 * v5 + (char *)j;
                    *(unsigned short *)((char *)a1 + 0x2 * v6) = (unsigned short)j;
                    j = (char *)j + 1;
                } while (j < *v8);
            }
        } while ((v5 = (char *)v5 + 1, v5 < route_num_waypoints));
    }
    while (i)
    {
        i = NULL;
        v4 = NULL;
        v6 = &route_num_waypoints;
        if (i < route_num_waypoints)
        {
            do
            {
                v9 = NULL;
                if (NULL < route_num_waypoints)
                {
                    do
                    {
                        v10 = NULL;
                        if (NULL < route_num_waypoints)
                        {
                            do
                            {
                                v0 = route_num_waypoints * v9 + (char *)v4;
                                if (a0[v0] != 0xffff)
                                {
                                    v1 = route_num_waypoints * v4 + (char *)v10;
                                    if (a0[v1] != 0xffff)
                                    {
                                        v2 = a0[v0];
                                        v0 = a0[v1] + v2;
                                        if (v0 > 0xfffe)
                                            v0 = 0xfffe;
                                        v2 = route_num_waypoints * v9 + (char *)v10;
                                        if (v0 < a0[v2] || a0[v2] == 0xffff)
                                        {
                                            *(unsigned short *)((char *)&a0[route_num_waypoints * v9] + 0x2 * v10) = v0;
                                            v11 = route_num_waypoints * v9;
                                            *(short *)((char *)a1 + 0x2 * v10 + 0x2 * v11) = *(short *)((char *)a1 + 0x2 * v11 + 0x2 * v4);
                                            i = 0x1;
                                        }
                                    }
                                }
                            } while ((v10 = (char *)v10 + 1, v10 < route_num_waypoints));
                        }
                    } while ((v9 = (char *)v9 + 1, v9 < route_num_waypoints));
                }
            } while ((v4 = (char *)v4 + 1, v6 = v4, v4 < route_num_waypoints));
        }
    }
    return v6;
}

