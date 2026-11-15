// EmitChargeSound__11CMouthblast @0xdb4b0 size=51
typedef struct st_4db4b0_0 {
    char padding_0[128];
    int field_80;
} st_4db4b0_0;

int EmitChargeSound__11CMouthblast(st_4db4b0_0 *a0)
{
    return CBasePlayer::EmitClassSound(a0->field_80, "mouthbeam_charge.wav");
}

