// _._16CShootLaser1Task @0x185fa0 size=96
typedef struct st_585fa0_3 {
    char padding_0[8];
    struct st_585fa0_1 *field_8;
    char padding_c[8];
    unsigned int field_14;
} st_585fa0_3;

typedef struct st_585fa0_1 {
    char padding_0[2924];
    struct st_585fa0_2 *field_b6c;
} st_585fa0_1;

typedef struct st_585fa0_2 {
    struct st_585fa0_0 *field_0;
} st_585fa0_2;

typedef struct st_585fa0_0 {
    char padding_0[421];
    char field_1a5;
} st_585fa0_0;

extern char __vt_16CShootLaser1Task;

int _._16CShootLaser1Task(st_585fa0_3 *a0, int a1)
{
    a0->field_14 = &__vt_16CShootLaser1Task;
    if (a0->field_8->field_b6c)
        *(char *)(*(int *)a0->field_8->field_b6c + 421) = *(char *)(*(int *)a0->field_8->field_b6c + 421) & 239;
    sub_48bf00(a0->field_8);
    return sub_488170(a0, a1);
}

