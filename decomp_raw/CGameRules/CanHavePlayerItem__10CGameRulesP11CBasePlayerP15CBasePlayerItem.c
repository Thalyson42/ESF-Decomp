// CanHavePlayerItem__10CGameRulesP11CBasePlayerP15CBasePlayerItem @0xc4a60 size=149
typedef struct st_4c4a60_1 {
    char padding_0[136];
    unsigned int field_88;
} st_4c4a60_1;

typedef struct st_4c4a60_2 {
    char padding_0[160];
    struct st_4c4a60_3 *field_a0;
} st_4c4a60_2;

typedef struct st_4c4a60_0 {
    char padding_0[368];
    unsigned int field_170;
} st_4c4a60_0;

typedef struct st_4c4a60_3 {
    unsigned int field_0;
} st_4c4a60_3;

typedef struct st_4c4a60_4 {
    char padding_0[68];
    struct st_4c4a60_2 *field_44;
} st_4c4a60_4;

extern unsigned int _15CBasePlayerItem.ItemInfoArray+8[4];
extern unsigned int _15CBasePlayerItem.ItemInfoArray+12[4];

unsigned int CanHavePlayerItem__10CGameRulesP11CBasePlayerP15CBasePlayerItem(st_4c4a60_4 *a0, st_4c4a60_0 **a1, st_4c4a60_1 *a2)
{
    unsigned int v0;  // ecx

    if (!*a1->field_170)
    {
        v0 = a2->field_88 * 44;
        if (*(int *)(v0 + (char *)&_15CBasePlayerItem.ItemInfoArray+8[0]) && a0->field_44->field_a0(a0, a1, *(int *)(v0 + (char *)&_15CBasePlayerItem.ItemInfoArray+8[0]), *(int *)(v0 + (char *)&_15CBasePlayerItem.ItemInfoArray+12[0])) || !CBasePlayer::HasPlayerItem(a1, a2))
            return 1;
    }
    return 0;
}

