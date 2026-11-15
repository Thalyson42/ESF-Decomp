// __10CSwoopTaskP4CBot @0x14d680 size=202
typedef struct st_54d680_0 {
    char padding_0[1284];
    unsigned int field_504;
} st_54d680_0;

typedef struct st_54d680_1 {
    unsigned int field_0;
    char padding_4[4];
    struct st_54d680_0 *field_8;
    char padding_c[8];
    unsigned int field_14;
    char field_18;
    char field_19;
    char padding_1a[14];
    float field_28;
    float field_2c;
    char field_30;
    char padding_31[3];
    unsigned int field_34;
} st_54d680_1;

typedef struct st_54d680_2 {
    float field_0;
} st_54d680_2;

extern char __vt_10CSwoopTask;
extern st_54d680_2 *gpGlobals;

st_54d680_1 * __10CSwoopTaskP4CBot(st_54d680_1 *a0, int a1)
{
    double v0;  // mm7

    sub_48ce80(a0, a1);
    a0->field_14 = &__vt_10CSwoopTask;
    *(float *)&a0->field_0 = *(float *)gpGlobals;
    v0 = *(float *)gpGlobals + 0.75;
    a0->field_2c = (float)v0;
    a0->field_18 = 0;
    a0->field_19 = 0;
    a0->field_30 = 0;
    if (a0->field_8->field_504 != 4)
    {
        sub_489910(a0);
        a0->field_28 = (float)v0;
    }
    else
    {
        sub_48b0d0(a0);
    }
    *(float *)&a0->field_34 = *(float *)&a0->field_0;
    return a0;
}

