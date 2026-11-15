// PlayerThink__18CHalfLifeMultiplayP11CBasePlayer @0xdc9d0 size=89
typedef struct st_4dc9d0_1 {
    unsigned int field_0;
    char padding_4[380];
    unsigned int field_180;
} st_4dc9d0_1;

typedef struct st_4dc9d0_0 {
    struct st_4dc9d0_1 *field_0;
    char padding_4[708];
    unsigned int field_2c8;
    unsigned int field_2cc;
} st_4dc9d0_0;

typedef struct st_4dc9d0_2 {
    char padding_0[76];
    unsigned int field_4c;
} st_4dc9d0_2;

extern unsigned int g_fGameOver[97];

unsigned int * PlayerThink__18CHalfLifeMultiplayP11CBasePlayer(st_4dc9d0_2 *a0, st_4dc9d0_0 *a1)
{
    unsigned int *v0;  // eax

    if (!g_fGameOver)
        return &g_fGameOver[0];
    if (a1->field_2c8 & 2087)
        a0->field_4c = 1;
    a1->field_2c8 = 0;
    v0 = &a1->field_0->field_0;
    v0[96] = 0;
    a1->field_2cc = 0;
    return v0;
}

