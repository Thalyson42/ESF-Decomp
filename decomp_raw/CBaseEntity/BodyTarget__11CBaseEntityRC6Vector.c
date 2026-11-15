// BodyTarget__11CBaseEntityRC6Vector @0x9e4c0 size=55
typedef struct st_49e4c0_0 {
    char padding_0[204];
    struct st_49e4c0_1 *field_cc;
} st_49e4c0_0;

typedef struct st_49e4c0_1 {
    unsigned int field_0;
} st_49e4c0_1;

typedef struct st_49e4c0_2 {
    char padding_0[96];
    struct st_49e4c0_0 *field_60;
} st_49e4c0_2;

int BodyTarget__11CBaseEntityRC6Vector(void)
{
    unsigned int v0;  // [bp+0x4]
    st_49e4c0_2 *v1;  // [bp+0x8]

    v1->field_60->field_cc(v0, v1);
    return v0;
}

