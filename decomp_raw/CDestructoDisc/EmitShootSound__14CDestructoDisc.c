// EmitShootSound__14CDestructoDisc @0xaa4e0 size=110
typedef struct st_4aa4e0_1 {
    char padding_0[128];
    struct st_4aa4e0_2 *field_80;
} st_4aa4e0_1;

typedef struct st_4aa4e0_2 {
    struct st_4aa4e0_0 *field_0;
} st_4aa4e0_2;

typedef struct st_4aa4e0_0 {
    char padding_0[520];
    int field_208;
} st_4aa4e0_0;

int EmitShootSound__14CDestructoDisc(st_4aa4e0_1 *a0)
{
    CBasePlayer::EmitClassSound(a0->field_80, "destructodisc.wav");
    return EMIT_SOUND_DYN(*(int *)(*(int *)a0->field_80 + 520), 1, "weapons/disc_fire.wav", 0x3f800000, 0.800000011920929f, 0, 100);
}

