// CanSwoop__6CSwoopP12double_tap_si @0x123e90 size=135
typedef struct st_523e90_2 {
    float field_0;
    float field_4;
    float field_8;
    unsigned int field_c;
} st_523e90_2;

typedef struct st_523e90_0 {
    char padding_0[892];
    unsigned int field_37c;
} st_523e90_0;

typedef struct st_523e90_1 {
    unsigned int field_0;
    unsigned int field_4;
    char padding_8[112];
    struct st_523e90_0 *field_78;
} st_523e90_1;

typedef struct st_523e90_3 {
    float field_0;
} st_523e90_3;

extern st_523e90_3 *gpGlobals;

unsigned int CanSwoop__6CSwoopP12double_tap_si(st_523e90_1 *a0, st_523e90_2 *a1, unsigned int a2)
{
    if ((!a0->field_78->field_37c || a0->field_4 && a2 != a0->field_0) && a1->field_c && a1->field_0 != 0.0f && a1->field_4 != 0.0f && *(float *)gpGlobals - a1->field_8 >= 0.05)
        return 1;
    return 0;
}

