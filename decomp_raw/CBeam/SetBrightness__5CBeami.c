// SetBrightness__5CBeami @0xb7220 size=30
typedef struct st_4b7220_1 {
    char padding_0[332];
    float field_14c;
} st_4b7220_1;

typedef struct st_4b7220_0 {
    char padding_0[332];
    unsigned int field_14c;
} st_4b7220_0;

st_4b7220_0 * SetBrightness__5CBeami(st_4b7220_1 **a0, int a1)
{
    st_4b7220_1 *v0;  // eax

    v0 = *a0;
    v0->field_14c = (float)a1;
    return v0;
}

