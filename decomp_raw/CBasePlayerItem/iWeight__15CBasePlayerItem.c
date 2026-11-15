// iWeight__15CBasePlayerItem @0x139320 size=48
typedef struct st_539320_0 {
    char padding_0[136];
    unsigned int field_88;
} st_539320_0;

extern unsigned int _15CBasePlayerItem.ItemInfoArray+40[4];

int iWeight__15CBasePlayerItem(st_539320_0 *a0)
{
    return _15CBasePlayerItem.ItemInfoArray+40[11 * a0->field_88];
}

