// TurnOn__6CLaser @0xb31f0 size=87
typedef struct st_4b31f0_0 {
    char padding_0[260];
    unsigned int field_104;
    char padding_108[16];
    char field_118;
    char padding_119[203];
    unsigned int field_1e4;
} st_4b31f0_0;

typedef struct st_4b31f0_1 {
    struct st_4b31f0_0 *field_0;
    char padding_4[96];
    int field_64;
} st_4b31f0_1;

typedef struct st_4b31f0_2 {
    float field_0;
} st_4b31f0_2;

extern st_4b31f0_2 *gpGlobals;

st_4b31f0_0 * TurnOn__6CLaser(st_4b31f0_1 *a0)
{
    st_4b31f0_0 *v0;  // eax

    a0->field_0->field_118 = a0->field_0->field_118 & 127;
    if (a0->field_64)
        CSprite::TurnOn(a0->field_64);
    *(float *)&a0->field_0->field_1e4 = *(float *)gpGlobals;
    v0 = a0->field_0;
    *(float *)&v0->field_104 = *(float *)gpGlobals;
    return v0;
}

