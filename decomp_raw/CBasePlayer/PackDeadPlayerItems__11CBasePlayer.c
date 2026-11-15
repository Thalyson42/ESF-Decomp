// PackDeadPlayerItems__11CBasePlayer @0xf3840 size=71
typedef struct st_4f3840_0 {
    char padding_0[1884];
    int field_75c;
} st_4f3840_0;

int PackDeadPlayerItems__11CBasePlayer(st_4f3840_0 *a0)
{
    if (a0->field_75c > 0)
        sub_48bdc0(a0->field_75c, a0);
    return sub_48b9d0(a0, 1);
}

