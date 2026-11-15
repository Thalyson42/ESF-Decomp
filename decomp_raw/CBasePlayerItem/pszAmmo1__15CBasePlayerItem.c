// pszAmmo1__15CBasePlayerItem @0x139200 size=48
typedef struct st_539200_0 {
    char padding_0[136];
    unsigned int field_88;
} st_539200_0;

extern unsigned int _15CBasePlayerItem.ItemInfoArray+8[4];

int pszAmmo1__15CBasePlayerItem(st_539200_0 *a0)
{
    return _15CBasePlayerItem.ItemInfoArray+8[11 * a0->field_88];
}

