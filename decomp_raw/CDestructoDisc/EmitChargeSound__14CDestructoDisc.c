// EmitChargeSound__14CDestructoDisc @0xaa550 size=110
typedef struct st_4aa550_1 {
    char padding_0[128];
    struct st_4aa550_2 *field_80;
} st_4aa550_1;

typedef struct st_4aa550_2 {
    struct st_4aa550_0 *field_0;
} st_4aa550_2;

typedef struct st_4aa550_0 {
    char padding_0[520];
    int field_208;
} st_4aa550_0;

int EmitChargeSound__14CDestructoDisc(st_4aa550_1 *a0)
{
    CBasePlayer::EmitClassSound(a0->field_80, "destructodisc_charge.wav");
    return EMIT_SOUND_DYN(*(int *)(*(int *)a0->field_80 + 520), 1, "weapons/destructodisc_charge.wav", 0x3f800000, 0.800000011920929f, 0, 100);
}

