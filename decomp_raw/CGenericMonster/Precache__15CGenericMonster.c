// Precache__15CGenericMonster @0xc6610 size=68
typedef struct st_4c6610_0 {
    char padding_0[184];
    unsigned int field_b8;
} st_4c6610_0;

typedef struct st_4c6610_1 {
    char padding_0[152];
    unsigned int field_98;
} st_4c6610_1;

typedef struct st_4c6610_2 {
    unsigned int field_0;
} st_4c6610_2;

extern st_4c6610_2 *g_engfuncs;
extern st_4c6610_1 *gpGlobals;

int Precache__15CGenericMonster(st_4c6610_0 **a0)
{
    return g_engfuncs(*a0->field_b8 + gpGlobals->field_98);
}

