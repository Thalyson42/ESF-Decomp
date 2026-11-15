// EmitShootSound__8CRenzoku @0x10e370 size=82
typedef struct st_50e370_1 {
    char padding_0[128];
    struct st_50e370_2 *field_80;
} st_50e370_1;

typedef struct st_50e370_2 {
    struct st_50e370_0 *field_0;
} st_50e370_2;

typedef struct st_50e370_0 {
    char padding_0[520];
    int field_208;
} st_50e370_0;

int EmitShootSound__8CRenzoku(st_50e370_1 *a0)
{
    return sub_489390(*(int *)(*(int *)a0->field_80 + 520), 1, "weapons/kiblast.wav", 0x3f800000, 0.800000011920929f, 0, 100);
}

