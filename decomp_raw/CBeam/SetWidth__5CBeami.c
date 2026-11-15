// SetWidth__5CBeami @0xb7190 size=30
typedef struct st_4b7190_1 {
    char padding_0[324];
    float field_144;
} st_4b7190_1;

typedef struct st_4b7190_0 {
    char padding_0[324];
    unsigned int field_144;
} st_4b7190_0;

st_4b7190_0 * SetWidth__5CBeami(st_4b7190_1 **a0, int a1)
{
    st_4b7190_1 *v0;  // eax

    v0 = *a0;
    v0->field_144 = (float)a1;
    return v0;
}

