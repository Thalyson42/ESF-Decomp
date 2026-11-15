// TurnOn__15CFuncWallToggle @0x91170 size=65
typedef struct st_491170_0 {
    char padding_0[8];
    char field_8;
    char padding_9[259];
    unsigned int field_10c;
    char padding_110[8];
    char field_118;
} st_491170_0;

int TurnOn__15CFuncWallToggle(st_491170_0 **a0)
{
    *a0->field_10c = 4;
    *a0->field_118 = *a0->field_118 & 127;
    return sub_48db50(*a0, &*a0->field_8);
}

