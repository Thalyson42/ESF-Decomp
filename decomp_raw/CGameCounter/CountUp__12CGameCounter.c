// CountUp__12CGameCounter @0xd1280 size=26
typedef struct st_4d1280_1 {
    char padding_0[356];
    float field_164;
} st_4d1280_1;

typedef struct st_4d1280_0 {
    char padding_0[356];
    unsigned int field_164;
} st_4d1280_0;

st_4d1280_0 * CountUp__12CGameCounter(st_4d1280_1 **a0)
{
    st_4d1280_1 *v0;  // eax

    v0 = *a0;
    v0->field_164 = (float)(1.0 + v0->field_164);
    return v0;
}

