// Spawn__10CEnvGlobal @0x956e0 size=128
typedef struct st_4956e0_0 {
    char padding_0[416];
    char field_1a0;
    char padding_1a1[103];
    unsigned int field_208;
} st_4956e0_0;

typedef struct st_4956e0_1 {
    struct st_4956e0_0 *field_0;
    char padding_4[96];
    int field_64;
    char padding_68[4];
    int field_6c;
} st_4956e0_1;

typedef struct st_4956e0_3 {
    char padding_0[12];
    int field_c;
} st_4956e0_3;

typedef struct st_4956e0_2 {
    unsigned int field_0;
} st_4956e0_2;

extern st_4956e0_2 *g_engfuncs.pfnRemoveEntity;
extern st_4956e0_3 *gpGlobals;
extern int gGlobalState;

st_4956e0_0 * Spawn__10CEnvGlobal(st_4956e0_1 *a0)
{
    st_4956e0_0 *v0;  // eax

    if (!a0->field_64)
    {
        return g_engfuncs.pfnRemoveEntity(a0->field_0->field_208);
    }
    else if (a0->field_0->field_1a0 & 1)
    {
        v0 = CGlobalState::Find(&gGlobalState, a0->field_64);
        if (v0)
            return v0;
        return CGlobalState::EntityAdd(&gGlobalState, a0->field_64, gpGlobals->field_c, a0->field_6c);
    }
    else
    {
        return a0->field_0;
    }
}

