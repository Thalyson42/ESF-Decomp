// pszAmmo2__15CBasePlayerItem @0x139260 size=48
typedef struct st_539260_0 {
    char padding_0[136];
    unsigned int field_88;
} st_539260_0;

extern unsigned int _15CBasePlayerItem.ItemInfoArray+16[4];

int pszAmmo2__15CBasePlayerItem(st_539260_0 *a0)
{
    return _15CBasePlayerItem.ItemInfoArray+16[11 * a0->field_88];
}

