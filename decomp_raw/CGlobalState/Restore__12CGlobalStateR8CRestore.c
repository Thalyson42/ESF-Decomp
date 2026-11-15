// Restore__12CGlobalStateR8CRestore @0x139f40 size=229
typedef struct st_539f40_0 {
    char padding_0[4];
    int field_4;
} st_539f40_0;

typedef struct st_539f40_1 {
    char padding_0[152];
    unsigned int field_98;
} st_539f40_1;

extern int _12CGlobalState.m_SaveData;
extern int gGlobalEntitySaveData;
extern st_539f40_1 *gpGlobals;

unsigned int Restore__12CGlobalStateR8CRestore(st_539f40_0 *a0, int a1)
{
    int v4;  // edi
    int v0;  // [bp-0x88]
    char v1;  // [bp-0x84]
    char v2;  // [bp-0x44]
    int v3;  // [bp-0x24]

    CGlobalState::ClearStates(a0);
    if (!CRestore::ReadFields(a1, "GLOBAL", a0, &_12CGlobalState.m_SaveData, 1))
        return 0;
    v0 = a0->field_4;
    a0->field_4 = 0;
    v4 = 0;
    if (0 >= v0)
        return 1;
    do
    {
        if (!CRestore::ReadFields(a1, "GENT", &v1, &gGlobalEntitySaveData, 3))
            return 0;
    } while ((CGlobalState::EntityAdd(a0, &(&v1)[-1 * gpGlobals->field_98], &(&v2)[-1 * gpGlobals->field_98], v3), v4 += 1, v4 < v0));
    return 1;
}

