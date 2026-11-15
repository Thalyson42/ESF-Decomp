// CountDown__12CGameCounter @0xd12a0 size=26
typedef struct st_4d12a0_1 {
    char padding_0[356];
    float field_164;
} st_4d12a0_1;

typedef struct st_4d12a0_0 {
    char padding_0[356];
    unsigned int field_164;
} st_4d12a0_0;

st_4d12a0_0 * CountDown__12CGameCounter(st_4d12a0_1 **a0)
{
    st_4d12a0_1 *v0;  // eax

    v0 = *a0;
    v0->field_164 = (float)(v0->field_164 - 1.0);
    return v0;
}

