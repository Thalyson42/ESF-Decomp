// UTIL_Model_Remove__Fii @0x134900 size=132
typedef struct st_534900_0 {
    unsigned int field_0;
} st_534900_0;

extern unsigned int gmsgManipModel;
extern st_534900_0 *g_engfuncs.pfnMessageBegin;
extern st_534900_0 *g_engfuncs.pfnMessageEnd;
extern st_534900_0 *g_engfuncs.pfnWriteByte;
extern st_534900_0 *g_engfuncs.pfnWriteShort;

int UTIL_Model_Remove__Fii(unsigned int a0, int a1)
{
    int v0;  // edi

    v0 = a1;
    if (v0 <= 10)
    {
        v0 = 11;
    }
    else if (v0 > 16)
    {
        v0 = 16;
    }
    g_engfuncs.pfnMessageBegin(2, gmsgManipModel, 0, 0);
    g_engfuncs.pfnWriteByte(v0);
    g_engfuncs.pfnWriteShort(a0);
    return g_engfuncs.pfnMessageEnd();
}

