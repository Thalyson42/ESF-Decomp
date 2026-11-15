// EmitShootSound__16CFinishingBuster @0xbece0 size=110
typedef struct st_4bece0_1 {
    char padding_0[128];
    struct st_4bece0_2 *field_80;
} st_4bece0_1;

typedef struct st_4bece0_2 {
    struct st_4bece0_0 *field_0;
} st_4bece0_2;

typedef struct st_4bece0_0 {
    char padding_0[520];
    int field_208;
} st_4bece0_0;

int EmitShootSound__16CFinishingBuster(st_4bece0_1 *a0)
{
    CBasePlayer::EmitClassSound(a0->field_80, "buster.wav");
    return EMIT_SOUND_DYN(*(int *)(*(int *)a0->field_80 + 520), 1, "weapons/buster_fire.wav", 0x3f800000, 0.800000011920929f, 0, 100);
}

