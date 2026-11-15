// Spawn__12CFingerLaser @0xbdab0 size=90
typedef struct st_4bdab0_0 {
    char padding_0[12];
    struct st_4bdab0_1 *field_c;
} st_4bdab0_0;

typedef struct st_4bdab0_2 {
    char padding_0[96];
    struct st_4bdab0_0 *field_60;
    char padding_64[36];
    unsigned int field_88;
    char padding_8c[36];
    unsigned int field_b0;
    char padding_b4[12];
    unsigned int field_c0;
    char field_c4;
} st_4bdab0_2;

typedef struct st_4bdab0_1 {
    unsigned int field_0;
} st_4bdab0_1;

int Spawn__12CFingerLaser(st_4bdab0_2 *a0)
{
    a0->field_60->field_c(a0);
    a0->field_88 = 14;
    a0->field_c0 = 0;
    a0->field_b0 = 0xffffffff;
    a0->field_c4 = 0;
    return CBasePlayerItem::FallInit(a0);
}

