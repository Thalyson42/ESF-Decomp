// HandleBotDebugCommands__11CBotManager @0x169e90 size=53
typedef struct st_569e90_1 {
    char padding_0[3397];
    char field_d45;
} st_569e90_1;

typedef struct st_569e90_0 {
    unsigned int field_0;
} st_569e90_0;

extern st_569e90_0 *g_engfuncs.pfnIsDedicatedServer;

st_569e90_1 * HandleBotDebugCommands__11CBotManager(st_569e90_1 *a0)
{
    st_569e90_1 *v1;  // eax
    unsigned int v0;  // [bp-0x1c]

    v1 = g_engfuncs.pfnIsDedicatedServer(v0);
    if (!v1)
        return v1;
    a0->field_d45 = 0;
    return a0;
}

