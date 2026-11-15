// InitBodyQue__Fv @0x139a30 size=165
typedef struct st_539a30_0 {
    char padding_0[536];
    struct st_539a30_0 *field_218;
} st_539a30_0;

typedef struct st_539a30_1 {
    char padding_0[152];
    unsigned int field_98;
} st_539a30_1;

typedef struct st_539a30_2 {
    unsigned int field_0;
} st_539a30_2;

extern st_539a30_2 *g_engfuncs.pfnCreateNamedEntity;
extern st_539a30_1 *gpGlobals;
extern st_539a30_0 *g_pBodyQueueHead;

st_539a30_0 * InitBodyQue__Fv(void)
{
    st_539a30_0 *v2;  // esi
    int v3;  // edi
    st_539a30_0 *v4;  // eax
    unsigned int v0;  // [bp-0x8]

    v0 = -1 * gpGlobals->field_98 + 5945697;
    g_pBodyQueueHead = g_engfuncs.pfnCreateNamedEntity(v0);
    v2 = &g_pBodyQueueHead->padding_0[128];
    if (!g_pBodyQueueHead)
        v2 = NULL;
    v3 = 0;
    do
    {
        v4 = g_engfuncs.pfnCreateNamedEntity(v0);
        *(st_539a30_0 **)&v2->padding_0[408] = v4;
        v2 = &v4->padding_0[128];
        if (!v4)
            v2 = NULL;
    } while ((v3 += 1, v3 <= 2));
    *(st_539a30_0 **)&v2->padding_0[408] = g_pBodyQueueHead;
    return g_pBodyQueueHead;
}

