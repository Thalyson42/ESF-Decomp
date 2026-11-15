// EmitShootSound__14CBurningAttack @0x95040 size=110
typedef struct st_495040_1 {
    char padding_0[128];
    struct st_495040_2 *field_80;
} st_495040_1;

typedef struct st_495040_2 {
    struct st_495040_0 *field_0;
} st_495040_2;

typedef struct st_495040_0 {
    char padding_0[520];
    int field_208;
} st_495040_0;

int EmitShootSound__14CBurningAttack(st_495040_1 *a0)
{
    EMIT_SOUND_DYN(*(int *)(*(int *)a0->field_80 + 520), 1, "weapons/burning_fire.wav", 0x3f800000, 0.800000011920929f, 0, 100);
    return CBasePlayer::EmitClassSound(a0->field_80, "burning.wav");
}

