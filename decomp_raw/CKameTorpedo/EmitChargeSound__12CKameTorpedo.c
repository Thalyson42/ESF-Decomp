// EmitChargeSound__12CKameTorpedo @0xcac80 size=82
typedef struct st_4cac80_1 {
    char padding_0[128];
    struct st_4cac80_2 *field_80;
} st_4cac80_1;

typedef struct st_4cac80_2 {
    struct st_4cac80_0 *field_0;
} st_4cac80_2;

typedef struct st_4cac80_0 {
    char padding_0[520];
    int field_208;
} st_4cac80_0;

int EmitChargeSound__12CKameTorpedo(st_4cac80_1 *a0)
{
    return EMIT_SOUND_DYN(*(int *)(*(int *)a0->field_80 + 520), 1, "weapons/kame_charge.wav", 0x3f800000, 0.800000011920929f, 0, 100);
}

