// Blocked__9CPendulumP11CBaseEntity @0x93140 size=37
typedef struct st_493140_0 {
    char padding_0[108];
    unsigned int field_6c;
} st_493140_0;

typedef struct st_493140_1 {
    float field_0;
} st_493140_1;

extern st_493140_1 *gpGlobals;

unsigned int * Blocked__9CPendulumP11CBaseEntity(st_493140_0 *a0)
{
    *(float *)&a0->field_6c = *(float *)gpGlobals;
    return gpGlobals;
}

