// EmitChargeSound__14CBurningAttack @0x950b0 size=110
typedef struct st_4950b0_1 {
    char padding_0[128];
    struct st_4950b0_2 *field_80;
} st_4950b0_1;

typedef struct st_4950b0_2 {
    struct st_4950b0_0 *field_0;
} st_4950b0_2;

typedef struct st_4950b0_0 {
    char padding_0[520];
    int field_208;
} st_4950b0_0;

int EmitChargeSound__14CBurningAttack(st_4950b0_1 *a0)
{
    sub_489390(*(int *)(*(int *)a0->field_80 + 520), 1, "weapons/burning_charge.wav", 0x3f800000, 0.800000011920929f, 0, 100);
    return sub_48d4f0(a0->field_80, "burning_charge.wav");
}

