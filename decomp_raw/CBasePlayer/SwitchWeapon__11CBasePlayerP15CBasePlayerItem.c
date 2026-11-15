// SwitchWeapon__11CBasePlayerP15CBasePlayerItem @0xfdf60 size=178
typedef struct st_4fdf60_3 {
    char padding_0[1912];
    unsigned int field_778;
    char padding_77c[8];
    unsigned int field_784;
    char padding_788[480];
    struct st_4fdf60_2 *field_968;
} st_4fdf60_3;

typedef struct st_4fdf60_0 {
    char padding_0[248];
    struct st_4fdf60_1 *field_f8;
    struct st_4fdf60_1 *field_fc;
    struct st_4fdf60_1 *field_100;
    struct st_4fdf60_1 *field_104;
} st_4fdf60_0;

typedef struct st_4fdf60_1 {
    unsigned int field_0;
} st_4fdf60_1;

typedef struct st_4fdf60_2 {
    char padding_0[96];
    struct st_4fdf60_0 *field_60;
} st_4fdf60_2;

unsigned int SwitchWeapon__11CBasePlayerP15CBasePlayerItem(st_4fdf60_3 *a0, st_4fdf60_2 *a1)
{
    if (!a1->field_60->field_f8(a1))
        return 0;
    if (a0->field_968)
    {
        if (!a0->field_968->field_60->field_100(a0->field_968))
            return 0;
        a0->field_968->field_60->field_104(a0->field_968, 0);
        a0->field_778 = 0;
        a0->field_784 = 0;
    }
    a0->field_968 = a1;
    a1->field_60->field_fc(a1);
    return 1;
}

