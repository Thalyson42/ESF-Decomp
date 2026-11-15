// SetDuration__5CFadef @0xb7770 size=21
typedef struct st_4b7770_1 {
    char padding_0[472];
    float field_1d8;
} st_4b7770_1;

typedef struct st_4b7770_0 {
    char padding_0[472];
    unsigned int field_1d8;
} st_4b7770_0;

st_4b7770_0 * SetDuration__5CFadef(st_4b7770_1 **a0, float a1)
{
    st_4b7770_1 *v0;  // eax

    v0 = *a0;
    v0->field_1d8 = a1;
    return v0;
}

