// UTIL_Printf__FPCciP7edict_s @0x179c80 size=297
typedef struct st_579c80_1 {
    char padding_0[124];
    struct st_579c80_2 *field_7c;
} st_579c80_1;

typedef struct st_579c80_2 {
    struct st_579c80_0 *field_0;
} st_579c80_2;

typedef struct st_579c80_0 {
    char padding_0[520];
    int field_208;
} st_579c80_0;

typedef struct st_579c80_3 {
    unsigned int field_0;
} st_579c80_3;

extern st_579c80_3 *g_engfuncs.pfnPEntityOfEntOffset;
extern st_579c80_3 *g_engfuncs.pfnServerPrint;
extern st_579c80_3 *g_engfuncs.pfnIsDedicatedServer;
extern st_579c80_1 *BotManager+12;

int UTIL_Printf__FPCciP7edict_s(int a0, int a1, int a2)
{
    int v0;  // edi
    st_579c80_1 *v1;  // eax
    st_579c80_0 **v2;  // eax
    st_579c80_1 *v3;  // eax
    st_579c80_0 **v4;  // eax

    v0 = a2;
    if ((char)IsNull(v0))
    {
        if (!g_engfuncs.pfnIsDedicatedServer() && !(v1 = BotManager+12, !BotManager+12 && !(v1 = g_engfuncs.pfnPEntityOfEntOffset(0), v1)))
            v2 = v1->field_7c;
        else
            v2 = NULL;
        if (!(char)IsNull(v2))
        {
            if (!g_engfuncs.pfnIsDedicatedServer() && !(v3 = BotManager+12, !BotManager+12 && !(v3 = g_engfuncs.pfnPEntityOfEntOffset(0), v3)))
                v4 = v3->field_7c;
            else
                v4 = NULL;
            v0 = *v4->field_208;
        }
    }
    if ((unsigned int)(a1 - 1) > 1 && !(char)IsNull(v0))
        return ClientPrint(v0 + 128, a1, a0, 0, 0, 0, 0);
    return g_engfuncs.pfnServerPrint(a0);
}

