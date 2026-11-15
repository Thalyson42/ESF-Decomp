// Spawn__12CChangeLevel @0x12d7d0 size=226
typedef struct st_52d7d0_1 {
    struct st_52d7d0_0 *field_0;
    char padding_4[16];
    unsigned int field_14;
    unsigned int field_18;
    unsigned int field_1c;
    unsigned int field_20;
} st_52d7d0_1;

typedef struct st_52d7d0_0 {
    char padding_0[416];
    char field_1a0;
    char padding_1a1[43];
    unsigned int field_1cc;
} st_52d7d0_0;

typedef struct st_52d7d0_2 {
    unsigned int field_0;
} st_52d7d0_2;

extern char UseChangeLevel__12CChangeLevelP11CBaseEntityT18USE_TYPEf;
extern char TouchChangeLevel__12CChangeLevelP11CBaseEntity;
extern int g_5a9f1c;
extern st_52d7d0_2 *g_6168b4;

st_52d7d0_0 * Spawn__12CChangeLevel(st_52d7d0_1 *a0)
{
    st_52d7d0_0 *v1;  // eax
    unsigned int v2;  // eax

    if (!sub_488af0(&a0[7].padding_4[4], &g_5a9f1c))
        g_6168b4(1, "a trigger_changelevel doesn't have a map");
    if (!sub_488af0(a0[8].padding_4, &g_5a9f1c))
        g_6168b4(1, "trigger_changelevel to %s doesn't have a landmark", &a0[7].padding_4[4]);
    if (a0->field_0->field_1cc)
    {
        a0->field_1c = _INSERT(a0->field_0, 0, 0) | 0xffff0000;
        a0->field_20 = &UseChangeLevel__12CChangeLevelP11CBaseEntityT18USE_TYPEf;
    }
    sub_489e50(a0);
    v1 = a0->field_0;
    if (v1->field_1a0 & 2)
        return v1;
    v2 = _INSERT(v1, 0, 0);
    a0->field_14 = v2 | 0xffff0000;
    a0->field_18 = &TouchChangeLevel__12CChangeLevelP11CBaseEntity;
    return v2 | 0xffff0000;
}

