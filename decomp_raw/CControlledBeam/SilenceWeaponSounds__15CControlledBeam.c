// SilenceWeaponSounds__15CControlledBeam @0xa8a80 size=82
typedef struct st_4a8a80_1 {
    char padding_0[128];
    struct st_4a8a80_2 *field_80;
} st_4a8a80_1;

typedef struct st_4a8a80_2 {
    struct st_4a8a80_0 *field_0;
} st_4a8a80_2;

typedef struct st_4a8a80_0 {
    char padding_0[520];
    int field_208;
} st_4a8a80_0;

int SilenceWeaponSounds__15CControlledBeam(st_4a8a80_1 *a0)
{
    return EMIT_SOUND_DYN(*(int *)(*(int *)a0->field_80 + 520), 1, "common/null.wav", 0x3f800000, 0.800000011920929f, 0, 100);
}

