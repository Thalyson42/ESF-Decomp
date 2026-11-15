// Use__15CGamePlayerTeamP11CBaseEntityT18USE_TYPEf @0xd0f70 size=213
typedef struct st_4d0f70_0 {
    char padding_0[160];
    struct st_4d0f70_1 *field_a0;
} st_4d0f70_0;

typedef struct st_4d0f70_1 {
    unsigned int field_0;
} st_4d0f70_1;

typedef struct st_4d0f70_2 {
    char padding_0[96];
    struct st_4d0f70_0 *field_60;
} st_4d0f70_2;

typedef struct st_4d0f70_4 {
    char padding_0[216];
    struct st_4d0f70_1 *field_d8;
} st_4d0f70_4;

typedef struct st_4d0f70_3 {
    char padding_0[152];
    unsigned int field_98;
} st_4d0f70_3;

typedef struct st_4d0f70_5 {
    char padding_0[68];
    struct st_4d0f70_4 *field_44;
} st_4d0f70_5;

extern st_4d0f70_5 *g_pGameRules;
extern st_4d0f70_3 *gpGlobals;

void* Use__15CGamePlayerTeamP11CBaseEntityT18USE_TYPEf(void* *a0, st_4d0f70_2 *a1)
{
    void* v0;  // eax
    unsigned int v1;  // edi

    v0 = CRuleEntity::CanFireForActivator(a0, a1);
    if (v0)
    {
        if (a1->field_60->field_a0(a1))
        {
            v1 = CGamePlayerTeam::TargetTeamName(a0, (int)(*a0)[456] + gpGlobals->field_98);
            if (v1)
                g_pGameRules->field_44->field_d8(g_pGameRules, a1, v1, (unsigned int)((int)(*a0)[416]) >> 1 & 1, (unsigned int)((int)(*a0)[416]) >> 2 & 1);
        }
        v0 = *a0;
        if ((char)(*a0)[416] & 1)
            v0 = UTIL_Remove(a0);
    }
    return v0;
}

