// FShouldSwitchWeapon__18CHalfLifeMultiplayP11CBasePlayerP15CBasePlayerItem @0xdbc80 size=149
typedef struct st_4dbc80_2 {
    char padding_0[96];
    struct st_4dbc80_0 *field_60;
    char padding_64[36];
    unsigned int field_88;
} st_4dbc80_2;

typedef struct st_4dbc80_4 {
    char padding_0[2408];
    struct st_4dbc80_2 *field_968;
} st_4dbc80_4;

typedef struct st_4dbc80_0 {
    char padding_0[248];
    struct st_4dbc80_1 *field_f8;
} st_4dbc80_0;

typedef struct st_4dbc80_1 {
    unsigned int field_0;
} st_4dbc80_1;

typedef struct st_4dbc80_5 {
    int field_0;
    unsigned int field_4;
    unsigned int field_8;
    unsigned int field_c;
} st_4dbc80_5;

extern st_4dbc80_5 _15CBasePlayerItem.ItemInfoArray+40;

unsigned int FShouldSwitchWeapon__18CHalfLifeMultiplayP11CBasePlayerP15CBasePlayerItem(unsigned int a0, st_4dbc80_4 *a1, st_4dbc80_2 *a2)
{
    if (a2->field_60->field_f8(a2) && (!a1->field_968 || (*(int *)&a1->field_968->field_60[1].padding_0[4])(a1->field_968) && (&_15CBasePlayerItem.ItemInfoArray+40.field_0)[11 * a2->field_88] > (&_15CBasePlayerItem.ItemInfoArray+40.field_0)[11 * a1->field_968->field_88]))
        return 1;
    return 0;
}

