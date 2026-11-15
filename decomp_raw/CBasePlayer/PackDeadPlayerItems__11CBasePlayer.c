// PackDeadPlayerItems__11CBasePlayer @0xf3840 size=71
typedef struct st_4f3840_0 {
    char padding_0[1884];
    int field_75c;
} st_4f3840_0;

int PackDeadPlayerItems__11CBasePlayer(st_4f3840_0 *a0)
{
    if (a0->field_75c > 0)
        CPlayerBag::CreateBag(a0->field_75c, a0);
    return CBasePlayer::RemoveAllItems(a0, 1);
}

