// SetFrequency__6CShakef @0xb76d0 size=21
typedef struct st_4b76d0_0 {
    char padding_0[476];
    unsigned int field_1dc;
} st_4b76d0_0;

typedef struct st_4b76d0_1 {
    char padding_0[476];
    float field_1dc;
} st_4b76d0_1;

st_4b76d0_0 * SetFrequency__6CShakef(st_4b76d0_1 **a0, float a1)
{
    st_4b76d0_1 *v0;  // eax

    v0 = *a0;
    v0->field_1dc = a1;
    return v0;
}

