// ExecuteChangeLevel__12CChangeLevel @0x12d8c0 size=124
typedef struct st_52d8c0_0 {
    unsigned int field_0;
} st_52d8c0_0;

extern st_52d8c0_0 *g_engfuncs.pfnMessageBegin;
extern st_52d8c0_0 *g_engfuncs.pfnMessageEnd;
extern st_52d8c0_0 *g_engfuncs.pfnWriteByte;

int ExecuteChangeLevel__12CChangeLevel(void)
{
    unsigned int v0;  // [bp-0x1c]
    unsigned int v1;  // [bp-0x18]

    g_engfuncs.pfnMessageBegin(2, 32, 0, 0, v0, v1);
    g_engfuncs.pfnWriteByte(3);
    g_engfuncs.pfnWriteByte(3);
    g_engfuncs.pfnMessageEnd();
    g_engfuncs.pfnMessageBegin(2, 30, 0, 0);
    return g_engfuncs.pfnMessageEnd();
}

