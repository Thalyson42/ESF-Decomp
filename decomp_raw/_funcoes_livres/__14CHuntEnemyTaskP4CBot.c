// __14CHuntEnemyTaskP4CBot @0x15a3a0 size=80
typedef struct st_55a3a0_0 {
    unsigned int field_0;
    char padding_4[16];
    unsigned int field_14;
    float field_18;
    unsigned int field_1c;
} st_55a3a0_0;

typedef struct st_55a3a0_1 {
    float field_0;
} st_55a3a0_1;

extern char __vt_14CHuntEnemyTask;
extern st_55a3a0_1 *gpGlobals;

st_55a3a0_0 * __14CHuntEnemyTaskP4CBot(st_55a3a0_0 *a0, int a1)
{
    __9CBaseTaskP4CBot(a0, a1);
    a0->field_14 = &__vt_14CHuntEnemyTask;
    a0->field_18 = (float)(*(float *)gpGlobals + 1.5);
    *(float *)&a0->field_1c = *(float *)&a0->field_0;
    return a0;
}

