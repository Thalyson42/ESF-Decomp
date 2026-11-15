// iFlags__15CBasePlayerItem @0x139350 size=48
typedef struct st_539350_0 {
    char padding_0[136];
    unsigned int field_88;
} st_539350_0;

extern unsigned int g_62f744[4];

int iFlags__15CBasePlayerItem(st_539350_0 *a0)
{
    return g_62f744[11 * a0->field_88];
}

