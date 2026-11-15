// UTIL_ClientPrintAll__FiPCcN41 @0x1328b0 size=228
typedef struct st_5328b0_0 {
    unsigned int field_0;
} st_5328b0_0;

extern unsigned int gmsgTextMsg;
extern st_5328b0_0 *g_engfuncs.pfnMessageBegin;
extern st_5328b0_0 *g_engfuncs.pfnMessageEnd;
extern st_5328b0_0 *g_engfuncs.pfnWriteByte;
extern st_5328b0_0 *g_engfuncs.pfnWriteString;

int UTIL_ClientPrintAll__FiPCcN41(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
    unsigned int v0;  // [bp-0x1c]
    unsigned int v1;  // [bp-0x18]
    unsigned int v2;  // [bp-0x14]

    g_engfuncs.pfnMessageBegin(2, gmsgTextMsg, 0, 0, v0, v1, v2);
    g_engfuncs.pfnWriteByte(a0);
    g_engfuncs.pfnWriteString(a1);
    if (a2)
        g_engfuncs.pfnWriteString(a2);
    if (a3)
        g_engfuncs.pfnWriteString(a3);
    if (a4)
        g_engfuncs.pfnWriteString(a4);
    if (a5)
        g_engfuncs.pfnWriteString(a5);
    return g_engfuncs.pfnMessageEnd();
}

