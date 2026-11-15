// Precache__6CLaser @0xb2a20 size=117
typedef struct st_4b2a20_2 {
    char padding_0[180];
    unsigned int field_b4;
    unsigned int field_b8;
} st_4b2a20_2;

typedef struct st_4b2a20_0 {
    unsigned int field_0;
} st_4b2a20_0;

typedef struct st_4b2a20_1 {
    struct st_4b2a20_2 *field_0;
    char padding_4[100];
    unsigned int field_68;
} st_4b2a20_1;

typedef struct st_4b2a20_3 {
    char padding_0[152];
    unsigned int field_98;
} st_4b2a20_3;

extern st_4b2a20_0 *g_engfuncs;
extern st_4b2a20_3 *gpGlobals;

unsigned int * Precache__6CLaser(st_4b2a20_1 *a0)
{
    unsigned int v1;  // eax
    unsigned int *v2;  // eax
    st_4b2a20_0 **v0;  // [bp-0x8]

    v0 = &g_engfuncs;
    v1 = (*v0)(a0->field_0->field_b8 + gpGlobals->field_98);
    v2 = a0->field_0;
    v2[45] = v1;
    if (!a0->field_68)
        return v2;
    return (*v0)(a0->field_68 + gpGlobals->field_98);
}

