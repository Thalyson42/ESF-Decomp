// GetItemInfo__12CCandyAttackP8ItemInfo @0x9a950 size=136
typedef struct st_49a950_0 {
    struct st_49a950_1 *field_0;
    char padding_4[132];
    unsigned int field_88;
} st_49a950_0;

typedef struct st_49a950_1 {
    unsigned int field_0;
} st_49a950_1;

typedef struct st_49a950_2 {
    char padding_0[152];
    unsigned int field_98;
} st_49a950_2;

extern st_49a950_2 *gpGlobals;

unsigned int GetItemInfo__12CCandyAttackP8ItemInfo(st_49a950_0 *a0, unsigned int *a1)
{
    a1[6] = *(int *)a0->field_0 + gpGlobals->field_98;
    a1[2] = "ki";
    a1[3] = 0xffffffff;
    a1[4] = 0;
    a1[5] = 0xffffffff;
    a1[7] = 0xffffffff;
    *a1 = 4;
    a1[1] = 5;
    a0->field_88 = 20;
    a1[8] = 20;
    a1[10] = 0xffffffff;
    a1[9] = 0;
    return 1;
}

