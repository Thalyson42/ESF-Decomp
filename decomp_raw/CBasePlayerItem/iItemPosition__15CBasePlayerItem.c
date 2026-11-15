// iItemPosition__15CBasePlayerItem @0x1391d0 size=48
typedef struct st_5391d0_0 {
    char padding_0[136];
    unsigned int field_88;
} st_5391d0_0;

extern unsigned int _15CBasePlayerItem.ItemInfoArray+4[4];

int iItemPosition__15CBasePlayerItem(st_5391d0_0 *a0)
{
    return _15CBasePlayerItem.ItemInfoArray+4[11 * a0->field_88];
}

