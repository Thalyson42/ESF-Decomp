// CancelScript__12CCineMonster @0x115a10 size=273
typedef struct st_515a10_0 {
    char padding_0[460];
    unsigned int field_1cc;
    char padding_1d0[56];
    int field_208;
} st_515a10_0;

typedef struct st_515a10_1 {
    struct st_515a10_0 *field_0;
    char padding_4[680];
    unsigned int field_2ac;
} st_515a10_1;

typedef struct st_515a10_2 {
    char padding_0[152];
    unsigned int field_98;
} st_515a10_2;

typedef struct st_515a10_3 {
    unsigned int field_0;
} st_515a10_3;

extern st_515a10_3 *g_engfuncs.pfnFindEntityByString;
extern st_515a10_3 *g_engfuncs.pfnAlertMessage;
extern st_515a10_3 *g_engfuncs.pfnEntOffsetOfPEntity;
extern st_515a10_2 *gpGlobals;

int CancelScript__12CCineMonster(st_515a10_1 *a0)
{
    int v3;  // eax
    unsigned int v4;  // edi
    int v0;  // [bp-0x2c]
    unsigned int v1;  // [bp-0x28]
    unsigned int v2;  // [bp-0x24]

    g_engfuncs.pfnAlertMessage(2, "Cancelling script: %s\n", a0->field_2ac + gpGlobals->field_98);
    if (!a0->field_0->field_1cc)
        return ScriptEntityCancel(a0->field_0->field_208);
    v2 = a0->field_0->field_1cc + gpGlobals->field_98;
    v1 = "targetname";
    v0 = 0;
    while (1)
    {
        v3 = g_engfuncs.pfnFindEntityByString(v0, v1, v2);
        v0 = v3;
        v4 = 0;
        if (!v0 || (v3 = g_engfuncs.pfnEntOffsetOfPEntity(v0), !v3))
            v4 = 1;
        if (v4)
            break;
        ScriptEntityCancel(v0);
        v2 = a0->field_0->field_1cc + gpGlobals->field_98;
        v1 = "targetname";
    }
    return v3;
}

