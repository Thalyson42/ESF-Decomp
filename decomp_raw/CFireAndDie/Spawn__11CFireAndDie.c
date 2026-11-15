// Spawn__11CFireAndDie @0x12d3d0 size=48
typedef struct st_52d3d0_1 {
    unsigned int field_0;
} st_52d3d0_1;

typedef struct st_52d3d0_0 {
    char padding_0[152];
    unsigned int field_98;
} st_52d3d0_0;

extern st_52d3d0_0 *gpGlobals;

unsigned int Spawn__11CFireAndDie(st_52d3d0_1 **a0)
{
    unsigned int v0;  // eax

    v0 = -1 * gpGlobals->field_98 + 5939728;
    *(unsigned int *)*a0 = v0;
    return v0;
}

