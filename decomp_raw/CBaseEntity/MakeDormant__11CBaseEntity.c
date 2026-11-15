// MakeDormant__11CBaseEntity @0x9d7a0 size=98
typedef struct st_49d7a0_0 {
    char padding_0[8];
    char field_8;
    char padding_9[251];
    unsigned int field_104;
    unsigned int field_108;
    unsigned int field_10c;
    char padding_110[8];
    char field_118;
    char padding_119[142];
    char field_1a7;
} st_49d7a0_0;

int MakeDormant__11CBaseEntity(st_49d7a0_0 **a0)
{
    *a0->field_1a7 = *a0->field_1a7 | 128;
    *a0->field_10c = 0;
    *a0->field_108 = 0;
    *a0->field_118 = *a0->field_118 | 128;
    *a0->field_104 = 0;
    return sub_48db50(*a0, &*a0->field_8);
}

