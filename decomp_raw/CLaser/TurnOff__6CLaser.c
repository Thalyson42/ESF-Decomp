// TurnOff__6CLaser @0xb31a0 size=68
typedef struct st_4b31a0_0 {
    char padding_0[260];
    unsigned int field_104;
    char padding_108[16];
    char field_118;
} st_4b31a0_0;

typedef struct st_4b31a0_1 {
    struct st_4b31a0_0 *field_0;
    char padding_4[96];
    int field_64;
} st_4b31a0_1;

st_4b31a0_0 * TurnOff__6CLaser(st_4b31a0_1 *a0)
{
    st_4b31a0_0 *v0;  // eax

    a0->field_0->field_118 = a0->field_0->field_118 | 128;
    v0 = a0->field_0;
    v0->field_104 = 0;
    if (a0->field_64)
        v0 = sub_48df90(a0->field_64);
    return v0;
}

