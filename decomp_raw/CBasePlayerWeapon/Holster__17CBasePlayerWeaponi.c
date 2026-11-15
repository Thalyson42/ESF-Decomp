// Holster__17CBasePlayerWeaponi @0x138d50 size=56
typedef struct st_538d50_1 {
    char padding_0[128];
    struct st_538d50_2 *field_80;
    char padding_84[56];
    unsigned int field_bc;
} st_538d50_1;

typedef struct st_538d50_0 {
    char padding_0[188];
    unsigned int field_bc;
    unsigned int field_c0;
} st_538d50_0;

typedef struct st_538d50_2 {
    struct st_538d50_0 *field_0;
} st_538d50_2;

unsigned int * Holster__17CBasePlayerWeaponi(st_538d50_1 *a0)
{
    unsigned int *v0;  // eax

    a0->field_bc = 0;
    *(unsigned int *)(*(int *)a0->field_80 + 188) = 0;
    v0 = *(int *)a0->field_80;
    v0[48] = 0;
    return v0;
}

