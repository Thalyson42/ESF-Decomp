// GetItemInfo__18CSpecialBeamCannonP8ItemInfo @0x11fb80 size=136
typedef struct st_51fb80_0 {
    struct st_51fb80_1 *field_0;
    char padding_4[132];
    unsigned int field_88;
} st_51fb80_0;

typedef struct st_51fb80_1 {
    unsigned int field_0;
} st_51fb80_1;

typedef struct st_51fb80_2 {
    char padding_0[152];
    unsigned int field_98;
} st_51fb80_2;

extern st_51fb80_2 *gpGlobals;

unsigned int GetItemInfo__18CSpecialBeamCannonP8ItemInfo(st_51fb80_0 *a0, unsigned int *a1)
{
    a1[6] = *(int *)a0->field_0 + gpGlobals->field_98;
    a1[2] = "ki";
    a1[3] = 0xffffffff;
    a1[4] = 0;
    a1[5] = 0xffffffff;
    a1[7] = 0xffffffff;
    *a1 = 3;
    a1[1] = 2;
    a0->field_88 = 11;
    a1[8] = 11;
    a1[10] = 15;
    a1[9] = 0;
    return 1;
}

