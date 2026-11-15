// SetAmplitude__6CShakef @0xb76b0 size=21
typedef struct st_4b76b0_1 {
    char padding_0[324];
    float field_144;
} st_4b76b0_1;

typedef struct st_4b76b0_0 {
    char padding_0[324];
    unsigned int field_144;
} st_4b76b0_0;

st_4b76b0_0 * SetAmplitude__6CShakef(st_4b76b0_1 **a0, float a1)
{
    st_4b76b0_1 *v0;  // eax

    v0 = *a0;
    v0->field_144 = a1;
    return v0;
}

