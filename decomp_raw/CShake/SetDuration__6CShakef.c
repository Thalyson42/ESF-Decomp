// SetDuration__6CShakef @0xb76f0 size=21
typedef struct st_4b76f0_1 {
    char padding_0[472];
    float field_1d8;
} st_4b76f0_1;

typedef struct st_4b76f0_0 {
    char padding_0[472];
    unsigned int field_1d8;
} st_4b76f0_0;

st_4b76f0_0 * SetDuration__6CShakef(st_4b76f0_1 **a0, float a1)
{
    st_4b76f0_1 *v0;  // eax

    v0 = *a0;
    v0->field_1d8 = a1;
    return v0;
}

