// Spawn__12CTriggerSave @0x12ec60 size=118
typedef struct st_52ec60_4 {
    struct st_52ec60_3 *field_0;
    char padding_4[16];
    unsigned int field_14;
    unsigned int field_18;
} st_52ec60_4;

typedef struct st_52ec60_3 {
    char padding_0[520];
    unsigned int field_208;
} st_52ec60_3;

typedef struct st_52ec60_0 {
    char padding_0[28];
    struct st_52ec60_1 *field_1c;
} st_52ec60_0;

typedef struct st_52ec60_1 {
    unsigned int field_0;
} st_52ec60_1;

typedef struct st_52ec60_2 {
    char padding_0[68];
    struct st_52ec60_0 *field_44;
} st_52ec60_2;

extern char SaveTouch__12CTriggerSaveP11CBaseEntity;
extern st_52ec60_2 *g_pGameRules;
extern st_52ec60_1 *g_616818;

unsigned int Spawn__12CTriggerSave(st_52ec60_4 *a0)
{
    unsigned int v0;  // eax

    if (!g_pGameRules->field_44->field_1c(g_pGameRules))
    {
        v0 = _INSERT(sub_489e50(a0), 0, 0);
        a0->field_14 = v0 | 0xffff0000;
        a0->field_18 = &SaveTouch__12CTriggerSaveP11CBaseEntity;
        return v0 | 0xffff0000;
    }
    return g_616818(a0->field_0->field_208);
}

