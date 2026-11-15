// Use__13CStripWeaponsP11CBaseEntityT18USE_TYPEf @0xfe2e0 size=163
typedef struct st_4fe2e0_5 {
    char padding_0[124];
    struct st_4fe2e0_4 *field_7c;
} st_4fe2e0_5;

typedef struct st_4fe2e0_3 {
    char padding_0[160];
    struct st_4fe2e0_1 *field_a0;
} st_4fe2e0_3;

typedef struct st_4fe2e0_1 {
    unsigned int field_0;
} st_4fe2e0_1;

typedef struct st_4fe2e0_4 {
    char padding_0[96];
    struct st_4fe2e0_3 *field_60;
} st_4fe2e0_4;

typedef struct st_4fe2e0_0 {
    char padding_0[28];
    struct st_4fe2e0_1 *field_1c;
} st_4fe2e0_0;

typedef struct st_4fe2e0_2 {
    char padding_0[68];
    struct st_4fe2e0_0 *field_44;
} st_4fe2e0_2;

extern st_4fe2e0_2 *g_pGameRules;
extern st_4fe2e0_1 *g_engfuncs.pfnPEntityOfEntOffset;
extern st_4fe2e0_1 *g_engfuncs.pfnPEntityOfEntIndex;

st_4fe2e0_4 * Use__13CStripWeaponsP11CBaseEntityT18USE_TYPEf(unsigned int a0, st_4fe2e0_4 *a1)
{
    st_4fe2e0_4 *v0;  // esi
    st_4fe2e0_4 *v1;  // edi
    st_4fe2e0_4 *v2;  // eax
    st_4fe2e0_5 *v3;  // eax
    st_4fe2e0_4 *v4;  // edi

    v0 = a1;
    v1 = NULL;
    if (!v0 || (v2 = v0->field_60->field_a0(v0), !v2))
    {
        v2 = g_pGameRules->field_44->field_1c(g_pGameRules);
        v0 = v1;
        if (!v2)
        {
            v3 = g_engfuncs.pfnPEntityOfEntIndex(1);
            if (v3 || (v3 = g_engfuncs.pfnPEntityOfEntOffset(0), v3))
                v0 = v3->field_7c;
            else
                v0 = NULL;
            v2 = v0;
        }
    }
    v4 = v0;
    if (v4)
        v2 = CBasePlayer::RemoveAllItems(v4, 0);
    return v2;
}

