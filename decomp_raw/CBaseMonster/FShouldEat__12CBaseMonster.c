// FShouldEat__12CBaseMonster @0xd3c30 size=56
typedef struct st_4d3c30_0 {
    char padding_0[640];
    float field_280;
} st_4d3c30_0;

typedef struct st_4d3c30_1 {
    unsigned int field_0;
} st_4d3c30_1;

extern st_4d3c30_1 *gpGlobals;

int FShouldEat__12CBaseMonster(st_4d3c30_0 *a0)
{
    return a0->field_280 <= *(float *)gpGlobals;
}

