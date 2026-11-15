// EmitShootSound__12CScatterBeam @0x110630 size=110
typedef struct st_510630_1 {
    char padding_0[128];
    struct st_510630_2 *field_80;
} st_510630_1;

typedef struct st_510630_2 {
    struct st_510630_0 *field_0;
} st_510630_2;

typedef struct st_510630_0 {
    char padding_0[520];
    int field_208;
} st_510630_0;

int EmitShootSound__12CScatterBeam(st_510630_1 *a0)
{
    sub_48d4f0(a0->field_80, "scatterbeamha.wav");
    return sub_489390(*(int *)(*(int *)a0->field_80 + 520), 1, "weapons/scatterbeam.wav", 0x3f800000, 0.800000011920929f, 0, 100);
}

