// LoadThink__12CRevertSaved @0xfea60 size=75
typedef struct st_4fea60_1 {
    unsigned int field_0;
} st_4fea60_1;

extern st_4fea60_1 *g_engfuncs.pfnServerCommand;

unsigned int LoadThink__12CRevertSaved(void)
{
    return g_engfuncs.pfnServerCommand("reload\n");
}

