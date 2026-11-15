// SetScrollRate__5CBeami @0xb7260 size=30
typedef struct st_4b7260_0 {
    char padding_0[308];
    unsigned int field_134;
} st_4b7260_0;

typedef struct st_4b7260_1 {
    char padding_0[308];
    float field_134;
} st_4b7260_1;

st_4b7260_0 * SetScrollRate__5CBeami(st_4b7260_1 **a0, int a1)
{
    st_4b7260_1 *v0;  // eax

    v0 = *a0;
    v0->field_134 = (float)a1;
    return v0;
}

