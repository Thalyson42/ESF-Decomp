// Precache__5CBeam @0xaf9f0 size=131
typedef struct st_4af9f0_0 {
    char padding_0[404];
    unsigned int field_194;
    unsigned int field_198;
} st_4af9f0_0;

typedef struct st_4af9f0_1 {
    unsigned int field_0;
} st_4af9f0_1;

extern st_4af9f0_1 *g_6168dc;

unsigned int * Precache__5CBeam(st_4af9f0_0 **a0)
{
    unsigned int *v1;  // eax

    if (*a0->field_198)
        sub_489030(a0, g_6168dc(*a0->field_198));
    v1 = *a0;
    if (!v1[101])
        return v1;
    return sub_48c910(a0, g_6168dc(v1[101]));
}

