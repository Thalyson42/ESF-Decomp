// EmitShootSound__12CGenericBeam @0xc5f70 size=82
typedef struct st_4c5f70_1 {
    char padding_0[128];
    struct st_4c5f70_2 *field_80;
} st_4c5f70_1;

typedef struct st_4c5f70_2 {
    struct st_4c5f70_0 *field_0;
} st_4c5f70_2;

typedef struct st_4c5f70_0 {
    char padding_0[520];
    int field_208;
} st_4c5f70_0;

int EmitShootSound__12CGenericBeam(st_4c5f70_1 *a0)
{
    return EMIT_SOUND_DYN(*(int *)(*(int *)a0->field_80 + 520), 1, "weapons/basicbeam_fire.wav", 0x3f800000, 0.800000011920929f, 0, 100);
}

