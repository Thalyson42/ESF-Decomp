// Spawn__6CDecal @0x139560 size=210
typedef struct st_539560_1 {
    struct st_539560_0 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[8];
    unsigned int field_1c;
    unsigned int field_20;
} st_539560_1;

typedef struct st_539560_0 {
    char padding_0[260];
    unsigned int field_104;
    char padding_108[8];
    int field_110;
    char padding_114[141];
    char field_1a1;
    char padding_1a2[42];
    unsigned int field_1cc;
    char padding_1d0[56];
    unsigned int field_208;
} st_539560_0;

typedef struct st_539560_2 {
    float field_0;
    char padding_4[16];
    float field_14;
} st_539560_2;

typedef struct st_539560_3 {
    unsigned int field_0;
} st_539560_3;

extern char SUB_DoNothing__11CBaseEntity;
extern char TriggerDecal__6CDecalP11CBaseEntityT18USE_TYPEf;
extern char StaticDecal__6CDecal;
extern unsigned int g_model_hulls_fixed;
extern st_539560_3 *g_engfuncs.pfnRemoveEntity;
extern st_539560_2 *gpGlobals;

unsigned int * Spawn__6CDecal(st_539560_1 *a0)
{
    st_539560_0 *v0;  // ecx
    unsigned int v3;  // eax
    unsigned int v4;  // eax

    g_model_hulls_fixed = 0;
    if (a0->field_0->field_110 >= 0 && (gpGlobals->field_14 == 0.0f || !(a0->field_0->field_1a1 & 8)))
    {
        v0 = a0->field_0;
        if (v0->field_1cc)
        {
            v3 = _INSERT(0, 0, 0) | 0xffff0000;
            a0->field_c = v3;
            a0->field_10 = &SUB_DoNothing__11CBaseEntity;
            v4 = _INSERT(v3, 0, 0);
            a0->field_1c = v4 | 0xffff0000;
            a0->field_20 = &TriggerDecal__6CDecalP11CBaseEntityT18USE_TYPEf;
            return v4 | 0xffff0000;
        }
        a0->field_c = _INSERT(0, 0, 0) | 0xffff0000;
        a0->field_10 = &StaticDecal__6CDecal;
        *(float *)&v0->field_104 = gpGlobals->field_0;
        return gpGlobals;
    }
    return g_engfuncs.pfnRemoveEntity(a0->field_0->field_208);
}

