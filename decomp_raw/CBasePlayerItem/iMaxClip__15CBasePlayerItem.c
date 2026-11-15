// iMaxClip__15CBasePlayerItem @0x1392f0 size=48
typedef struct st_5392f0_0 {
    char padding_0[136];
    unsigned int field_88;
} st_5392f0_0;

extern unsigned int _15CBasePlayerItem.ItemInfoArray+28[4];

int iMaxClip__15CBasePlayerItem(st_5392f0_0 *a0)
{
    return _15CBasePlayerItem.ItemInfoArray+28[11 * a0->field_88];
}

