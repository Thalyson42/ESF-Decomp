// EmitShootSound__8CMasenko @0xd2830 size=51
typedef struct st_4d2830_0 {
    char padding_0[128];
    int field_80;
} st_4d2830_0;

int EmitShootSound__8CMasenko(st_4d2830_0 *a0)
{
    return CBasePlayer::EmitClassSound(a0->field_80, "ha.wav");
}

