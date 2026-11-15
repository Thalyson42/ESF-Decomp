// GrowChargeSprite__14CDestructoDisc @0xaa4a0 size=63
typedef struct st_4aa4a0_1 {
    char padding_0[324];
    float field_144;
} st_4aa4a0_1;

typedef struct st_4aa4a0_0 {
    char padding_0[324];
    unsigned int field_144;
} st_4aa4a0_0;

typedef struct st_4aa4a0_3 {
    struct st_4aa4a0_1 *field_0;
} st_4aa4a0_3;

typedef struct st_4aa4a0_2 {
    char padding_0[196];
    int field_c4;
    int field_c8;
    char padding_cc[264];
    struct st_4aa4a0_3 *field_1d4;
} st_4aa4a0_2;

st_4aa4a0_0 * GrowChargeSprite__14CDestructoDisc(st_4aa4a0_2 *a0)
{
    st_4aa4a0_1 *v0;  // eax

    v0 = *(int *)a0->field_1d4;
    v0->field_144 = (float)((double)a0->field_c4 * 0.5 / (double)a0->field_c8);
    return v0;
}

