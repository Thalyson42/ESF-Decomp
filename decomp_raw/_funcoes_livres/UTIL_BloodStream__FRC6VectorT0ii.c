// UTIL_BloodStream__FRC6VectorT0ii @0x133520 size=324
typedef struct st_533520_0 {
    unsigned int field_0;
} st_533520_0;

extern unsigned int g_Language;
extern st_533520_0 *g_engfuncs.pfnMessageBegin;
extern st_533520_0 *g_engfuncs.pfnMessageEnd;
extern st_533520_0 *g_engfuncs.pfnWriteByte;
extern st_533520_0 *g_engfuncs.pfnWriteCoord;

unsigned int UTIL_BloodStream__FRC6VectorT0ii(float *a0, float *a1, int a2, int a3)
{
    int v0;  // edi
    unsigned int v1;  // eax

    v0 = a2;
    v1 = UTIL_ShouldShowBlood(v0);
    if (!v1)
        return v1;
    if (g_Language == 1 && v0 == 247)
        v0 = 0;
    g_engfuncs.pfnMessageBegin(4, 23, a0, 0);
    g_engfuncs.pfnWriteByte(101);
    g_engfuncs.pfnWriteCoord(*a0);
    g_engfuncs.pfnWriteCoord(a0[1]);
    g_engfuncs.pfnWriteCoord(a0[2]);
    g_engfuncs.pfnWriteCoord(*a1);
    g_engfuncs.pfnWriteCoord(a1[1]);
    g_engfuncs.pfnWriteCoord(a1[2]);
    g_engfuncs.pfnWriteByte(v0);
    if (a3 > 0xff)
        a3 = 0xff;
    g_engfuncs.pfnWriteByte(a3);
    return g_engfuncs.pfnMessageEnd(a3);
}

