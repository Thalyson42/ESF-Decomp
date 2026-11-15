// EmitChargeSound__10CGallitGun @0xc4340 size=51
typedef struct st_4c4340_0 {
    char padding_0[128];
    int field_80;
} st_4c4340_0;

int EmitChargeSound__10CGallitGun(st_4c4340_0 *a0)
{
    return CBasePlayer::EmitClassSound(a0->field_80, "gallitgun.wav");
}

