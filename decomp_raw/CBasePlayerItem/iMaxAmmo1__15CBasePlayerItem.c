// iMaxAmmo1__15CBasePlayerItem @0x139230 size=48
typedef struct st_539230_0 {
    char padding_0[136];
    unsigned int field_88;
} st_539230_0;

extern unsigned int _15CBasePlayerItem.ItemInfoArray+12[4];

int iMaxAmmo1__15CBasePlayerItem(st_539230_0 *a0)
{
    return _15CBasePlayerItem.ItemInfoArray+12[11 * a0->field_88];
}

