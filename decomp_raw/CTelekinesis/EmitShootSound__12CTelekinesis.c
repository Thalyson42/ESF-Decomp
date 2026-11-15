// EmitShootSound__12CTelekinesis @0x12a120 size=110
typedef struct st_52a120_1 {
    char padding_0[128];
    struct st_52a120_2 *field_80;
} st_52a120_1;

typedef struct st_52a120_2 {
    struct st_52a120_0 *field_0;
} st_52a120_2;

typedef struct st_52a120_0 {
    char padding_0[520];
    int field_208;
} st_52a120_0;

int EmitShootSound__12CTelekinesis(st_52a120_1 *a0)
{
    EMIT_SOUND_DYN(*(int *)(*(int *)a0->field_80 + 520), 1, "weapons/telekinesis_fire.wav", 0x3f800000, 0.800000011920929f, 0, 100);
    return CBasePlayer::EmitClassSound(a0->field_80, "telekinesis.wav");
}

