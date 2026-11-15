// ClientPrint__FP9entvars_siPCcN42 @0x1329a0 size=236
typedef struct st_5329a0_0 {
    char padding_0[520];
    unsigned int field_208;
} st_5329a0_0;

typedef struct st_5329a0_1 {
    unsigned int field_0;
} st_5329a0_1;

extern unsigned int gmsgTextMsg;
extern st_5329a0_1 *g_engfuncs.pfnMessageBegin;
extern st_5329a0_1 *g_engfuncs.pfnMessageEnd;
extern st_5329a0_1 *g_engfuncs.pfnWriteByte;
extern st_5329a0_1 *g_engfuncs.pfnWriteString;

int ClientPrint__FP9entvars_siPCcN42(st_5329a0_0 *a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6)
{
    unsigned int v0;  // [bp-0x1c]
    unsigned int v1;  // [bp-0x18]
    unsigned int v2;  // [bp-0x14]

    g_engfuncs.pfnMessageBegin(1, gmsgTextMsg, 0, a0->field_208, v0, v1, v2);
    g_engfuncs.pfnWriteByte(a1);
    g_engfuncs.pfnWriteString(a2);
    if (a3)
        g_engfuncs.pfnWriteString(a3);
    if (a4)
        g_engfuncs.pfnWriteString(a4);
    if (a5)
        g_engfuncs.pfnWriteString(a5);
    if (a6)
        g_engfuncs.pfnWriteString(a6);
    return g_engfuncs.pfnMessageEnd();
}

