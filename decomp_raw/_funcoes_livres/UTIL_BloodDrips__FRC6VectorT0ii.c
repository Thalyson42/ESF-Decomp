// UTIL_BloodDrips__FRC6VectorT0ii @0x133670 size=396
typedef struct st_533670_0 {
    char padding_0[24];
    struct st_533670_1 *field_18;
} st_533670_0;

typedef struct st_533670_1 {
    unsigned int field_0;
} st_533670_1;

typedef struct st_533670_2 {
    char padding_0[68];
    struct st_533670_0 *field_44;
} st_533670_2;

extern st_533670_2 *g_pGameRules;
extern unsigned int g_Language;
extern st_533670_1 *g_engfuncs.pfnMessageBegin;
extern st_533670_1 *g_engfuncs.pfnMessageEnd;
extern st_533670_1 *g_engfuncs.pfnWriteByte;
extern st_533670_1 *g_engfuncs.pfnWriteShort;
extern st_533670_1 *g_engfuncs.pfnWriteCoord;
extern short g_sModelIndexBloodDrop;
extern short g_sModelIndexBloodSpray;

unsigned int UTIL_BloodDrips__FRC6VectorT0ii(float *a0, unsigned int a1, int a2, unsigned int a3)
{
    unsigned int v0;  // edi
    unsigned int v1;  // eax
    int v2;  // eax

    v0 = a3;
    v1 = UTIL_ShouldShowBlood(a2);
    if (!v1)
    {
        return v1;
    }
    else if (a2 == -0x1)
    {
        return v1;
    }
    else if (v0)
    {
        if (g_Language == 1 && a2 == 247)
            a2 = 0;
        if (g_pGameRules->field_44->field_18(g_pGameRules))
            v0 *= 2;
        if ((int)v0 > 0xff)
            v0 = 0xff;
        g_engfuncs.pfnMessageBegin(4, 23, a0, 0);
        g_engfuncs.pfnWriteByte(115);
        g_engfuncs.pfnWriteCoord(*a0);
        g_engfuncs.pfnWriteCoord(a0[1]);
        g_engfuncs.pfnWriteCoord(a0[2]);
        g_engfuncs.pfnWriteShort(g_sModelIndexBloodSpray);
        g_engfuncs.pfnWriteShort(g_sModelIndexBloodDrop);
        g_engfuncs.pfnWriteByte(a2);
        v2 = v0 / 10;
        if (v2 < 3)
            v2 = 3;
        if (v2 > 16)
            v2 = 16;
        g_engfuncs.pfnWriteByte(v2);
        return g_engfuncs.pfnMessageEnd(v2);
    }
    else
    {
        return v1;
    }
}

