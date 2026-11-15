// SetCountValue__12CGameCounteri @0xd13c0 size=30
typedef struct st_4d13c0_1 {
    char padding_0[356];
    float field_164;
} st_4d13c0_1;

typedef struct st_4d13c0_0 {
    char padding_0[356];
    unsigned int field_164;
} st_4d13c0_0;

st_4d13c0_0 * SetCountValue__12CGameCounteri(st_4d13c0_1 **a0, int a1)
{
    st_4d13c0_1 *v0;  // eax

    v0 = *a0;
    v0->field_164 = (float)a1;
    return v0;
}

