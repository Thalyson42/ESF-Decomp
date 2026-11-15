// _._17CChargeAttackTask @0x159d20 size=64
typedef struct st_559d20_1 {
    char padding_0[8];
    struct st_559d20_0 *field_8;
    char padding_c[8];
    unsigned int field_14;
} st_559d20_1;

typedef struct st_559d20_0 {
    char padding_0[2944];
    unsigned int field_b80;
} st_559d20_0;

extern char __vt_17CChargeAttackTask;

int _._17CChargeAttackTask(st_559d20_1 *a0, int a1)
{
    a0->field_14 = &__vt_17CChargeAttackTask;
    a0->field_8->field_b80 = 0;
    return sub_488170(a0, a1);
}

