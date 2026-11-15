// GrowChargeSprite__11CFriezaDisc @0xc0dc0 size=63
typedef struct st_4c0dc0_1 {
    char padding_0[324];
    float field_144;
} st_4c0dc0_1;

typedef struct st_4c0dc0_0 {
    char padding_0[324];
    unsigned int field_144;
} st_4c0dc0_0;

typedef struct st_4c0dc0_3 {
    struct st_4c0dc0_1 *field_0;
} st_4c0dc0_3;

typedef struct st_4c0dc0_2 {
    char padding_0[196];
    int field_c4;
    int field_c8;
    char padding_cc[268];
    struct st_4c0dc0_3 *field_1d8;
} st_4c0dc0_2;

st_4c0dc0_0 * GrowChargeSprite__11CFriezaDisc(st_4c0dc0_2 *a0)
{
    st_4c0dc0_1 *v0;  // eax

    v0 = *(int *)a0->field_1d8;
    v0->field_144 = (float)((double)a0->field_c4 * 0.5 / (double)a0->field_c8);
    return v0;
}

