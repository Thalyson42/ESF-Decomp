// WaypointFree__Fv @0x187f50 size=219
typedef struct st_587f50_0 {
    char padding_0[8];
    struct st_587f50_0 *field_8;
} st_587f50_0;

extern unsigned int shortest_path[4];
extern unsigned int from_to[4];
extern unsigned int paths[4];

unsigned int * WaypointFree__Fv(void)
{
    unsigned int v2;  // esi
    unsigned int v3;  // esi
    unsigned int *v4;  // eax
    st_587f50_0 *iter;  // eax
    int node;  // [bp-0x8]

    node = 0;
    do
    {
        v2 = node * 4;
        if (*(int *)(v2 + (char *)&shortest_path[0]))
        {
            free@GLIBC_2.0(*(int *)(v2 + (char *)&shortest_path[0]));
            *(unsigned int *)(v2 + (char *)&shortest_path[0]) = 0;
        }
        v3 = node * 4;
        if (*(int *)(v3 + (char *)&from_to[0]))
        {
            free@GLIBC_2.0(*(int *)(v3 + (char *)&from_to[0]));
            *(unsigned int *)(v3 + (char *)&from_to[0]) = 0;
        }
        node += 1;
    } while (node <= 3);
    node = 0;
    do
    {
        v4 = node * 4;
        if (*(int *)(v4 + &paths[0]))
        {
            iter = *(int *)(v4 + &paths[0]);
            if (*(int *)(v4 + &paths[0]))
            {
                do
                {
                    free@GLIBC_2.0(iter);
                    iter = iter->field_8;
                } while (iter);
            }
            v4 = &paths[0];
            paths[node] = 0;
        }
    } while ((node += 1, node <= 0x3ff));
    return v4;
}

