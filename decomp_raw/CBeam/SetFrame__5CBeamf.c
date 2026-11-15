// SetFrame__5CBeamf @0xb7240 size=21
typedef struct st_4b7240_0 {
    char padding_0[304];
    unsigned int field_130;
} st_4b7240_0;

typedef struct st_4b7240_1 {
    char padding_0[304];
    float field_130;
} st_4b7240_1;

st_4b7240_0 * SetFrame__5CBeamf(st_4b7240_1 **a0, float a1)
{
    st_4b7240_1 *v0;  // eax

    v0 = *a0;
    v0->field_130 = a1;
    return v0;
}

