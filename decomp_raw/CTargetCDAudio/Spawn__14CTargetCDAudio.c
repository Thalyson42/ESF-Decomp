// Spawn__14CTargetCDAudio @0x12c3c0 size=89
typedef struct st_52c3c0_1 {
    char padding_0[260];
    float field_104;
    unsigned int field_108;
    unsigned int field_10c;
    char padding_110[52];
    float field_144;
} st_52c3c0_1;

typedef struct st_52c3c0_0 {
    float field_0;
} st_52c3c0_0;

extern st_52c3c0_0 *gpGlobals;

unsigned int * Spawn__14CTargetCDAudio(st_52c3c0_1 **a0)
{
    *a0->field_10c = 0;
    *a0->field_108 = 0;
    if (0.0 < *a0->field_144)
        *a0->field_104 = (float)(1.0 + *(float *)gpGlobals);
    return gpGlobals;
}

