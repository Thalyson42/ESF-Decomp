// BarnacleVictimReleased__12CBaseMonster @0xd3cc0 size=73
typedef struct st_4d3cc0_1 {
    char padding_0[32];
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
    char padding_2c[220];
    unsigned int field_108;
} st_4d3cc0_1;

typedef struct st_4d3cc0_0 {
    struct st_4d3cc0_1 *field_0;
    char padding_4[384];
    unsigned int field_184;
} st_4d3cc0_0;

extern unsigned int g_vecZero;
extern unsigned int g_vecZero+4;
extern unsigned int g_vecZero+8;

unsigned int * BarnacleVictimReleased__12CBaseMonster(st_4d3cc0_0 *a0)
{
    unsigned int *v0;  // ecx
    unsigned int *v1;  // eax

    a0->field_184 = 1;
    v0 = a0->field_0;
    v0[8] = g_vecZero;
    v0[9] = g_vecZero+4;
    v0[10] = g_vecZero+8;
    v1 = a0->field_0;
    v1[66] = 4;
    return v1;
}

