// TurnOff__15CFuncWallToggle @0x91120 size=65
typedef struct st_491120_0 {
    char padding_0[8];
    char field_8;
    char padding_9[259];
    unsigned int field_10c;
    char padding_110[8];
    char field_118;
} st_491120_0;

int TurnOff__15CFuncWallToggle(st_491120_0 **a0)
{
    *a0->field_10c = 0;
    *a0->field_118 = *a0->field_118 | 128;
    return UTIL_SetOrigin(*a0, &*a0->field_8);
}

