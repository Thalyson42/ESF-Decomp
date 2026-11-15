// Eat__12CBaseMonsterf @0xd3c00 size=43
typedef struct st_4d3c00_1 {
    char padding_0[640];
    unsigned int field_280;
} st_4d3c00_1;

typedef struct st_4d3c00_0 {
    float field_0;
} st_4d3c00_0;

extern st_4d3c00_0 *gpGlobals;

unsigned int * Eat__12CBaseMonsterf(st_4d3c00_1 *a0, float a1)
{
    *(float *)&a0->field_280 = a1 + *(float *)gpGlobals;
    return gpGlobals;
}

