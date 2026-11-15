// Release__11CFriezaDisc @0xc0e40 size=107
typedef struct st_4c0e40_1 {
    unsigned int field_0;
} st_4c0e40_1;

typedef struct st_4c0e40_3 {
    char padding_0[472];
    struct st_4c0e40_2 *field_1d8;
} st_4c0e40_3;

typedef struct st_4c0e40_0 {
    char padding_0[508];
    struct st_4c0e40_1 *field_1fc;
} st_4c0e40_0;

typedef struct st_4c0e40_2 {
    char padding_0[12];
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[76];
    struct st_4c0e40_0 *field_60;
    char padding_64[584];
    unsigned int field_2ac;
    unsigned int field_2b0;
} st_4c0e40_2;

extern char NormalThink__12CMagicAttack;

st_4c0e40_2 * Release__11CFriezaDisc(st_4c0e40_3 *a0)
{
    st_4c0e40_2 *v0;  // edx
    st_4c0e40_2 *v1;  // eax
    st_4c0e40_2 *v3;  // eax

    v0 = a0->field_1d8;
    if (!v0->field_2b0)
    {
        v1 = a0->field_1d8;
        v1->field_c = _INSERT(v0, 0, 0) | 0xffff0000;
        v1->field_10 = &NormalThink__12CMagicAttack;
        v3 = a0->field_1d8;
        v3->field_2ac = 1;
        return v3;
    }
    return v0->field_60->field_1fc(v0);
}

