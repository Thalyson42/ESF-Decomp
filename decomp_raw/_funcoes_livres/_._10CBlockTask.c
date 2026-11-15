// _._10CBlockTask @0x183730 size=78
typedef struct st_583730_1 {
    char padding_0[8];
    struct st_583730_0 *field_8;
    char padding_c[8];
    unsigned int field_14;
} st_583730_1;

typedef struct st_583730_0 {
    char padding_0[812];
    unsigned int field_32c;
} st_583730_0;

extern char __vt_10CBlockTask;

int _._10CBlockTask(st_583730_1 *a0, int a1)
{
    a0->field_14 = &__vt_10CBlockTask;
    if (a0->field_8->field_32c)
        sub_4895a0(a0->field_8);
    return sub_488170(a0, a1);
}

