// WaypointAddPath__Fss @0x188190 size=204
typedef struct st_588190_0 {
    char padding_0[8];
    struct st_588190_0 *field_8;
} st_588190_0;

typedef struct st_588190_1 {
    unsigned short field_0;
    unsigned short field_2;
    unsigned short field_4;
    unsigned short field_6;
    unsigned int field_8;
} st_588190_1;

typedef struct st_588190_2 {
    unsigned int field_0;
} st_588190_2;

extern st_588190_2 *g_engfuncs.pfnAlertMessage;
extern struct st_588190_0 *paths[4];

unsigned short * WaypointAddPath__Fss(short a0, unsigned short a1)
{
    st_588190_0 *v1;  // esi
    st_588190_0 *v2;  // esi
    int v3;  // edx
    unsigned short *v4;  // eax
    st_588190_1 *v5;  // esi
    st_588190_0 *v0;  // [bp-0xc]

    v1 = paths[a0];
    v0 = NULL;
    if (paths[a0])
    {
        do
        {
            v2 = v1;
            v3 = 0;
            do
            {
                v4 = v3 * 2;
                if (*(short *)(v4 + v2) == 0xffff)
                {
                    *(unsigned short *)(v4 + v2) = a1;
                    return v4;
                }
            } while ((v3 += 1, v3 <= 3));
            v0 = v2;
            v1 = v2->field_8;
        } while (v2->field_8);
    }
    v5 = malloc@GLIBC_2.0(12);
    if (!v5)
        g_engfuncs.pfnAlertMessage(4, "ESF_bot - Error allocating memory for path!");
    v5->field_0 = a1;
    v5->field_2 = 0xffff;
    v5->field_4 = 0xffff;
    v5->field_6 = 0xffff;
    v5->field_8 = 0;
    if (v0)
        v0->field_8 = v5;
    v4 = a0 * 4;
    if (!*(int *)(v4 + &paths[0]))
        *(st_588190_1 **)(v4 + &paths[0]) = v5;
    return v4;
}

