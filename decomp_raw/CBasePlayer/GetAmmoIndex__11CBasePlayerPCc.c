// GetAmmoIndex__11CBasePlayerPCc @0xfd360 size=108
extern unsigned int _15CBasePlayerItem.AmmoInfoArray[4];

int GetAmmoIndex__11CBasePlayerPCc(int a0)
{
    int v0;  // esi
    unsigned int v1;  // eax

    if (a0)
    {
        v0 = 1;
        do
        {
            v1 = v0 * 8;
            if (*(int *)(v1 + (char *)&_15CBasePlayerItem.AmmoInfoArray[0]) && !sub_48cac0(a0, *(int *)(v1 + (char *)&_15CBasePlayerItem.AmmoInfoArray[0])))
                return v0;
        } while ((v0 += 1, v0 <= 31));
    }
    return -0x1;
}

