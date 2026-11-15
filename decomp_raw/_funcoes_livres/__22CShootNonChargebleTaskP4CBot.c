// __22CShootNonChargebleTaskP4CBot @0x159dc0 size=70
typedef struct st_559dc0_1 {
    float field_0;
    char padding_4[4];
    struct st_559dc0_0 *field_8;
    char padding_c[8];
    unsigned int field_14;
    unsigned int field_18;
} st_559dc0_1;

typedef struct st_559dc0_0 {
    char padding_0[2936];
    float field_b78;
} st_559dc0_0;

extern char __vt_22CShootNonChargebleTask;

st_559dc0_1 * __22CShootNonChargebleTaskP4CBot(st_559dc0_1 *a0, int a1)
{
    __9CBaseTaskP4CBot(a0, a1);
    a0->field_14 = &__vt_22CShootNonChargebleTask;
    *(float *)&a0->field_18 = a0->field_8->field_b78 + a0->field_0;
    return a0;
}

