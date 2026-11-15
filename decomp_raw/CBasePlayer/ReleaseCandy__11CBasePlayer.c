// ReleaseCandy__11CBasePlayer @0xf0300 size=29
typedef struct st_4f0300_0 {
    char padding_0[421];
    char field_1a5;
} st_4f0300_0;

typedef struct st_4f0300_1 {
    struct st_4f0300_0 *field_0;
    char padding_4[864];
    unsigned int field_364;
} st_4f0300_1;

st_4f0300_0 * ReleaseCandy__11CBasePlayer(st_4f0300_1 *a0)
{
    st_4f0300_0 *v0;  // eax

    v0 = a0->field_0;
    v0->field_1a5 = v0->field_1a5 & 239;
    a0->field_364 = 0;
    return v0;
}

