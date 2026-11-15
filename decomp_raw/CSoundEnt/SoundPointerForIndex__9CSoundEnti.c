// SoundPointerForIndex__9CSoundEnti @0x11f350 size=115
typedef struct st_51f350_0 {
    unsigned int field_0;
} st_51f350_0;

extern st_51f350_0 *g_engfuncs.pfnAlertMessage;
extern unsigned int pSoundEnt;

unsigned int SoundPointerForIndex__9CSoundEnti(int a0)
{
    unsigned int v0;  // edx

    if (pSoundEnt)
    {
        if (a0 > 63)
        {
            v0 = "SoundPointerForIndex() - Index too large!\n";
        }
        else
        {
            if (a0 >= 0)
                return pSoundEnt + a0 * 32 + 116;
            v0 = "SoundPointerForIndex() - Index < 0!\n";
        }
        g_engfuncs.pfnAlertMessage(1, v0);
    }
    return 0;
}

