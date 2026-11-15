// Save__11CBasePlayerR5CSave @0xfb6d0 size=84
extern int _11CBasePlayer.m_playerSaveData;

unsigned int Save__11CBasePlayerR5CSave(int a0, int a1)
{
    return (!sub_48adc0(a0, a1) ? 0 : sub_48db60(a1, "PLAYER", a0, &_11CBasePlayer.m_playerSaveData, 0x22));
}

