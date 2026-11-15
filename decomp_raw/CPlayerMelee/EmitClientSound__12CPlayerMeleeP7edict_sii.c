// EmitClientSound__12CPlayerMeleeP7edict_sii @0x104a10 size=112
typedef struct st_504a10_0 {
    unsigned int field_0;
} st_504a10_0;

extern char g_vecZero;
extern st_504a10_0 *g_engfuncs.pfnPlaybackEvent;
extern unsigned short m_usMeleeSounds;

int EmitClientSound__12CPlayerMeleeP7edict_sii(unsigned int a0, unsigned int a1, int a2, int a3)
{
    unsigned int v0;  // [bp-0x1c]
    unsigned int v1;  // [bp-0x18]
    int v2;  // [bp-0x8]
    int v3;  // [bp-0x8]

    v2 = a3;
    v3 = a2;
    return g_engfuncs.pfnPlaybackEvent(4, a1, (m_usMeleeSounds | 0x610000) & 0xffff, 0, &g_vecZero, &g_vecZero, (float)v3, (float)v2, 0, 0, 0, 0, v0, v1);
}

