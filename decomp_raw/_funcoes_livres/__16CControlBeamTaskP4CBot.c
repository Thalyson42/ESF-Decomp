// __16CControlBeamTaskP4CBot @0x15a0c0 size=71
typedef struct st_55a0c0_0 {
    unsigned int field_0;
    char padding_4[16];
    unsigned int field_14;
    float field_18;
    char field_1c;
} st_55a0c0_0;

extern char __vt_16CControlBeamTask;

st_55a0c0_0 * __16CControlBeamTaskP4CBot(st_55a0c0_0 *a0, int a1)
{
    __9CBaseTaskP4CBot(a0, a1);
    a0->field_14 = &__vt_16CControlBeamTask;
    a0->field_18 = (float)(*(float *)&a0->field_0 + 10.0);
    a0->field_1c = 0;
    return a0;
}

