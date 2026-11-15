// SetBloodAmount__6CBloodf @0xb7610 size=21
typedef struct st_4b7610_1 {
    char padding_0[480];
    float field_1e0;
} st_4b7610_1;

typedef struct st_4b7610_0 {
    char padding_0[480];
    unsigned int field_1e0;
} st_4b7610_0;

st_4b7610_0 * SetBloodAmount__6CBloodf(st_4b7610_1 **a0, float a1)
{
    st_4b7610_1 *v0;  // eax

    v0 = *a0;
    v0->field_1e0 = a1;
    return v0;
}

