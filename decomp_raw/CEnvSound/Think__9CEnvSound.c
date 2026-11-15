// Think__9CEnvSound @0x11c990 size=600
typedef struct st_51c990_1 {
    char padding_0[260];
    float field_104;
    char padding_108[256];
    unsigned int field_208;
} st_51c990_1;

typedef struct st_51c990_3 {
    char padding_0[720];
    unsigned int field_2d0;
    unsigned int field_2d4;
    float field_2d8;
} st_51c990_3;

typedef struct st_51c990_2 {
    struct st_51c990_1 *field_0;
    char padding_4[100];
    float field_68;
} st_51c990_2;

typedef struct st_51c990_0 {
    float field_0;
} st_51c990_0;

typedef struct st_51c990_4 {
    unsigned int field_0;
} st_51c990_4;

extern st_51c990_4 *g_engfuncs.pfnFindClientInPVS;
extern st_51c990_4 *g_engfuncs.pfnMessageBegin;
extern st_51c990_4 *g_engfuncs.pfnMessageEnd;
extern st_51c990_4 *g_engfuncs.pfnWriteShort;
extern st_51c990_4 *g_engfuncs.pfnEntOffsetOfPEntity;
extern st_51c990_0 *gpGlobals;

unsigned int * Think__9CEnvSound(st_51c990_2 *a0)
{
    unsigned int v9;  // edi
    st_51c990_3 *v10;  // esi
    unsigned int v0;  // [bp-0x4c]
    char *v1;  // [bp-0x44]
    unsigned int v2;  // [bp-0x28]
    unsigned int v3;  // [bp-0x24]
    char v4;  // [bp-0x20]
    int v6;  // [bp-0xc]
    unsigned short v7;  // [bp-0x8]
    unsigned short v8;  // [bp-0x6]

    v9 = g_engfuncs.pfnFindClientInPVS(a0->field_0->field_208);
    v3 = 0;
    if (!v9 || !g_engfuncs.pfnEntOffsetOfPEntity(v9))
        v3 = 1;
    if (!v3)
    {
        v10 = GetClassPtr__H1Z11CBasePlayer_PX01_PX01((!v9 ? 0 : v9 + 128));
        v2 = 0;
        if (!v10->field_2d0 || !g_engfuncs.pfnEntOffsetOfPEntity(v10->field_2d0))
            v2 = 1;
        if (v2 || v10->field_2d0 != a0->field_0->field_208)
        {
            v1 = &v4;
            if (FEnvSoundInRange(a0->field_0, (!v9 ? 0 : v9 + 128)) && (v4 < v10->field_2d8 || v10->field_2d8 == 0.0f))
            {
                v10->field_2d0 = a0->field_0->field_208;
                *(float *)&v10->field_2d4 = a0->field_68;
                *(unsigned int *)&v10->field_2d8 = v4;
                g_engfuncs.pfnMessageBegin(1, 37, 0, v9);
                v8 = __fnstcw();
                v7 = v8 | 0xc00;
                v6 = (int)a0->field_68;
                v0 = (short)v6;
                g_engfuncs.pfnWriteShort(v0);
                g_engfuncs.pfnMessageEnd(v0);
            }
            a0->field_0->field_104 = (float)(0.25 + *(float *)gpGlobals);
            return gpGlobals;
        }
        else if (*(float *)&v10->field_2d4 != 0.0 && v10->field_2d8 != 0.0f)
        {
            v1 = &v4;
            if (FEnvSoundInRange(a0->field_0, (!v9 ? 0 : v9 + 128)))
            {
                *(unsigned int *)&v10->field_2d8 = v4;
                a0->field_0->field_104 = (float)(0.25 + *(float *)gpGlobals);
                return gpGlobals;
            }
            v10->field_2d8 = 0;
            v10->field_2d4 = 0;
        }
    }
    a0->field_0->field_104 = (float)(0.75 + *(float *)gpGlobals);
    return gpGlobals;
}

