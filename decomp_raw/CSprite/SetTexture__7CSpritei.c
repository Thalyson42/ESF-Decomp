// SetTexture__7CSpritei @0xb6f40 size=21
typedef struct st_4b6f40_0 {
    char padding_0[180];
    unsigned int field_b4;
} st_4b6f40_0;

st_4b6f40_0 * SetTexture__7CSpritei(st_4b6f40_0 **a0, unsigned int a1)
{
    st_4b6f40_0 *v0;  // eax

    v0 = *a0;
    v0->field_b4 = a1;
    return v0;
}

