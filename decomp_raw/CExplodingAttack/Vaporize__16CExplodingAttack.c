// Vaporize__16CExplodingAttack @0xbb070 size=102
typedef struct st_4bb070_0 {
    char padding_0[280];
    char field_118;
} st_4bb070_0;

typedef struct st_4bb070_2 {
    unsigned int field_0;
} st_4bb070_2;

typedef struct st_4bb070_1 {
    char padding_0[508];
    struct st_4bb070_2 *field_1fc;
} st_4bb070_1;

typedef struct st_4bb070_3 {
    struct st_4bb070_0 *field_0;
    char padding_4[8];
    char field_c;
    char padding_d[83];
    struct st_4bb070_1 *field_60;
    char padding_64[608];
    unsigned int field_2c4;
    unsigned int field_2c8;
} st_4bb070_3;

st_4bb070_0 * Vaporize__16CExplodingAttack(st_4bb070_3 *a0)
{
    st_4bb070_0 *v0;  // eax

    if (!a0->field_2c8)
    {
        a0->field_2c4 = 1;
        memset(&a0->field_c, 0, 16);
        v0 = a0->field_0;
        v0->field_118 = v0->field_118 | 128;
        return v0;
    }
    return a0->field_60->field_1fc(a0);
}

