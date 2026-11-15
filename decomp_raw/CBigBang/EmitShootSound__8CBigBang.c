// EmitShootSound__8CBigBang @0x90a50 size=110
typedef struct st_490a50_1 {
    char padding_0[128];
    struct st_490a50_2 *field_80;
} st_490a50_1;

typedef struct st_490a50_2 {
    struct st_490a50_0 *field_0;
} st_490a50_2;

typedef struct st_490a50_0 {
    char padding_0[520];
    int field_208;
} st_490a50_0;

int EmitShootSound__8CBigBang(st_490a50_1 *a0)
{
    CBasePlayer::EmitClassSound(a0->field_80, "bigbang.wav");
    return EMIT_SOUND_DYN(*(int *)(*(int *)a0->field_80 + 520), 1, "weapons/bigbang_fire.wav", 0x3f800000, 0.800000011920929f, 0, 100);
}

