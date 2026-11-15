// ClientCommand__18CHalfLifeMultiplayP11CBasePlayerPCc @0xdb830 size=62
extern int g_VoiceGameMgr;

unsigned int ClientCommand__18CHalfLifeMultiplayP11CBasePlayerPCc(unsigned int a0, int a1, int a2)
{
    return (!(char)CVoiceGameMgr::ClientCommand(&g_VoiceGameMgr, a1, a2) ? 0 : 1);
}

