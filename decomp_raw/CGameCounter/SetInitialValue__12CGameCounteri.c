// SetInitialValue__12CGameCounteri @0xd13e0 size=30
typedef struct st_4d13e0_1 {
    char padding_0[480];
    float field_1e0;
} st_4d13e0_1;

typedef struct st_4d13e0_0 {
    char padding_0[480];
    unsigned int field_1e0;
} st_4d13e0_0;

st_4d13e0_0 * SetInitialValue__12CGameCounteri(st_4d13e0_1 **a0, int a1)
{
    st_4d13e0_1 *v0;  // eax

    v0 = *a0;
    v0->field_1e0 = (float)a1;
    return v0;
}

