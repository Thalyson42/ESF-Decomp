// _._14CHuntEnemyTask @0x15a3f0 size=92
typedef struct st_55a3f0_1 {
    char padding_0[8];
    struct st_55a3f0_0 *field_8;
    char padding_c[8];
    unsigned int field_14;
} st_55a3f0_1;

typedef struct st_55a3f0_0 {
    char padding_0[4148];
    unsigned int field_1034;
    char padding_1038[32];
    float field_1058;
} st_55a3f0_0;

typedef struct st_55a3f0_2 {
    float field_0;
} st_55a3f0_2;

extern char __vt_14CHuntEnemyTask;
extern st_55a3f0_2 *gpGlobals;

int _._14CHuntEnemyTask(st_55a3f0_1 *a0, int a1)
{
    a0->field_14 = &__vt_14CHuntEnemyTask;
    a0->field_8->field_1034 = 0;
    a0->field_8->field_1058 = (float)(*(float *)gpGlobals + 3.0);
    return sub_488170(a0, a1);
}

