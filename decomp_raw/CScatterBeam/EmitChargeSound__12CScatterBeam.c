// EmitChargeSound__12CScatterBeam @0x1106a0 size=51
typedef struct st_5106a0_0 {
    char padding_0[128];
    int field_80;
} st_5106a0_0;

int EmitChargeSound__12CScatterBeam(st_5106a0_0 *a0)
{
    return CBasePlayer::EmitClassSound(a0->field_80, "scatterbeamha_charge.wav");
}

