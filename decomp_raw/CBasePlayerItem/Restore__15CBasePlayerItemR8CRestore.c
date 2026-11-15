// Restore__15CBasePlayerItemR8CRestore @0x137d10 size=84
extern int _15CBasePlayerItem.m_SaveData;

unsigned int Restore__15CBasePlayerItemR8CRestore(int a0, int a1)
{
    return (!CBaseAnimating::Restore(a0, a1) ? 0 : CRestore::ReadFields(a1, "CBasePlayerItem", a0, &_15CBasePlayerItem.m_SaveData, 3));
}

