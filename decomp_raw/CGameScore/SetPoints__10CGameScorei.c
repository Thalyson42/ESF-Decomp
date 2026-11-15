// SetPoints__10CGameScorei @0xd10e0 size=30
typedef struct st_4d10e0_1 {
    char padding_0[356];
    float field_164;
} st_4d10e0_1;

typedef struct st_4d10e0_0 {
    char padding_0[356];
    unsigned int field_164;
} st_4d10e0_0;

st_4d10e0_0 * SetPoints__10CGameScorei(st_4d10e0_1 **a0, int a1)
{
    st_4d10e0_1 *v0;  // eax

    v0 = *a0;
    v0->field_164 = (float)a1;
    return v0;
}

