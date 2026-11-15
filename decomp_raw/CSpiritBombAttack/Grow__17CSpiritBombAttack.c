// Grow__17CSpiritBombAttack @0x120640 size=47
typedef struct st_520640_1 {
    char padding_0[324];
    float field_144;
} st_520640_1;

typedef struct st_520640_0 {
    char padding_0[324];
    unsigned int field_144;
} st_520640_0;

st_520640_0 * Grow__17CSpiritBombAttack(st_520640_1 **a0)
{
    st_520640_1 *v0;  // eax

    v0 = *a0;
    v0->field_144 = (float)(0.02 + v0->field_144);
    return v0;
}

