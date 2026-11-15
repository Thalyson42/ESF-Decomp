// EmitShootSound__11CSolarFlare @0x11a400 size=110
typedef struct st_51a400_1 {
    char padding_0[128];
    struct st_51a400_2 *field_80;
} st_51a400_1;

typedef struct st_51a400_2 {
    struct st_51a400_0 *field_0;
} st_51a400_2;

typedef struct st_51a400_0 {
    char padding_0[520];
    int field_208;
} st_51a400_0;

int EmitShootSound__11CSolarFlare(st_51a400_1 *a0)
{
    CBasePlayer::EmitClassSound(a0->field_80, "solarflare.wav");
    return EMIT_SOUND_DYN(*(int *)(*(int *)a0->field_80 + 520), 1, "weapons/solarflare.wav", 0x3f800000, 0.800000011920929f, 0, 100);
}

