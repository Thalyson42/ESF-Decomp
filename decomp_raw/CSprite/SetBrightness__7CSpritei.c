// SetBrightness__7CSpritei @0xb6fd0 size=30
typedef struct st_4b6fd0_1 {
    char padding_0[332];
    float field_14c;
} st_4b6fd0_1;

typedef struct st_4b6fd0_0 {
    char padding_0[332];
    unsigned int field_14c;
} st_4b6fd0_0;

st_4b6fd0_0 * SetBrightness__7CSpritei(st_4b6fd0_1 **a0, int a1)
{
    st_4b6fd0_1 *v0;  // eax

    v0 = *a0;
    v0->field_14c = (float)a1;
    return v0;
}

