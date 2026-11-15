// _._12CPowerUpTask @0x182560 size=96
typedef struct st_582560_1 {
    char padding_0[8];
    struct st_582560_0 *field_8;
    char padding_c[8];
    unsigned int field_14;
} st_582560_1;

typedef struct st_582560_0 {
    char padding_0[2832];
    float field_b10;
} st_582560_0;

typedef struct st_582560_2 {
    float field_0;
} st_582560_2;

extern char __vt_12CPowerUpTask;
extern st_582560_2 *gpGlobals;

int _._12CPowerUpTask(st_582560_1 *a0, int a1)
{
    a0->field_14 = &__vt_12CPowerUpTask;
    sub_48ba60(a0->field_8);
    a0->field_8->field_b10 = (float)(0.6 + *(float *)gpGlobals);
    return sub_488170(a0, a1);
}

