// _._22CShootScatterShotsTask @0x1505a0 size=81
typedef struct st_5505a0_1 {
    char padding_0[8];
    int field_8;
    struct st_5505a0_0 *field_c;
    char padding_10[4];
    unsigned int field_14;
} st_5505a0_1;

typedef struct st_5505a0_0 {
    char padding_0[513];
    char field_201;
} st_5505a0_0;

extern char __vt_22CShootScatterShotsTask;

int _._22CShootScatterShotsTask(st_5505a0_1 *a0, int a1)
{
    a0->field_14 = &__vt_22CShootScatterShotsTask;
    sub_48bf00(a0->field_8);
    a0->field_c->field_201 = a0->field_c->field_201 | 8;
    return sub_488170(a0, a1);
}

