// __13CWallJumpTaskP4CBot @0x184480 size=100
typedef struct st_584480_0 {
    char padding_0[1736];
    unsigned int field_6c8;
} st_584480_0;

typedef struct st_584480_1 {
    float field_0;
    char padding_4[4];
    struct st_584480_0 *field_8;
    char padding_c[8];
    unsigned int field_14;
    float field_18;
    unsigned int field_1c;
} st_584480_1;

typedef struct st_584480_2 {
    float field_0;
} st_584480_2;

extern char __vt_13CWallJumpTask;
extern st_584480_2 *gpGlobals;

st_584480_1 * __13CWallJumpTaskP4CBot(st_584480_1 *a0, int a1)
{
    sub_48ce80(a0, a1);
    a0->field_14 = &__vt_13CWallJumpTask;
    if (!a0->field_8->field_6c8)
        a0->field_0 = (float)(1.0 + *(float *)gpGlobals);
    a0->field_18 = (float)(a0->field_0 + 3.0);
    a0->field_1c = 0;
    return a0;
}

