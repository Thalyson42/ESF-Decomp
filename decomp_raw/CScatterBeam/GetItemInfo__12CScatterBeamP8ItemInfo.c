// GetItemInfo__12CScatterBeamP8ItemInfo @0x110440 size=136
typedef struct st_510440_0 {
    struct st_510440_1 *field_0;
    char padding_4[132];
    unsigned int field_88;
} st_510440_0;

typedef struct st_510440_1 {
    unsigned int field_0;
} st_510440_1;

typedef struct st_510440_2 {
    char padding_0[152];
    unsigned int field_98;
} st_510440_2;

extern st_510440_2 *gpGlobals;

unsigned int GetItemInfo__12CScatterBeamP8ItemInfo(st_510440_0 *a0, unsigned int *a1)
{
    a1[6] = *(int *)a0->field_0 + gpGlobals->field_98;
    a1[2] = "ki";
    a1[3] = 0xffffffff;
    a1[4] = 0;
    a1[5] = 0xffffffff;
    a1[7] = 0xffffffff;
    *a1 = 6;
    a1[1] = 0;
    a0->field_88 = 19;
    a1[8] = 19;
    a1[10] = 12;
    a1[9] = 0;
    return 1;
}

