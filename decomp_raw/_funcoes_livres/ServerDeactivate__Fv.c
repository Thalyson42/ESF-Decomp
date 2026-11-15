// ServerDeactivate__Fv @0xa0ea0 size=60
extern unsigned int g_serveractive;
extern int BotManager;

unsigned int ServerDeactivate__Fv(void)
{
    unsigned int v1;  // eax

    if (g_serveractive == 1)
    {
        g_serveractive = 0;
        v1 = CBotManager::MapFree(&BotManager);
    }
    return v1;
}

