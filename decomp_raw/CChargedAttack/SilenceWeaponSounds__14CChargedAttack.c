// SilenceWeaponSounds__14CChargedAttack @0x9ef50 size=82
typedef struct st_49ef50_1 {
    char padding_0[128];
    struct st_49ef50_2 *field_80;
} st_49ef50_1;

typedef struct st_49ef50_2 {
    struct st_49ef50_0 *field_0;
} st_49ef50_2;

typedef struct st_49ef50_0 {
    char padding_0[520];
    int field_208;
} st_49ef50_0;

int SilenceWeaponSounds__14CChargedAttack(st_49ef50_1 *a0)
{
    return EMIT_SOUND_DYN(*(int *)(*(int *)a0->field_80 + 520), 2, "common/null.wav", 0x3f800000, 0.800000011920929f, 0, 100);
}

