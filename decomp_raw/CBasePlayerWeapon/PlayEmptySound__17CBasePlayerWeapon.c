// PlayEmptySound__17CBasePlayerWeapon @0x138ca0 size=107
typedef struct st_538ca0_1 {
    char padding_0[128];
    struct st_538ca0_2 *field_80;
    char padding_84[8];
    unsigned int field_8c;
} st_538ca0_1;

typedef struct st_538ca0_2 {
    struct st_538ca0_0 *field_0;
} st_538ca0_2;

typedef struct st_538ca0_0 {
    char padding_0[520];
    int field_208;
} st_538ca0_0;

unsigned int PlayEmptySound__17CBasePlayerWeapon(st_538ca0_1 *a0)
{
    if (a0->field_8c)
    {
        EMIT_SOUND_DYN(*(int *)(*(int *)a0->field_80 + 520), 1, "weapons/357_cock1.wav", 0.800000011920929f, 0.800000011920929f, 0, 100);
        a0->field_8c = 0;
    }
    return 0;
}

