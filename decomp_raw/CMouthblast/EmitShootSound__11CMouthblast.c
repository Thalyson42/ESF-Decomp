// EmitShootSound__11CMouthblast @0xdb470 size=51
typedef struct st_4db470_0 {
    char padding_0[128];
    int field_80;
} st_4db470_0;

int EmitShootSound__11CMouthblast(st_4db470_0 *a0)
{
    return CBasePlayer::EmitClassSound(a0->field_80, "mouthbeam.wav");
}

