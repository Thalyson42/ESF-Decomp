// CanHolster__15CControlledBeam @0xa8a30 size=76
typedef struct st_4a8a30_0 {
    char padding_0[196];
    unsigned int field_c4;
    struct st_4a8a30_1 *field_c8;
} st_4a8a30_0;

typedef struct st_4a8a30_1 {
    char padding_0[684];
    unsigned int field_2ac;
    unsigned int field_2b0;
    char padding_2b4[40];
    unsigned int field_2dc;
} st_4a8a30_1;

unsigned int CanHolster__15CControlledBeam(st_4a8a30_0 *a0)
{
    if (a0->field_c8 && a0->field_c4 == 2 && (a0->field_c8->field_2ac || a0->field_c8->field_2b0) && !a0->field_c8->field_2dc)
        return 0;
    return 1;
}

