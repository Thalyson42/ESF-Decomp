// Precache__13CMonsterMaker @0xd3610 size=58
typedef struct st_4d3610_0 {
    char padding_0[680];
    unsigned int field_2a8;
} st_4d3610_0;

typedef struct st_4d3610_1 {
    char padding_0[152];
    unsigned int field_98;
} st_4d3610_1;

extern st_4d3610_1 *gpGlobals;

int Precache__13CMonsterMaker(st_4d3610_0 *a0)
{
    return sub_488de0(a0->field_2a8 + gpGlobals->field_98);
}

