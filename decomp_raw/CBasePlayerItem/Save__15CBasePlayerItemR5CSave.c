// Save__15CBasePlayerItemR5CSave @0x137cb0 size=84
extern int _15CBasePlayerItem.m_SaveData;

unsigned int Save__15CBasePlayerItemR5CSave(int a0, int a1)
{
    return (!CBaseAnimating::Save(a0, a1) ? 0 : CSave::WriteFields(a1, "CBasePlayerItem", a0, &_15CBasePlayerItem.m_SaveData, 3));
}

