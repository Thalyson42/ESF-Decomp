// GetItemInfo__10CGallitGunP8ItemInfo @0xc4130 size=136
typedef struct st_4c4130_0 {
    struct st_4c4130_1 *field_0;
    char padding_4[132];
    unsigned int field_88;
} st_4c4130_0;

typedef struct st_4c4130_1 {
    unsigned int field_0;
} st_4c4130_1;

typedef struct st_4c4130_2 {
    char padding_0[152];
    unsigned int field_98;
} st_4c4130_2;

extern st_4c4130_2 *gpGlobals;

unsigned int GetItemInfo__10CGallitGunP8ItemInfo(st_4c4130_0 *a0, unsigned int *a1)
{
    a1[6] = *(int *)a0->field_0 + gpGlobals->field_98;
    a1[2] = "ki";
    a1[3] = 0xffffffff;
    a1[4] = 0;
    a1[5] = 0xffffffff;
    a1[7] = 0xffffffff;
    *a1 = 3;
    a1[1] = 0;
    a0->field_88 = 5;
    a1[8] = 5;
    a1[10] = 15;
    a1[9] = 0;
    return 1;
}

