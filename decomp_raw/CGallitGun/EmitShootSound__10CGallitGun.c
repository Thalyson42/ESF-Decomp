// EmitShootSound__10CGallitGun @0xc4300 size=51
typedef struct st_4c4300_0 {
    char padding_0[128];
    int field_80;
} st_4c4300_0;

int EmitShootSound__10CGallitGun(st_4c4300_0 *a0)
{
    return CBasePlayer::EmitClassSound(a0->field_80, "gallitgunfire.wav");
}

