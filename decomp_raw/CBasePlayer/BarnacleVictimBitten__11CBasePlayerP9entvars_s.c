// BarnacleVictimBitten__11CBasePlayerP9entvars_s @0xfdc20 size=74
typedef struct st_4fdc20_1 {
    unsigned int field_0;
} st_4fdc20_1;

typedef struct st_4fdc20_3 {
    char padding_0[352];
    float field_160;
    char padding_164[88];
    float field_1bc;
} st_4fdc20_3;

typedef struct st_4fdc20_0 {
    char padding_0[52];
    struct st_4fdc20_1 *field_34;
} st_4fdc20_0;

typedef struct st_4fdc20_2 {
    struct st_4fdc20_3 *field_0;
    char padding_4[92];
    struct st_4fdc20_0 *field_60;
} st_4fdc20_2;

int BarnacleVictimBitten__11CBasePlayerP9entvars_s(st_4fdc20_2 *a0, unsigned int a1)
{
    return a0->field_60->field_34(a0, a1, a1, a0->field_0->field_160 + a0->field_0->field_1bc, 8196);
}

