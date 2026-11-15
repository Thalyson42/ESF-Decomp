// EmitShootSound__11CFriezaDisc @0xc12c0 size=82
typedef struct st_4c12c0_1 {
    char padding_0[128];
    struct st_4c12c0_2 *field_80;
} st_4c12c0_1;

typedef struct st_4c12c0_2 {
    struct st_4c12c0_0 *field_0;
} st_4c12c0_2;

typedef struct st_4c12c0_0 {
    char padding_0[520];
    int field_208;
} st_4c12c0_0;

int EmitShootSound__11CFriezaDisc(st_4c12c0_1 *a0)
{
    return sub_489390(*(int *)(*(int *)a0->field_80 + 520), 1, "weapons/disc_fire.wav", 0x3f800000, 0.800000011920929f, 0, 100);
}

