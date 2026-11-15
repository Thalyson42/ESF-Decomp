// GetItemInfo__12CGenericBeamP8ItemInfo @0xc5aa0 size=136
typedef struct st_4c5aa0_0 {
    struct st_4c5aa0_1 *field_0;
    char padding_4[132];
    unsigned int field_88;
} st_4c5aa0_0;

typedef struct st_4c5aa0_1 {
    unsigned int field_0;
} st_4c5aa0_1;

typedef struct st_4c5aa0_2 {
    char padding_0[152];
    unsigned int field_98;
} st_4c5aa0_2;

extern st_4c5aa0_2 *gpGlobals;

unsigned int GetItemInfo__12CGenericBeamP8ItemInfo(st_4c5aa0_0 *a0, unsigned int *a1)
{
    a1[6] = *(int *)a0->field_0 + gpGlobals->field_98;
    a1[2] = "ki";
    a1[3] = 0xffffffff;
    a1[4] = 0;
    a1[5] = 0xffffffff;
    a1[7] = 0xffffffff;
    *a1 = 2;
    a1[1] = 0;
    a0->field_88 = 4;
    a1[8] = 4;
    a1[10] = 20;
    a1[9] = 0;
    return 1;
}

