// Precache__11CFireAndDie @0x12d400 size=45
typedef struct st_52d400_1 {
    char padding_0[260];
    unsigned int field_104;
} st_52d400_1;

typedef struct st_52d400_2 {
    struct st_52d400_1 *field_0;
    char padding_4[96];
    float field_64;
} st_52d400_2;

typedef struct st_52d400_0 {
    float field_0;
} st_52d400_0;

extern st_52d400_0 *gpGlobals;

unsigned int * Precache__11CFireAndDie(st_52d400_2 *a0)
{
    *(float *)&a0->field_0->field_104 = *(float *)gpGlobals + a0->field_64;
    return gpGlobals;
}

