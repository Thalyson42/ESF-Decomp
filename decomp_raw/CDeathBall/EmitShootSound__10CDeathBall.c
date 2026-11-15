// EmitShootSound__10CDeathBall @0xa9630 size=110
typedef struct st_4a9630_1 {
    char padding_0[128];
    struct st_4a9630_2 *field_80;
} st_4a9630_1;

typedef struct st_4a9630_2 {
    struct st_4a9630_0 *field_0;
} st_4a9630_2;

typedef struct st_4a9630_0 {
    char padding_0[520];
    int field_208;
} st_4a9630_0;

int EmitShootSound__10CDeathBall(st_4a9630_1 *a0)
{
    sub_48d4f0(a0->field_80, "deathball.wav");
    return sub_489390(*(int *)(*(int *)a0->field_80 + 520), 1, "weapons/deathball_fire.wav", 0x3f800000, 0.800000011920929f, 0, 100);
}

