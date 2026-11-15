// EmitChargeSound__10CPowerBeam @0x10d0c0 size=110
typedef struct st_50d0c0_1 {
    char padding_0[128];
    struct st_50d0c0_2 *field_80;
} st_50d0c0_1;

typedef struct st_50d0c0_2 {
    struct st_50d0c0_0 *field_0;
} st_50d0c0_2;

typedef struct st_50d0c0_0 {
    char padding_0[520];
    int field_208;
} st_50d0c0_0;

int EmitChargeSound__10CPowerBeam(st_50d0c0_1 *a0)
{
    CBasePlayer::EmitClassSound(a0->field_80, "powerbeam.wav");
    return EMIT_SOUND_DYN(*(int *)(*(int *)a0->field_80 + 520), 1, "weapons/mase_charge.wav", 0x3f800000, 0.800000011920929f, 0, 100);
}

