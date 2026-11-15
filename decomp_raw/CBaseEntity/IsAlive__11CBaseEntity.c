// IsAlive__11CBaseEntity @0x9de10 size=48
typedef struct st_49de10_0 {
    char padding_0[352];
    float field_160;
    char padding_164[12];
    unsigned int field_170;
} st_49de10_0;

unsigned int IsAlive__11CBaseEntity(st_49de10_0 **a0)
{
    unsigned int v0;  // edx

    v0 = 0;
    if (!*a0->field_170 && 0.0 < *a0->field_160)
        v0 = 1;
    return v0;
}

