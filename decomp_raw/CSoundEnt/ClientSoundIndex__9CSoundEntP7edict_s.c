// ClientSoundIndex__9CSoundEntP7edict_s @0x11f3d0 size=48
typedef struct st_51f3d0_0 {
    unsigned int field_0;
} st_51f3d0_0;

extern st_51f3d0_0 *g_engfuncs.pfnIndexOfEdict;

unsigned int ClientSoundIndex__9CSoundEntP7edict_s(unsigned int a0)
{
    return g_engfuncs.pfnIndexOfEdict(a0) - 1;
}

