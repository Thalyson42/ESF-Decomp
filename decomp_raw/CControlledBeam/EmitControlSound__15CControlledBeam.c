// EmitControlSound__15CControlledBeam @0xa89d0 size=82
typedef struct st_4a89d0_1 {
    char padding_0[128];
    struct st_4a89d0_2 *field_80;
} st_4a89d0_1;

typedef struct st_4a89d0_2 {
    struct st_4a89d0_0 *field_0;
} st_4a89d0_2;

typedef struct st_4a89d0_0 {
    char padding_0[520];
    int field_208;
} st_4a89d0_0;

int EmitControlSound__15CControlledBeam(st_4a89d0_1 *a0)
{
    return EMIT_SOUND_DYN(*(int *)(*(int *)a0->field_80 + 520), 4, "weapons/beamfire.wav", 0x3f800000, 0.800000011920929f, 0, 100);
}

