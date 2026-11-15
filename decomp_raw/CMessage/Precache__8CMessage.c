// Precache__8CMessage @0xb63a0 size=78
typedef struct st_4b63a0_0 {
    char padding_0[488];
    unsigned int field_1e8;
} st_4b63a0_0;

typedef struct st_4b63a0_1 {
    char padding_0[152];
    unsigned int field_98;
} st_4b63a0_1;

typedef struct st_4b63a0_2 {
    unsigned int field_0;
} st_4b63a0_2;

extern st_4b63a0_2 *g_engfuncs.pfnPrecacheSound;
extern st_4b63a0_1 *gpGlobals;

st_4b63a0_0 ** Precache__8CMessage(st_4b63a0_0 **a0)
{
    st_4b63a0_0 **v0;  // eax

    v0 = a0;
    if (*v0->field_1e8)
        v0 = g_engfuncs.pfnPrecacheSound(*v0->field_1e8 + gpGlobals->field_98);
    return v0;
}

