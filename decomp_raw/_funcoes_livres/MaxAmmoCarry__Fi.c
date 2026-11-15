// MaxAmmoCarry__Fi @0x1371f0 size=270
typedef struct st_5371f0_0 {
    char padding_0[152];
    unsigned int field_98;
} st_5371f0_0;

typedef struct st_5371f0_1 {
    unsigned int field_0;
} st_5371f0_1;

extern st_5371f0_1 *g_engfuncs.pfnAlertMessage;
extern st_5371f0_0 *gpGlobals;
extern unsigned int _15CBasePlayerItem.ItemInfoArray;
extern unsigned int _15CBasePlayerItem.ItemInfoArray+8[4];

unsigned int MaxAmmoCarry__Fi(unsigned int a0)
{
    int v3;  // edi
    unsigned int v4;  // esi
    unsigned int v5;  // esi
    unsigned int v6;  // eax
    unsigned int v0;  // [bp-0x10]
    unsigned int *v1;  // [bp-0xc]
    unsigned int v2;  // [bp-0x8]

    v3 = 0;
    v1 = &_15CBasePlayerItem.ItemInfoArray+8[0];
    while (1)
    {
        v2 = &_15CBasePlayerItem.ItemInfoArray;
        v4 = v3 * 44;
        if (*(int *)(v4 + (char *)v1) && !strcmp@GLIBC_2.0(a0 + gpGlobals->field_98, *(int *)(v4 + (char *)v1)))
            return *(int *)(v4 + v2 + 12);
        v0 = &_15CBasePlayerItem.ItemInfoArray;
        v5 = v3 * 44;
        v6 = v0 + 16;
        if (*(int *)(v5 + v6) && !strcmp@GLIBC_2.0(a0 + gpGlobals->field_98, *(int *)(v5 + v6)))
            return *(int *)(v5 + v0 + 20);
        v3 += 1;
        if (v3 > 63)
        {
            g_engfuncs.pfnAlertMessage(1, "MaxAmmoCarry() doesn't recognize '%s'!\n", a0 + gpGlobals->field_98);
            return 0xffffffff;
        }
    }
}

