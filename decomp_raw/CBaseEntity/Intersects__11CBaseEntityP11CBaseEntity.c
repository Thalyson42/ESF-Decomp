// Intersects__11CBaseEntityP11CBaseEntity @0x9d700 size=153
typedef struct st_49d700_0 {
    char padding_0[196];
    float field_c4;
    float field_c8;
    float field_cc;
    float field_d0;
    float field_d4;
    float field_d8;
} st_49d700_0;

typedef struct st_49d700_1 {
    char padding_0[196];
    unsigned int field_c4;
    unsigned int field_c8;
    unsigned int field_cc;
    unsigned int field_d0;
    unsigned int field_d4;
    unsigned int field_d8;
} st_49d700_1;

unsigned int Intersects__11CBaseEntityP11CBaseEntity(st_49d700_1 **a0, st_49d700_0 **a1)
{
    float *v0;  // edx
    unsigned int *v1;  // ecx

    v0 = *a1;
    v1 = *a0;
    if (v0[49] <= *(float *)&v1[52] && v0[50] <= *(float *)&v1[53] && v0[0x33] <= *(float *)&v1[54] && v0[52] >= *(float *)&v1[49] && v0[53] >= *(float *)&v1[50] && v0[54] >= *(float *)&v1[0x33])
        return 1;
    return 0;
}

