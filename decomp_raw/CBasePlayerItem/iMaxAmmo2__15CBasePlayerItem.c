// iMaxAmmo2__15CBasePlayerItem @0x139290 size=48
typedef struct st_539290_0 {
    char padding_0[136];
    unsigned int field_88;
} st_539290_0;

extern unsigned int g_62f734[4];

int iMaxAmmo2__15CBasePlayerItem(st_539290_0 *a0)
{
    return g_62f734[11 * a0->field_88];
}

