// Spawn__14CBaseSpectator @0x120440 size=53
typedef struct st_520440_1 {
    char padding_0[264];
    unsigned int field_108;
    unsigned int field_10c;
    char padding_110[148];
    unsigned int field_1a4;
} st_520440_1;

typedef struct st_520440_0 {
    struct st_520440_1 *field_0;
    unsigned int field_4;
} st_520440_0;

unsigned int * Spawn__14CBaseSpectator(st_520440_0 *a0)
{
    unsigned int *v0;  // eax

    a0->field_0->field_1a4 = 0x4000000;
    a0->field_0->field_10c = 0;
    v0 = a0->field_0;
    v0[66] = 8;
    a0->field_4 = 0;
    return v0;
}

