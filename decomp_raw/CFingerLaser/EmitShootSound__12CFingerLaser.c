// EmitShootSound__12CFingerLaser @0xbdc10 size=82
typedef struct st_4bdc10_1 {
    char padding_0[128];
    struct st_4bdc10_2 *field_80;
} st_4bdc10_1;

typedef struct st_4bdc10_2 {
    struct st_4bdc10_0 *field_0;
} st_4bdc10_2;

typedef struct st_4bdc10_0 {
    char padding_0[520];
    int field_208;
} st_4bdc10_0;

int EmitShootSound__12CFingerLaser(st_4bdc10_1 *a0)
{
    return sub_489390(*(int *)(*(int *)a0->field_80 + 520), 1, "weapons/fingerlaser.wav", 0x3f800000, 0.800000011920929f, 0, 100);
}

