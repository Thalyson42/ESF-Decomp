// Holster__15CBasePlayerItemi @0x138730 size=46
typedef struct st_538730_1 {
    char padding_0[128];
    struct st_538730_2 *field_80;
} st_538730_1;

typedef struct st_538730_0 {
    char padding_0[188];
    unsigned int field_bc;
    unsigned int field_c0;
} st_538730_0;

typedef struct st_538730_2 {
    struct st_538730_0 *field_0;
} st_538730_2;

unsigned int * Holster__15CBasePlayerItemi(st_538730_1 *a0)
{
    unsigned int *v0;  // eax

    *(unsigned int *)(*(int *)a0->field_80 + 188) = 0;
    v0 = *(int *)a0->field_80;
    v0[48] = 0;
    return v0;
}

