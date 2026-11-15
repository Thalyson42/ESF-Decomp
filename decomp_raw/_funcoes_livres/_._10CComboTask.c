// _._10CComboTask @0x185950 size=78
typedef struct st_585950_1 {
    char padding_0[8];
    struct st_585950_0 *field_8;
    char padding_c[8];
    unsigned int field_14;
} st_585950_1;

typedef struct st_585950_0 {
    char padding_0[4208];
    unsigned int field_1070;
} st_585950_0;

extern char __vt_10CComboTask;

int _._10CComboTask(st_585950_1 *a0, int a1)
{
    a0->field_14 = &__vt_10CComboTask;
    if (a0->field_8->field_1070)
        sub_48c9f0(a0->field_8);
    return sub_488170(a0, a1);
}

