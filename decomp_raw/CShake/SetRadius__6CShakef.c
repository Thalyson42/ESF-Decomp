// SetRadius__6CShakef @0xb7710 size=21
typedef struct st_4b7710_1 {
    char padding_0[480];
    float field_1e0;
} st_4b7710_1;

typedef struct st_4b7710_0 {
    char padding_0[480];
    unsigned int field_1e0;
} st_4b7710_0;

st_4b7710_0 * SetRadius__6CShakef(st_4b7710_1 **a0, float a1)
{
    st_4b7710_1 *v0;  // eax

    v0 = *a0;
    v0->field_1e0 = a1;
    return v0;
}

