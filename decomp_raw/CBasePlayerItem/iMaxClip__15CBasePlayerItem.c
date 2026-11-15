// iMaxClip__15CBasePlayerItem @0x1392f0 size=48
typedef struct st_5392f0_0 {
    char padding_0[136];
    unsigned int field_88;
} st_5392f0_0;

extern unsigned int g_62f73c[4];

int iMaxClip__15CBasePlayerItem(st_5392f0_0 *a0)
{
    return g_62f73c[11 * a0->field_88];
}

