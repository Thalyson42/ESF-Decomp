// StopBeamJump__15CControlledBeam @0xa7940 size=49
typedef struct st_4a7940_0 {
    char padding_0[264];
    struct st_4a7940_1 *field_108;
} st_4a7940_0;

typedef struct st_4a7940_2 {
    char padding_0[128];
    struct st_4a7940_1 *field_80;
    char padding_84[380];
    struct st_4a7940_1 *field_200;
    char padding_204[4];
    unsigned int field_208;
} st_4a7940_2;

typedef struct st_4a7940_1 {
    struct st_4a7940_0 *field_0;
    char padding_4[1216];
    unsigned int field_4c4;
} st_4a7940_1;

st_4a7940_1 * StopBeamJump__15CControlledBeam(st_4a7940_2 *a0)
{
    st_4a7940_1 *v0;  // eax
    st_4a7940_1 *v1;  // eax

    v0 = a0->field_80;
    if (!v0->field_4c4)
    {
        v1 = a0->field_200;
        v0->field_0->field_108 = v1;
        v0 = v1;
    }
    a0->field_208 = 0;
    return v0;
}

