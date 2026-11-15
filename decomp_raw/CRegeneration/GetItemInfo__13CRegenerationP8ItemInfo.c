// GetItemInfo__13CRegenerationP8ItemInfo @0x10dd30 size=136
typedef struct st_50dd30_0 {
    struct st_50dd30_1 *field_0;
    char padding_4[132];
    unsigned int field_88;
} st_50dd30_0;

typedef struct st_50dd30_1 {
    unsigned int field_0;
} st_50dd30_1;

typedef struct st_50dd30_2 {
    char padding_0[152];
    unsigned int field_98;
} st_50dd30_2;

extern st_50dd30_2 *gpGlobals;

unsigned int GetItemInfo__13CRegenerationP8ItemInfo(st_50dd30_0 *a0, unsigned int *a1)
{
    a1[6] = *(int *)a0->field_0 + gpGlobals->field_98;
    a1[2] = "ki";
    a1[3] = 0xffffffff;
    a1[4] = 0;
    a1[5] = 0xffffffff;
    a1[7] = 0xffffffff;
    *a1 = 6;
    a1[1] = 1;
    a0->field_88 = 29;
    a1[8] = 29;
    a1[10] = 0xffffffff;
    a1[9] = 0;
    return 1;
}

