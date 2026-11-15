// Use__15CGameTeamMasterP11CBaseEntityT18USE_TYPEf @0xd01a0 size=211
typedef struct st_4d01a0_2 {
    char padding_0[168];
    struct st_4d01a0_3 *field_a8;
} st_4d01a0_2;

typedef struct st_4d01a0_3 {
    unsigned int field_0;
} st_4d01a0_3;

typedef struct st_4d01a0_0 {
    char padding_0[416];
    char field_1a0;
} st_4d01a0_0;

typedef struct st_4d01a0_4 {
    char padding_0[96];
    struct st_4d01a0_2 *field_60;
} st_4d01a0_4;

typedef struct st_4d01a0_1 {
    struct st_4d01a0_0 *field_0;
    char padding_4[100];
    unsigned int field_68;
    int field_6c;
} st_4d01a0_1;

typedef struct st_4d01a0_5 {
    char padding_0[204];
    struct st_4d01a0_3 *field_cc;
} st_4d01a0_5;

typedef struct st_4d01a0_6 {
    char padding_0[68];
    struct st_4d01a0_5 *field_44;
} st_4d01a0_6;

extern st_4d01a0_6 *g_pGameRules;

int Use__15CGameTeamMasterP11CBaseEntityT18USE_TYPEf(st_4d01a0_1 *a0, st_4d01a0_4 *a1, unsigned int a2, unsigned int a3, float a4)
{
    unsigned int v0;  // eax
    unsigned int v1;  // eax
    unsigned int v2;  // eax

    v0 = CRuleEntity::CanFireForActivator(a0, a1);
    if (!v0)
    {
        return v1;
    }
    else if (a3 == 2)
    {
        v1 = _INSERT(v0, 0, 0);
        if (0.0 <= a4)
        {
            v2 = a1->field_60->field_a8(a1);
            a0->field_68 = g_pGameRules->field_44->field_cc(g_pGameRules, v2);
            return v1;
        }
        a0->field_68 = 0xffffffff;
        return v1;
    }
    else if (CGameTeamMaster::TeamMatch(a0, a1))
    {
        CBaseEntity::SUB_UseTargets(a0, a1, a0->field_6c, a4);
        if (!(a0->field_0->field_1a0 & 1))
            return v1;
        UTIL_Remove(a0);
        return v1;
    }
    else
    {
        return v1;
    }
}

