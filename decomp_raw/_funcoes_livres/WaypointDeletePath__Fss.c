// WaypointDeletePath__Fss @0x1882d0 size=74
typedef struct st_5882d0_0 {
    char padding_0[8];
    struct st_5882d0_0 *field_8;
} st_5882d0_0;

typedef struct st_5882d0_1 {
    struct st_5882d0_0 *field_0;
    unsigned int field_4;
    unsigned int field_8;
    unsigned int field_c;
} st_5882d0_1;

extern st_5882d0_1 paths;

unsigned short * WaypointDeletePath__Fss(short a0, unsigned short a1)
{
    st_5882d0_0 *v0;  // edx
    st_5882d0_0 *v1;  // edx
    int v2;  // ecx
    unsigned short *v3;  // eax

    v0 = (&paths.field_0)[a0];
    if (!v0)
        return a0;
    do
    {
        v1 = v0;
        v2 = 0;
        do
        {
            v3 = v2 * 2;
            if (*(short *)(v3 + v1) == a1)
                *(unsigned short *)(v3 + v1) = 0xffff;
        } while ((v2 += 1, v2 <= 3));
        v0 = v1->field_8;
    } while (v1->field_8);
    return v3;
}

