// Stonify__11CDragonBall @0xae720 size=97
typedef struct st_4ae720_1 {
    char padding_0[260];
    unsigned int field_104;
    char padding_108[8];
    unsigned int field_110;
} st_4ae720_1;

typedef struct st_4ae720_0 {
    struct st_4ae720_1 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    unsigned int field_14;
    unsigned int field_18;
} st_4ae720_0;

typedef struct st_4ae720_2 {
    float field_0;
} st_4ae720_2;

extern char UnStoneThink__11CDragonBall;
extern char dbrespawntime;
extern float g_5bd004;
extern st_4ae720_2 *gpGlobals;

int Stonify__11CDragonBall(st_4ae720_0 *a0)
{
    unsigned int *v0;  // eax

    v0 = a0->field_0;
    v0[0x44] = 1;
    a0->field_c = _INSERT(v0, 0, 0) | 0xffff0000;
    a0->field_10 = &UnStoneThink__11CDragonBall;
    a0->field_14 = 0;
    a0->field_18 = 0;
    *(float *)&a0->field_0->field_104 = *(float *)gpGlobals + g_5bd004;
    return &dbrespawntime;
}

