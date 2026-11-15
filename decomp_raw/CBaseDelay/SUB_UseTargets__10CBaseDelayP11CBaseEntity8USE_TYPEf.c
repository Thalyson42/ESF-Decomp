// SUB_UseTargets__10CBaseDelayP11CBaseEntity8USE_TYPEf @0x122680 size=615
typedef struct st_522680_8 {
    char padding_0[124];
    int field_7c;
    unsigned int field_80;
} st_522680_8;

typedef struct st_522680_4 {
    char padding_0[160];
    struct st_522680_5 *field_a0;
} st_522680_4;

typedef struct st_522680_5 {
    unsigned int field_0;
} st_522680_5;

typedef struct st_522680_2 {
    struct st_522680_2 *field_0;
    char padding_4[96];
    float field_64;
    unsigned int field_68;
    char padding_6c[152];
    unsigned int field_104;
    char padding_108[120];
    unsigned int field_180;
    char padding_184[20];
    unsigned int field_198;
    char padding_19c[44];
    unsigned int field_1c8;
} st_522680_2;

typedef struct st_522680_0 {
    struct st_522680_0 *field_0;
    char padding_4[96];
    unsigned int field_64;
    unsigned int field_68;
    char padding_6c[152];
    unsigned int field_104;
    char padding_108[120];
    int field_180;
    char padding_184[20];
    unsigned int field_198;
    char padding_19c[44];
    unsigned int field_1c8;
} st_522680_0;

typedef struct st_522680_3 {
    char padding_0[520];
    unsigned int field_208;
} st_522680_3;

typedef struct st_522680_6 {
    struct st_522680_3 *field_0;
    char padding_4[92];
    struct st_522680_4 *field_60;
} st_522680_6;

typedef struct st_522680_1 {
    struct st_522680_0 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[80];
    unsigned int field_64;
    unsigned int field_68;
} st_522680_1;

typedef struct st_522680_7 {
    float field_0;
    char padding_4[148];
    unsigned int field_98;
} st_522680_7;

extern char DelayThink__10CBaseDelay;
extern st_522680_5 *g_engfuncs.pfnFindEntityByString;
extern st_522680_5 *g_engfuncs.pfnAlertMessage;
extern st_522680_5 *g_engfuncs.pfnPEntityOfEntOffset;
extern st_522680_5 *g_engfuncs.pfnEntOffsetOfPEntity;
extern st_522680_7 *gpGlobals;

st_522680_2 * SUB_UseTargets__10CBaseDelayP11CBaseEntity8USE_TYPEf(st_522680_2 *a0, st_522680_6 *a1, int a2, float a3)
{
    st_522680_1 *v3;  // esi
    st_522680_0 *v4;  // eax
    st_522680_2 *v5;  // ecx
    st_522680_0 *v7;  // eax
    st_522680_0 *v8;  // eax
    unsigned int v9;  // esi
    st_522680_8 *v10;  // eax
    int v11;  // eax
    st_522680_2 *v12;  // eax
    st_522680_8 *v0;  // [bp-0x2c]
    unsigned int v1;  // [bp-0x28]
    unsigned int v2;  // [bp-0x24]

    if (!a0->field_0->field_1c8 && !a0->field_68)
        return a0->field_0;
    if (a0->field_64 != 0.0f)
    {
        v3 = GetClassPtr__H1Z10CBaseDelay_PX01_PX01(0);
        v3->field_0->field_0 = -1 * gpGlobals->field_98 + 5935849;
        v4 = v3->field_0;
        v5 = a0;
        *(float *)&v4->field_104 = gpGlobals->field_0 + v5->field_64;
        v3->field_c = _INSERT(v4, 0, 0) | 0xffff0000;
        v3->field_10 = &DelayThink__10CBaseDelay;
        v3->field_0->field_180 = a2;
        v3->field_68 = v5->field_68;
        v3->field_64 = 0;
        v3->field_0->field_1c8 = v5->field_0->field_1c8;
        if (a1 && a1->field_60->field_a0(a1))
        {
            v7 = v3->field_0;
            v7->field_198 = a1->field_0->field_208;
            return v7;
        }
        v8 = v3->field_0;
        v8->field_198 = 0;
        return v8;
    }
    else
    {
        if (a0->field_68)
        {
            g_engfuncs.pfnAlertMessage(2, "KillTarget: %s\n", a0->field_68 + gpGlobals->field_98);
            v2 = a0->field_68 + gpGlobals->field_98;
            v1 = "targetname";
            v0 = NULL;
            while (1)
            {
                v0 = g_engfuncs.pfnFindEntityByString(v0, v1, v2);
                v9 = 0;
                if (!v0 || !g_engfuncs.pfnEntOffsetOfPEntity(v0))
                    v9 = 1;
                if (v9)
                    break;
                v10 = v0;
                if (v10 || (v10 = g_engfuncs.pfnPEntityOfEntOffset(0), v10))
                    v11 = v10->field_7c;
                else
                    v11 = 0;
                UTIL_Remove(v11);
                g_engfuncs.pfnAlertMessage(2, "killing %s\n", v0->field_80 + gpGlobals->field_98);
                v2 = a0->field_68 + gpGlobals->field_98;
                v1 = "targetname";
            }
        }
        v12 = a0;
        if (!v12->field_0->field_1c8)
            return v12;
        FireTargets(v12->field_0->field_1c8 + gpGlobals->field_98, a1, v12, a2, a3);
        return v12;
    }
}

