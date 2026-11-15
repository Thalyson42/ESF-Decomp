// EmitShootSound__11CKamehameha @0xc9840 size=110
typedef struct st_4c9840_1 {
    char padding_0[128];
    struct st_4c9840_2 *field_80;
} st_4c9840_1;

typedef struct st_4c9840_2 {
    struct st_4c9840_0 *field_0;
} st_4c9840_2;

typedef struct st_4c9840_0 {
    char padding_0[520];
    int field_208;
} st_4c9840_0;

int EmitShootSound__11CKamehameha(st_4c9840_1 *a0)
{
    sub_48d4f0(a0->field_80, "ha.wav");
    return sub_489390(*(int *)(*(int *)a0->field_80 + 520), 1, "weapons/kamehameha_fire.wav", 0x3f800000, 0.800000011920929f, 0, 100);
}

