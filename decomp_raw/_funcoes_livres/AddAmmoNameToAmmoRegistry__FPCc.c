// AddAmmoNameToAmmoRegistry__FPCc @0x137660 size=134
extern int giAmmoIndex;
extern unsigned int _15CBasePlayerItem.AmmoInfoArray[4];
extern unsigned int g_62f604;

unsigned int AddAmmoNameToAmmoRegistry__FPCc(unsigned int a0)
{
    int v0;  // esi
    unsigned int v1;  // eax
    unsigned int v2;  // eax
    unsigned int idx;  // eax

    v0 = 0;
    do
    {
        v1 = v0 * 8;
        if (*(int *)(v1 + (char *)&_15CBasePlayerItem.AmmoInfoArray[0]))
        {
            v2 = sub_48cac0(*(int *)(v1 + (char *)&_15CBasePlayerItem.AmmoInfoArray[0]), a0);
            if (!v2)
                return v2;
        }
    } while ((v0 += 1, v0 <= 31));
    giAmmoIndex = giAmmoIndex + 1;
    if (giAmmoIndex > 31)
        giAmmoIndex = 0;
    idx = giAmmoIndex * 8;
    *(unsigned int *)(idx + (char *)&_15CBasePlayerItem.AmmoInfoArray[0]) = a0;
    *(int *)(idx + (char *)&g_62f604) = giAmmoIndex;
    return idx;
}

