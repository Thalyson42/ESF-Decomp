// Precache__7CLadder @0x12e5b0 size=129
typedef struct st_52e5b0_0 {
    char padding_0[268];
    unsigned int field_10c;
    unsigned int field_110;
    char padding_114[4];
    char field_118;
    char padding_119[47];
    unsigned int field_148;
} st_52e5b0_0;

typedef struct st_52e5b0_1 {
    unsigned int field_0;
} st_52e5b0_1;

extern st_52e5b0_1 *g_6168a4;

st_52e5b0_0 * Precache__7CLadder(double a0, st_52e5b0_0 **a1)
{
    st_52e5b0_0 *v0;  // eax

    *a1->field_10c = 0;
    *a1->field_110 = 0xfffffff0;
    g_6168a4("showtriggers");
    if (a0 == 0.0)
    {
        *a1->field_148 = 2;
        *(float *)&(*a1)[1].padding_0[0] = 0.0f;
    }
    v0 = *a1;
    v0->field_118 = v0->field_118 & 127;
    return v0;
}

