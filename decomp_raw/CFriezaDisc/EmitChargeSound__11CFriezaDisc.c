// EmitChargeSound__11CFriezaDisc @0xc1320 size=82
typedef struct st_4c1320_1 {
    char padding_0[128];
    struct st_4c1320_2 *field_80;
} st_4c1320_1;

typedef struct st_4c1320_2 {
    struct st_4c1320_0 *field_0;
} st_4c1320_2;

typedef struct st_4c1320_0 {
    char padding_0[520];
    int field_208;
} st_4c1320_0;

int EmitChargeSound__11CFriezaDisc(st_4c1320_1 *a0)
{
    return EMIT_SOUND_DYN(*(int *)(*(int *)a0->field_80 + 520), 1, "weapons/miscdisc_charge.wav", 0x3f800000, 0.800000011920929f, 0, 100);
}

