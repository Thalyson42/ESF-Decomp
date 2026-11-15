// _._22CControlFriezaDiscTask @0x159ff0 size=78
typedef struct st_559ff0_0 {
    char padding_0[8];
    int field_8;
    char padding_c[8];
    unsigned int field_14;
} st_559ff0_0;

extern char __vt_22CControlFriezaDiscTask;

int _._22CControlFriezaDiscTask(st_559ff0_0 *a0, int a1)
{
    a0->field_14 = &__vt_22CControlFriezaDiscTask;
    sub_48ce10(a0->field_8, "weapon_genericbeam");
    return sub_488170(a0, a1);
}

