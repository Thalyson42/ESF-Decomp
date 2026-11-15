// iFlags__15CBasePlayerItem @0x139350 size=48
typedef struct st_539350_0 {
    char padding_0[136];
    unsigned int field_88;
} st_539350_0;

extern unsigned int _15CBasePlayerItem.ItemInfoArray+36[4];

int iFlags__15CBasePlayerItem(st_539350_0 *a0)
{
    return _15CBasePlayerItem.ItemInfoArray+36[11 * a0->field_88];
}

