// SetScale__7CSpritef @0xb6f60 size=21
typedef struct st_4b6f60_1 {
    char padding_0[324];
    float field_144;
} st_4b6f60_1;

typedef struct st_4b6f60_0 {
    char padding_0[324];
    unsigned int field_144;
} st_4b6f60_0;

st_4b6f60_0 * SetScale__7CSpritef(st_4b6f60_1 **a0, float a1)
{
    st_4b6f60_1 *v0;  // eax

    v0 = *a0;
    v0->field_144 = a1;
    return v0;
}

