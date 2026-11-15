// UpdateGameMode__18CHalfLifeMultiplayP11CBasePlayer @0xdbed0 size=189
typedef struct st_4dbed0_0 {
    char padding_0[520];
    unsigned int field_208;
} st_4dbed0_0;

typedef struct st_4dbed0_1 {
    unsigned int field_0;
} st_4dbed0_1;

extern float characterlimit+12;
extern unsigned int gmsgGameMode;
extern st_4dbed0_1 *g_engfuncs.pfnMessageBegin;
extern st_4dbed0_1 *g_engfuncs.pfnMessageEnd;
extern st_4dbed0_1 *g_engfuncs.pfnWriteByte;

int UpdateGameMode__18CHalfLifeMultiplayP11CBasePlayer(unsigned int a0, st_4dbed0_0 **a1)
{
    unsigned int *v7;  // eax
    unsigned int v0;  // [bp-0x2c]
    unsigned int v1;  // [bp-0x28]
    unsigned int v2;  // [bp-0x24]
    unsigned int v3;  // [bp-0x20]
    int v4;  // [bp-0xc]
    unsigned short v5;  // [bp-0x8]
    unsigned short v6;  // [bp-0x6]

    if (a1)
    {
        v3 = *a1->field_208;
        v2 = 0;
        v1 = gmsgGameMode;
        v0 = 1;
        v7 = g_engfuncs.pfnMessageBegin;
    }
    else
    {
        v3 = 0;
        v2 = 0;
        v1 = gmsgGameMode;
        v0 = 2;
        v7 = g_engfuncs.pfnMessageBegin;
    }
    v7(v0, v1, v2, v3);
    g_engfuncs.pfnWriteByte(0);
    v6 = __fnstcw();
    v5 = v6 | 0xc00;
    v4 = (int)characterlimit+12;
    g_engfuncs.pfnWriteByte(v4 & 0xff);
    return g_engfuncs.pfnMessageEnd();
}

