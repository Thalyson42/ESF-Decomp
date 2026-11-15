// Spawn__18CTriggerEndSection @0x12ee30 size=152
typedef struct st_52ee30_4 {
    struct st_52ee30_3 *field_0;
    char padding_4[16];
    unsigned int field_14;
    unsigned int field_18;
    unsigned int field_1c;
    unsigned int field_20;
} st_52ee30_4;

typedef struct st_52ee30_3 {
    char padding_0[416];
    char field_1a0;
    char padding_1a1[103];
    unsigned int field_208;
} st_52ee30_3;

typedef struct st_52ee30_0 {
    char padding_0[28];
    struct st_52ee30_1 *field_1c;
} st_52ee30_0;

typedef struct st_52ee30_1 {
    unsigned int field_0;
} st_52ee30_1;

typedef struct st_52ee30_2 {
    char padding_0[68];
    struct st_52ee30_0 *field_44;
} st_52ee30_2;

extern char EndSectionUse__18CTriggerEndSectionP11CBaseEntityT18USE_TYPEf;
extern char EndSectionTouch__18CTriggerEndSectionP11CBaseEntity;
extern st_52ee30_2 *g_pGameRules;
extern st_52ee30_1 *g_engfuncs.pfnRemoveEntity;

unsigned int Spawn__18CTriggerEndSection(st_52ee30_4 *a0)
{
    unsigned int v1;  // eax
    unsigned int v2;  // eax

    if (g_pGameRules->field_44->field_1c(g_pGameRules))
        return g_engfuncs.pfnRemoveEntity(a0->field_0->field_208);
    a0->field_1c = _INSERT(CBaseTrigger::InitTrigger(a0), 0, 0) | 0xffff0000;
    a0->field_20 = &EndSectionUse__18CTriggerEndSectionP11CBaseEntityT18USE_TYPEf;
    v1 = _INSERT(a0->field_0, 0, a0->field_0->field_1a0 ^ 1);
    if (!!(a0->field_0->field_1a0 & 1))
        return v1;
    v2 = _INSERT(v1, 0, 0);
    a0->field_14 = v2 | 0xffff0000;
    a0->field_18 = &EndSectionTouch__18CTriggerEndSectionP11CBaseEntity;
    return v2 | 0xffff0000;
}

