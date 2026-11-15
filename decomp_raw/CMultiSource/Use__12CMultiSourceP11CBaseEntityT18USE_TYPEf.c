// Use__12CMultiSourceP11CBaseEntityT18USE_TYPEf @0x95ac0 size=247
typedef struct st_495ac0_2 {
    unsigned int field_0;
} st_495ac0_2;

typedef struct st_495ac0_0 {
    char padding_0[460];
    unsigned int field_1cc;
} st_495ac0_0;

typedef struct st_495ac0_3 {
    struct st_495ac0_0 *field_0;
    char padding_4[92];
    struct st_495ac0_1 *field_60;
    char padding_64[384];
    int field_1e4;
    unsigned int field_1e8;
} st_495ac0_3;

typedef struct st_495ac0_1 {
    char padding_0[72];
    struct st_495ac0_2 *field_48;
} st_495ac0_1;

typedef struct st_495ac0_4 {
    char padding_0[152];
    unsigned int field_98;
} st_495ac0_4;

extern st_495ac0_2 *g_engfuncs.pfnAlertMessage;
extern st_495ac0_4 *gpGlobals;

unsigned int Use__12CMultiSourceP11CBaseEntityT18USE_TYPEf(st_495ac0_3 *a0, unsigned int a1, st_495ac0_2 **a2)
{
    int v0;  // esi
    int v1;  // esi
    unsigned int v2;  // eax
    int v3;  // eax

    v0 = 0;
    do
    {
        v1 = v0;
    } while (v0 < a0->field_1e4 && (v0 = v1 + 1, EHANDLE::__opP11CBaseEntity(&(&a0->field_0)[2 * v1 + 25]) != a2));
    if (v0 > a0->field_1e4)
        return g_engfuncs.pfnAlertMessage(1, "MultiSrc:Used by non member %s.\n", *(int *)*a2 + gpGlobals->field_98);
    a0->padding_64[252 + 4 * v0] = a0->padding_64[252 + 4 * v0] ^ 1;
    v2 = a0->field_60->field_48(a0, a1);
    if (!v2)
        return v2;
    g_engfuncs.pfnAlertMessage(2, "Multisource %s enabled (%d inputs)\n", a0->field_0->field_1cc + gpGlobals->field_98, a0->field_1e4);
    v3 = 3;
    if (a0->field_1e8)
        v3 = 1;
    return CBaseEntity::SUB_UseTargets(a0, 0, v3, 0);
}

